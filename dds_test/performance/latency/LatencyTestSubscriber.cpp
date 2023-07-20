/**
 * @file LatencyTestSubscriber.cpp
 *
 */
#include "LatencyTestSubscriber.hpp"

#include <cassert>

#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/log/Colors.hpp>
#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/subscriber/DataReader.hpp>
#include <fastrtps/xmlparser/XMLProfileManager.h>
#include <fastdds/rtps/common/Time_t.h>
#include <fastdds/rtps/transport/UDPv4TransportDescriptor.h>
#include <fastdds/rtps/transport/shared_mem/SharedMemTransportDescriptor.h>

using namespace eprosima::fastrtps::rtps;
using namespace eprosima::fastrtps::types;
using namespace eprosima::fastdds::dds;

LatencyTestSubscriber::LatencyTestSubscriber()
    : latency_command_type_(new TestCommandDataType())
    , data_writer_listener_(this)
    , data_reader_listener_(this)
    , command_writer_listener_(this)
    , command_reader_listener_(this)
{
}

LatencyTestSubscriber::~LatencyTestSubscriber()
{
    // 应为每个有效负载迭代删除静态类型终结点
    if (dynamic_types_)
    {
        destroy_data_endpoints();
    }
    else if (nullptr != data_writer_
            || nullptr != data_reader_
            || nullptr != latency_data_pub_topic_
            || nullptr != latency_data_sub_topic_
            || !latency_data_type_)
    {
        EPROSIMA_LOG_ERROR(LATENCYSUBSCRIBER, "注销数据类型和/或删除端点时出错");
    }

    subscriber_->delete_datareader(command_reader_);
    participant_->delete_subscriber(subscriber_);

    publisher_->delete_datawriter(command_writer_);
    participant_->delete_publisher(publisher_);

    participant_->delete_topic(latency_command_sub_topic_);
    participant_->delete_topic(latency_command_pub_topic_);

    std::string TestCommandType("TestCommandType");
    participant_->unregister_type(TestCommandType);

    DomainParticipantFactory::get_instance()->delete_participant(participant_);

    EPROSIMA_LOG_INFO(LatencyTest, "Sub: Participant 已移除");
}

bool LatencyTestSubscriber::init(
        bool echo,
        int samples,
        bool reliable,
        uint32_t pid,
        bool hostname,
        const PropertyPolicy& part_property_policy,
        const PropertyPolicy& property_policy,
        const std::string& xml_config_file,
        bool dynamic_data,
        Arg::EnablerValue data_sharing,
        bool data_loans,
        Arg::EnablerValue shared_memory,
        int forced_domain,
        LatencyDataSizes& latency_data_sizes)
{
    // 初始化state
    xml_config_file_ = xml_config_file;
    echo_ = echo;
    samples_ = samples;
    dynamic_types_ = dynamic_data;
    data_sharing_ = data_sharing;
    data_loans_ = data_loans;
    shared_memory_ = shared_memory;
    forced_domain_ = forced_domain;
    pid_ = pid;
    hostname_ = hostname;

    data_size_sub_ = latency_data_sizes.sample_sizes();

    /* 创建 DomainParticipant*/
    std::string participant_profile_name = "sub_participant_profile";
    DomainParticipantQos pqos;

    // 默认 domain
    DomainId_t domainId = pid % 230;

    // 默认 participant 名称
    pqos.name("latency_test_subscriber");

    // 加载 XML 配置
    if (xml_config_file_.length() > 0)
    {
        if ( ReturnCode_t::RETCODE_OK !=
                DomainParticipantFactory::get_instance()->
                        get_participant_qos_from_profile(
                    participant_profile_name,
                    pqos))
        {
            return false;
        }
    }

    // 应用用户的强制域
    if (forced_domain_ >= 0)
    {
        domainId = forced_domain_;
    }

    // 如果用户已使用命令行参数指定了参与者属性策略，则该策略将覆盖 XML 配置的任何内容。
    if (PropertyPolicyHelper::length(part_property_policy) > 0)
    {
        pqos.properties(part_property_policy);
    }

    // 设置共享内存传输（如果显式启用/禁用）。
    if (Arg::EnablerValue::ON == shared_memory_)
    {
        std::shared_ptr<eprosima::fastdds::rtps::SharedMemTransportDescriptor> shm_transport =
                std::make_shared<eprosima::fastdds::rtps::SharedMemTransportDescriptor>();
        std::shared_ptr<eprosima::fastdds::rtps::UDPv4TransportDescriptor> udp_transport =
                std::make_shared<eprosima::fastdds::rtps::UDPv4TransportDescriptor>();
        pqos.transport().user_transports.push_back(shm_transport);
        pqos.transport().user_transports.push_back(udp_transport);
        pqos.transport().use_builtin_transports = false;
    }
    else if (Arg::EnablerValue::OFF == shared_memory_)
    {
        std::shared_ptr<eprosima::fastdds::rtps::UDPv4TransportDescriptor> udp_transport =
                std::make_shared<eprosima::fastdds::rtps::UDPv4TransportDescriptor>();
        pqos.transport().user_transports.push_back(udp_transport);
        pqos.transport().use_builtin_transports = false;
    }

    // 创建participant
    participant_ = DomainParticipantFactory::get_instance()->create_participant(domainId, pqos);
    if (participant_ == nullptr)
    {
        return false;
    }

    // 注册command type
    if (ReturnCode_t::RETCODE_OK != latency_command_type_.register_type(participant_))
    {
        EPROSIMA_LOG_ERROR(LATENCYSUBSCRIBER, "注册 COMMAND type 时出错");
        return false;
    }

    /* 创建 Publisher */
    publisher_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
    if (publisher_ == nullptr)
    {
        EPROSIMA_LOG_ERROR(LATENCYSUBSCRIBER, "创建 PUBLISHER 时出错");
        return false;
    }

    /* 创建 Subscriber */
    subscriber_ = participant_->create_subscriber(SUBSCRIBER_QOS_DEFAULT, nullptr);
    if (subscriber_ == nullptr)
    {
        EPROSIMA_LOG_ERROR(LATENCYSUBSCRIBER, "创建 SUBSCRIBER 时出错");
        return false;
    }

    {
        /* 使用 xml 配置文件数据更新 DataWriter 的 QoS */
        if (xml_config_file_.length() > 0 )
        {
            std::string sub_profile_name = "sub_subscriber_profile";
            std::string pub_profile_name = "sub_publisher_profile";

            if ( ReturnCode_t::RETCODE_OK != publisher_->get_datawriter_qos_from_profile(pub_profile_name, dw_qos_))
            {
                EPROSIMA_LOG_ERROR(LATENCYSUBSCRIBER,
                        "错误:无法检索 " << pub_profile_name << " 这个xml文件");
                return false;
            }

            if ( ReturnCode_t::RETCODE_OK != subscriber_->get_datareader_qos_from_profile(sub_profile_name, dr_qos_))
            {
                EPROSIMA_LOG_ERROR(LATENCYSUBSCRIBER, "错误:无法检索 " << sub_profile_name);
                return false;
            }
        }
        // 创建 QoS 配置文件
        else
        {
            ReliabilityQosPolicy rp;
            if (reliable)
            {
                rp.kind = eprosima::fastrtps::RELIABLE_RELIABILITY_QOS;

                RTPSReliableWriterQos rw_qos;
                rw_qos.times.heartbeatPeriod.seconds = 0;
                rw_qos.times.heartbeatPeriod.nanosec = 100000000;
                dw_qos_.reliable_writer_qos(rw_qos);
            }
            else
            {
                rp.kind = eprosima::fastrtps::BEST_EFFORT_RELIABILITY_QOS;
            }

            dr_qos_.reliability(rp);
            dw_qos_.reliability(rp);

            dw_qos_.properties(property_policy);
            dw_qos_.endpoint().history_memory_policy = MemoryManagementPolicy::PREALLOCATED_WITH_REALLOC_MEMORY_MODE;

            dr_qos_.properties(property_policy);
            dr_qos_.endpoint().history_memory_policy = MemoryManagementPolicy::PREALLOCATED_WITH_REALLOC_MEMORY_MODE;
        }

        // 根据 cli 设置数据共享。
        if (Arg::EnablerValue::ON == data_sharing_)
        {
            DataSharingQosPolicy dsp;
            dsp.on("");
            dw_qos_.data_sharing(dsp);
            dr_qos_.data_sharing(dsp);
        }
        else if (Arg::EnablerValue::OFF == data_sharing_)
        {
            DataSharingQosPolicy dsp;
            dsp.off();
            dw_qos_.data_sharing(dsp);
            dr_qos_.data_sharing(dsp);
        }

        // 增加有效负载池大小以防止因中断而导致贷款失败
        if (data_loans_)
        {
            dw_qos_.resource_limits().extra_samples = 30;
            dr_qos_.resource_limits().extra_samples = 30;
        }
    }

    /* 创建 Topics */
    {
        std::ostringstream topic_name;
        topic_name.str("");
        topic_name.clear();
        topic_name << "LatencyTest_Command_";

        if (hostname)
        {
            topic_name << asio::ip::host_name() << "_";
        }
        topic_name << pid << "_PUB2SUB";

        latency_command_sub_topic_ = participant_->create_topic(
            topic_name.str(),
            "TestCommandType",
            TOPIC_QOS_DEFAULT);

        if (latency_command_sub_topic_ == nullptr)
        {
            return false;
        }

        topic_name.str("");
        topic_name.clear();
        topic_name << "LatencyTest_Command_";

        if (hostname)
        {
            topic_name << asio::ip::host_name() << "_";
        }
        topic_name << pid << "_SUB2PUB";

        latency_command_pub_topic_ = participant_->create_topic(
            topic_name.str(),
            "TestCommandType",
            TOPIC_QOS_DEFAULT);

        if (latency_command_pub_topic_ == nullptr)
        {
            return false;
        }
    }

    /* 创建 Command Writer */
    {
        DataWriterQos cw_qos;
        cw_qos.history().kind = KEEP_ALL_HISTORY_QOS;
        cw_qos.durability().durabilityKind(TRANSIENT_LOCAL);
        cw_qos.reliability().kind = RELIABLE_RELIABILITY_QOS;
        cw_qos.publish_mode().kind = SYNCHRONOUS_PUBLISH_MODE;

        command_writer_ = publisher_->create_datawriter(
            latency_command_pub_topic_,
            cw_qos,
            &command_writer_listener_);

        if (command_writer_ == nullptr)
        {
            return false;
        }
    }

    /* 创建 Command Reader */
    {
        DataReaderQos cr_qos;
        cr_qos.history().kind = KEEP_ALL_HISTORY_QOS;
        cr_qos.reliability().kind = RELIABLE_RELIABILITY_QOS;
        cr_qos.durability().durabilityKind(TRANSIENT_LOCAL);

        command_reader_ = subscriber_->create_datareader(
            latency_command_sub_topic_,
            cr_qos,
            &command_reader_listener_);

        if (command_reader_ == nullptr)
        {
            return false;
        }
    }

    // 使用动态数据终端节点的终端节点跨越整个测试持续时间
    // 为每个有效负载迭代创建静态类型和终结点
    return dynamic_types_ ? init_dynamic_types() && create_data_endpoints() : true;
}

/*
 * 我们当前更新的匹配状态信息:
 * - total_count(_change) 保存实际匹配数
 * - current_count(_change) 是信号匹配或不匹配的标志.
 *   (TODO: 查看是否符合标准定义)
 * */

void LatencyTestSubscriber::LatencyDataWriterListener::on_publication_matched(
        DataWriter* writer,
        const PublicationMatchedStatus& info)
{
    (void)writer;

    std::unique_lock<std::mutex> lock(latency_subscriber_->mutex_);

    matched_ = info.total_count;

    if (info.current_count_change > 0)
    {
        EPROSIMA_LOG_INFO(LatencyTest, C_MAGENTA << "Data Pub 已匹配" << C_DEF);
    }

    lock.unlock();
    latency_subscriber_->discovery_cv_.notify_one();
}

void LatencyTestSubscriber::LatencyDataReaderListener::on_subscription_matched(
        DataReader* reader,
        const SubscriptionMatchedStatus& info)
{
    (void)reader;

    std::unique_lock<std::mutex> lock(latency_subscriber_->mutex_);

    matched_ = info.total_count;

    if (info.current_count_change > 0)
    {
        EPROSIMA_LOG_INFO(LatencyTest, C_MAGENTA << "Data Sub 已匹配" << C_DEF);
    }

    lock.unlock();
    latency_subscriber_->discovery_cv_.notify_one();
}

void LatencyTestSubscriber::ComandWriterListener::on_publication_matched(
        DataWriter* writer,
        const PublicationMatchedStatus& info)
{
    (void)writer;

    std::unique_lock<std::mutex> lock(latency_subscriber_->mutex_);

    matched_ = info.total_count;

    if (info.current_count_change > 0)
    {
        EPROSIMA_LOG_INFO(LatencyTest, C_MAGENTA << "Command Pub 已匹配" << C_DEF);
    }

    lock.unlock();
    latency_subscriber_->discovery_cv_.notify_one();
}

void LatencyTestSubscriber::CommandReaderListener::on_subscription_matched(
        DataReader* reader,
        const SubscriptionMatchedStatus& info)
{
    (void)reader;

    std::unique_lock<std::mutex> lock(latency_subscriber_->mutex_);

    matched_ = info.total_count;

    if (info.current_count_change > 0)
    {
        EPROSIMA_LOG_INFO(LatencyTest, C_MAGENTA << "Command Sub 已匹配" << C_DEF);
    }

    lock.unlock();
    latency_subscriber_->discovery_cv_.notify_one();
}

void LatencyTestSubscriber::CommandReaderListener::on_data_available(
        DataReader* reader)
{
    TestCommandType command;
    SampleInfo info;
    std::ostringstream log;
    bool notify = false;

    if (reader->take_next_sample(
                &command, &info) == ReturnCode_t::RETCODE_OK
            && info.valid_data)
    {
        std::unique_lock<std::mutex> lock(latency_subscriber_->mutex_);

        log << "RCOMMAND: " << command.m_command;
        switch ( command.m_command )
        {
            case READY:
                log << "Publisher 已准备好新的测试...";
                break;
            case STOP:
                log << "Publisher 已经停止测试";
                break;
            case STOP_ERROR:
                log << "Publisher 已经取消测试";
                latency_subscriber_->test_status_ = -1;
                break;
            default:
                log << "出错了";
                break;
        }

        if (command.m_command != DEFAULT)
        {
            ++latency_subscriber_->command_msg_count_;
            notify = true;
        }

        lock.unlock();
        if (notify)
        {
            latency_subscriber_->command_msg_cv_.notify_one();
        }
    }
    else
    {
        log << "读取命令消息时出现问题";
    }

    EPROSIMA_LOG_INFO(LatencyTest, log.str());
}

void LatencyTestSubscriber::LatencyDataReaderListener::on_data_available(
        DataReader* reader)
{
    auto sub = latency_subscriber_;

    // 尽快从Publsiher反弹消息 dynamic_data_ 并且latency_data_type不需要锁定
    // 因为命令消息交换可确保此调用原子性
    if (sub->data_loans_)
    {
        SampleInfoSeq infos;
        LoanableSequence<LatencyType> data_seq;
        // 读取器的借贷缓冲
        LatencyType* echoed_data = nullptr;
        // 编写器的借贷缓冲
        void* echoed_loan = nullptr;

        if (ReturnCode_t::RETCODE_OK != reader->take(data_seq, infos, 1))
        {
            EPROSIMA_LOG_INFO(LatencyTest, "读取时出现问题 用户回显借出的测试数据");
            return;
        }

        // 我们请求一个单独的样品
        assert(infos.length() == 1 && data_seq.length() == 1);
        // 缓冲区必须存在
        assert(sub->latency_data_ != nullptr);
        // 引用loan
        echoed_data = &data_seq[0];

        // 回显样本
        if (sub->echo_)
        {
            // 开始测量开销 = 贷款>缓冲区拷贝 + 写入借出 + 缓冲>借拷贝
            auto start_time = std::chrono::steady_clock::now();

            // 将数据从读卡器借出复制到辅助缓冲区
            auto data_type = std::static_pointer_cast<LatencyDataType>(sub->latency_data_type_);
            data_type->copy_data(*echoed_data, *sub->latency_data_);

            // 释放reader loan
            if (ReturnCode_t::RETCODE_OK != reader->return_loan(data_seq, infos))
            {
                EPROSIMA_LOG_INFO(LatencyTest, "返回借用的测试数据时出现问题");
                return;
            }

            // writer loan
            int trials = 10;
            bool loaned = false;
            while (trials-- != 0 && !loaned)
            {
                loaned = (ReturnCode_t::RETCODE_OK
                        == sub->data_writer_->loan_sample(
                            echoed_loan,
                            DataWriter::LoanInitializationKind::NO_LOAN_INITIALIZATION));

                std::this_thread::yield();

                if (!loaned)
                {
                    EPROSIMA_LOG_ERROR(LatencyTest, "Subscriber 尝试 loan: " << trials);
                }
            }

            if (!loaned)
            {
                EPROSIMA_LOG_INFO(LatencyTest, "使用借出回显发布者测试数据时出现问题");
                // 释放reader loan
                reader->return_loan(data_seq, infos);
                return;
            }

            // 将数据从辅助缓冲区复制到写入器借用
            data_type->copy_data(*sub->latency_data_, *(LatencyType*)echoed_loan);

            // 终端测量开销
            auto end_time = std::chrono::steady_clock::now();
            std::chrono::duration<uint32_t, std::nano> bounce_time(end_time - start_time);
            reinterpret_cast<LatencyType*>(echoed_loan)->bounce = bounce_time.count();

            if (!sub->data_writer_->write(echoed_loan))
            {
                EPROSIMA_LOG_ERROR(LatencyTest, "使用借出回显发布者测试数据时出现问题");
                sub->data_writer_->discard_loan(echoed_loan);
            }
        }
        else
        {
            // 发放贷款
            if (ReturnCode_t::RETCODE_OK != reader->return_loan(data_seq, infos))
            {
                EPROSIMA_LOG_ERROR(LatencyTest, "返回借用的测试数据时出现问题");
            }
        }
    }
    else
    {
        SampleInfo info;
        void* data = sub->dynamic_types_ ?
                (void*)sub->dynamic_data_ :
                (void*)sub->latency_data_;

        if (reader->take_next_sample(
                    data, &info) == ReturnCode_t::RETCODE_OK
                && info.valid_data)
        {
            if (sub->echo_)
            {
                // 没有反弹过载记录
                reinterpret_cast<LatencyType*>(data)->bounce = 0;

                if (!sub->data_writer_->write(data))
                {
                    EPROSIMA_LOG_INFO(LatencyTest, "回显Publisher测试数据时出现问题");
                }
            }
        }
        else
        {
            EPROSIMA_LOG_INFO(LatencyTest, "读取Publisher测试数据时出现问题");
        }
    }
}

void LatencyTestSubscriber::run()
{
    // 等待发现过程完成，仅适用于动态案例:
    // 每个订阅者需要:
    // DYNAMIC TYPES: 4个匹配 (2 个 publishers 和 2 个 subscribers)
    // STATIC TYPES: 2个匹配 (1 个 command publisher 和 1 个 command subscriber)
    wait_for_discovery(
        [this]() -> bool
        {
            return total_matches() == (dynamic_types_ ? 4 : 2);
        });

    EPROSIMA_LOG_INFO(LatencyTest, C_B_MAGENTA << "Sub: 完成发现 " << C_DEF);

    for (std::vector<uint32_t>::iterator payload = data_size_sub_.begin(); payload != data_size_sub_.end(); ++payload)
    {
        if (!test(*payload))
        {
            break;
        }
    }
}

bool LatencyTestSubscriber::test(
        uint32_t datasize)
{
    EPROSIMA_LOG_INFO(LatencyTest, "准备测试的数据大小: " << datasize );

    // 等待Publisher就绪命令
    // 保证 LatencyTestSubscriber|Publisher 数据终结点的创建和销毁是按顺序进行的
    wait_for_command(
        [this]()
        {
            return command_msg_count_ != 0;
        });

    if (dynamic_types_)
    {
        // 创建数据样本
        MemberId id;
        dynamic_data_ = static_cast<DynamicData*>(dynamic_pub_sub_type_->createData());

        if (nullptr == dynamic_data_)
        {
            EPROSIMA_LOG_ERROR(LatencyTest, "迭代失败:无法创建动态数据");
            return false;
        }

        // 修改数据样本
        DynamicData* member_data = dynamic_data_->loan_value(
            dynamic_data_->get_member_id_at_index(1));

        // 填充直到完成所需的有效负载大小
        uint32_t padding = datasize - 4; // 序列号是 DWORD

        for (uint32_t i = 0; i < padding; ++i)
        {
            member_data->insert_sequence_data(id);
            member_data->set_byte_value(0, id);
        }
        dynamic_data_->return_loaned_value(member_data);
    }
    // 为给定的缓冲区大小和终结点创建静态类型
    else if (init_static_types(datasize) && create_data_endpoints())
    {
        // 创建数据示例作为缓冲区
        latency_data_ = static_cast<LatencyType*>(latency_data_type_.create_data());

        // 等待来自 LatencyTestPublisher 的 endponts discovery
        wait_for_discovery(
            [this]() -> bool
            {
                return total_matches() == 4;
            });
    }
    else
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "准备用于测试的静态类型和终结点时出错");
        return false;
    }

    // 将 BEGIN 命令发送到Publisher
    test_status_ = 0;
    received_ = 0;
    TestCommandType command;
    command.m_command = BEGIN;
    if (!command_writer_->write(&command))
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "Subscriber无法发布 BEGIN 命令");
        return false;
    }

    EPROSIMA_LOG_INFO(LatencyTest, "测试的数据大小: " << datasize);

    // 等待 STOP 或 STOP_ERROR 命令
    wait_for_command(
        [this]()
        {
            return command_msg_count_ != 0;
        });

    EPROSIMA_LOG_INFO(LatencyTest, "测试大小: " << datasize << " ENDS");
    std::this_thread::sleep_for(std::chrono::milliseconds(50));

    if (dynamic_types_)
    {
        dynamic_pub_sub_type_->deleteData(dynamic_data_);
        // DynamicDataFactory::get_instance()->delete_data(dynamic_data_);
        //
        // 重置新测试的历史记录
        size_t removed;
        data_writer_->clear_history(&removed);
    }
    else
    {
        // 释放缓冲区下次迭代将需要不同的大小
        latency_data_type_->deleteData(latency_data_);

        // 删除与给定有效负载大小关联的终结点
        if (!destroy_data_endpoints())
        {
            EPROSIMA_LOG_ERROR(LatencyTest,
                    "有效负载大小为：" << datasize << " 的静态终结点不能被移除！");
        }
    }

    if (test_status_ == -1)
    {
        return false;
    }

    command.m_command = END;
    if (!command_writer_->write(&command))
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "Subscriber无法发布 END 命令");
        return false;
    }

    // 防止 LatencyTestSubscriber 在 LatencyTestPublisher 等待 END 命令时被销毁。
    if ( ReturnCode_t::RETCODE_OK != command_writer_->wait_for_acknowledgments(eprosima::fastrtps::c_TimeInfinite))
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "Subscriber无法确认 END 命令");
        return false;
    }

    return true;
}

int32_t LatencyTestSubscriber::total_matches() const
{
    // 无需锁定，因为始终在条件变量等待谓词中使用

    int32_t count = data_writer_listener_.get_matches()
            + data_reader_listener_.get_matches()
            + command_writer_listener_.get_matches()
            + command_reader_listener_.get_matches();

    // 每个端点在 LatencyTestPublisher 中都有一个镜像对应项
    // 因此，最大匹配数为 4
    assert(count >= 0 && count < 5);
    return count;
}

bool LatencyTestSubscriber::init_dynamic_types()
{
    assert(participant_ != nullptr);

    // 检查之前是否已经初始化过
    if (dynamic_pub_sub_type_)
    {
        EPROSIMA_LOG_ERROR(LATENCYSUBSCRIBER, "错误: DYNAMIC DATA type 已经初始化过");
        return false;
    }
    else if (participant_->find_type(LatencyDataType::type_name_))
    {
        EPROSIMA_LOG_ERROR(LATENCYSUBSCRIBER, "错误: DYNAMIC DATA type 已经注册过");
        return false;
    }

    // 虚拟类型注册
    // 创建基本构建器
    DynamicTypeBuilder_ptr struct_type_builder(DynamicTypeBuilderFactory::get_instance()->create_struct_builder());

    // 向结构添加成员。
    struct_type_builder->add_member(0, "seqnum", DynamicTypeBuilderFactory::get_instance()->create_uint32_type());
    struct_type_builder->add_member(1, "data", DynamicTypeBuilderFactory::get_instance()->create_sequence_builder(
                DynamicTypeBuilderFactory::get_instance()->create_byte_type(), BOUND_UNLIMITED));
    struct_type_builder->set_name(LatencyDataType::type_name_);
    dynamic_pub_sub_type_.reset(new DynamicPubSubType(struct_type_builder->build()));

    // 注册数据类型
    if (ReturnCode_t::RETCODE_OK != dynamic_pub_sub_type_.register_type(participant_))
    {
        EPROSIMA_LOG_ERROR(LATENCYSUBSCRIBER, "注册 DYNAMIC DATA type 时出错");
        return false;
    }

    return true;
}

bool LatencyTestSubscriber::init_static_types(
        uint32_t payload)
{
    assert(participant_ != nullptr);

    // 检查之前是否已经初始化过
    if (latency_data_type_)
    {
        EPROSIMA_LOG_ERROR(LATENCYSUBSCRIBER, "错误: STATIC DATA type 已经初始化过");
        return false;
    }
    else if (participant_->find_type(LatencyDataType::type_name_))
    {
        EPROSIMA_LOG_ERROR(LATENCYSUBSCRIBER, "错误: STATIC DATA type 已经注册过");
        return false;
    }

    // 计算所需需求的填充
    ::size_t padding = payload - LatencyType::overhead;
    assert(padding > 0);
    // 创建静态类型
    latency_data_type_.reset(new LatencyDataType(padding));
    // 注册静态类型
    if (ReturnCode_t::RETCODE_OK != latency_data_type_.register_type(participant_))
    {
        EPROSIMA_LOG_ERROR(LATENCYSUBSCRIBER, "注册 STATIC DATA type 时出错");
        return false;
    }

    return true;
}

bool LatencyTestSubscriber::create_data_endpoints()
{
    if (nullptr != latency_data_sub_topic_
            || nullptr != latency_data_pub_topic_)
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "错误: topics 已经初始化过");
        return false;
    }

    if (nullptr != data_writer_)
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "错误: data_writer_ 已经初始化过");
        return false;
    }

    if (nullptr != data_reader_)
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "错误: data_reader_ 已经初始化过");
        return false;
    }

    // 创建 topic
    std::ostringstream topic_name;
    topic_name << "LatencyTest_";
    if (hostname_)
    {
        topic_name << asio::ip::host_name() << "_";
    }
    topic_name << pid_ << "_PUB2SUB";

    latency_data_sub_topic_ = participant_->create_topic(
        topic_name.str(),
        LatencyDataType::type_name_,
        TOPIC_QOS_DEFAULT);

    if (nullptr == latency_data_sub_topic_)
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "为subscriber data reader topic创建DATA TYPE时出错");
        return false;
    }

    /* 创建 Topics */
    topic_name.str("");
    topic_name.clear();
    topic_name << "LatencyTest_";

    if (hostname_)
    {
        topic_name << asio::ip::host_name() << "_";
    }
    topic_name << pid_ << "_SUB2PUB";

    latency_data_pub_topic_ = participant_->create_topic(
        topic_name.str(),
        LatencyDataType::type_name_,
        TOPIC_QOS_DEFAULT);

    if (latency_data_pub_topic_ == nullptr)
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "为subscriber data writer topic创建DATA TYPE时出错");
        return false;
    }

    // 创建endpoints
    if (nullptr ==
            (data_writer_ = publisher_->create_datawriter(
                latency_data_pub_topic_,
                dw_qos_,
                &data_writer_listener_)))
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "创建subscriber data writer时出错");
        return false;
    }

    if (nullptr ==
            (data_reader_ = subscriber_->create_datareader(
                latency_data_sub_topic_,
                dr_qos_,
                &data_reader_listener_)))
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "创建subscriber data reader时出错");
        return false;
    }

    return true;
}

bool LatencyTestSubscriber::destroy_data_endpoints()
{
    assert(nullptr != participant_);
    assert(nullptr != publisher_);
    assert(nullptr != subscriber_);

    // 删除endpoints
    if (nullptr == data_writer_
            || ReturnCode_t::RETCODE_OK != publisher_->delete_datawriter(data_writer_))
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "销毁DataWriter时出错");
        return false;
    }
    data_writer_ = nullptr;
    data_writer_listener_.reset();

    if (nullptr == data_reader_
            || ReturnCode_t::RETCODE_OK != subscriber_->delete_datareader(data_reader_))
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "销毁DataReader时出错");
        return false;
    }
    data_reader_ = nullptr;
    data_reader_listener_.reset();

    // 删除Topics
    if (nullptr == latency_data_pub_topic_
            || ReturnCode_t::RETCODE_OK != participant_->delete_topic(latency_data_pub_topic_))
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "销毁DATA pub topic时出错");
        return false;
    }
    latency_data_pub_topic_ = nullptr;
    if (nullptr == latency_data_sub_topic_
            || ReturnCode_t::RETCODE_OK != participant_->delete_topic(latency_data_sub_topic_))
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "销毁the DATA sub topic时出错");
        return false;
    }
    latency_data_sub_topic_ = nullptr;

    // 删除Type
    if (ReturnCode_t::RETCODE_OK
            != participant_->unregister_type(LatencyDataType::type_name_))
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "注销DATA type时出错");
        return false;
    }

    latency_data_type_.reset();
    dynamic_pub_sub_type_.reset();
    DynamicTypeBuilderFactory::delete_instance();

    return true;
}
