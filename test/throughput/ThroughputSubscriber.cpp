
/**
 * @file ThroughputSubscriber.cxx
 *
 */

#include "ThroughputSubscriber.hpp"

#include <vector>

#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/domain/qos/DomainParticipantQos.hpp>
#include <fastdds/dds/log/Colors.hpp>
#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/subscriber/DataReader.hpp>
#include <fastrtps/utils/TimeConversion.h>
#include <fastrtps/xmlparser/XMLProfileManager.h>
#include <fastdds/rtps/transport/UDPv4TransportDescriptor.h>
#include <fastdds/rtps/transport/shared_mem/SharedMemTransportDescriptor.h>

using namespace eprosima::fastdds::dds;
using namespace eprosima::fastrtps::rtps;
using namespace eprosima::fastrtps::types;

// *******************************************************************************************
// ************************************ DATA SUB LISTENER ************************************
// *******************************************************************************************

void ThroughputSubscriber::DataReaderListener::reset()
{
    last_seq_num_ = 0;
    lost_samples_ = 0;
    received_samples_ = 0;
    matched_ = 0;
    enable_ = true;
}

void ThroughputSubscriber::DataReaderListener::disable()
{
    enable_ = false;
}

/*
 * 当前更新的匹配状态信息:
 * - total_count(_change) 保存实际匹配数
 * - current_count(_change) 是信号匹配或不匹配的标志.
 *   (TODO: 查看是否符合标准定义)
 * */

void ThroughputSubscriber::DataReaderListener::on_subscription_matched(
        DataReader*,
        const SubscriptionMatchedStatus& info)
{

    if (1 == info.current_count)
    {
        std::cout << C_RED << "Sub: DATA Sub 已匹配 " << C_DEF << std::endl;
    }
    else
    {
        std::cout << C_RED << "数据订阅者匹配删除" << C_DEF << std::endl;
    }

    matched_ = info.total_count;
    throughput_subscriber_.data_discovery_cv_.notify_one();
}

void ThroughputSubscriber::DataReaderListener::on_data_available(
        DataReader* reader)
{
    if (!enable_)
    {
        return;
    }

    // 如果 TSubscriber 因为TEST_ENDS消息而删除实体，它会等待
    auto& sub = throughput_subscriber_;

    if (sub.data_loans_)
    {
        SampleInfoSeq infos;
        LoanableSequence<ThroughputType> data_seq;

        if (ReturnCode_t::RETCODE_OK != reader->take(data_seq, infos))
        {
            EPROSIMA_LOG_INFO(ThroughputTest, "读取用户回显借出的测试数据时出现问题");
            return;
        }

        // 检查丢失的样本
        auto size = data_seq.length();
        uint32_t last_seq_num = last_seq_num_;

        for (int32_t i = 0; i < size; ++i)
        {
            uint32_t seq_num = std::max(data_seq[i].seqnum, last_seq_num);
            if (seq_num > last_seq_num + 1)
            {
                if (!reader->is_sample_valid(&data_seq[i], &infos[i]))
                {
                    // 被覆盖了，算作损失
                    ++lost_samples_;
                    ++last_seq_num;
                    continue;
                }
            }
            last_seq_num = seq_num;
            received_samples_ += 1;
        }

        if ((last_seq_num_ + size) < last_seq_num)
        {
            lost_samples_ += last_seq_num - last_seq_num_ - size;
        }
        last_seq_num_ = last_seq_num;

        // 释放reader借贷
        if (ReturnCode_t::RETCODE_OK != reader->return_loan(data_seq, infos))
        {
            EPROSIMA_LOG_INFO(ThroughputTest, "返回借出的测试数据时出现问题");
            return;
        }
    }
    else
    {
        void* data = sub.dynamic_types_ ? (void*)sub.dynamic_data_ : (void*)sub.throughput_data_;
        assert(nullptr != data);

        while (ReturnCode_t::RETCODE_OK == reader->take_next_sample(data, &info_))
        {
            if (info_.valid_data)
            {
                uint32_t seq_num = sub.dynamic_types_
                    ? sub.dynamic_data_->get_uint32_value(0)
                    : sub.throughput_data_->seqnum;

                if ((last_seq_num_ + 1) < seq_num)
                {
                    lost_samples_ += seq_num - last_seq_num_ - 1;
                }
                last_seq_num_ = seq_num;
                received_samples_ += 1;
            }
            else
            {
                std::cout << "收到的数据无效" << std::endl;
            }
        }
    }
}

void ThroughputSubscriber::DataReaderListener::save_numbers()
{
    saved_last_seq_num_ = last_seq_num_;
    saved_lost_samples_ = lost_samples_;
    saved_received_samples_ = received_samples_;
}

// *******************************************************************************************
// *********************************** COMMAND SUB LISTENER **********************************
// *******************************************************************************************

void ThroughputSubscriber::CommandReaderListener::on_subscription_matched(
        DataReader*,
        const SubscriptionMatchedStatus& info)
{
    if (1 == info.current_count)
    {
        std::cout << C_RED << "Sub: COMMAND Sub 已匹配 " << C_DEF << std::endl;
    }
    else
    {
        std::cout << C_RED << "Sub: COMMAND SUBSCRIBER 匹配删除" << C_DEF << std::endl;
    }

    matched_ = info.total_count;
    throughput_subscriber_.command_discovery_cv_.notify_one();
}

void ThroughputSubscriber::CommandReaderListener::on_data_available(
        DataReader* )
{
}

// *******************************************************************************************
// *********************************** COMMAND PUB LISTENER **********************************
// *******************************************************************************************

void ThroughputSubscriber::CommandWriterListener::on_publication_matched(
        DataWriter*,
        const eprosima::fastdds::dds::PublicationMatchedStatus& info)
{
    if ( 1 == info.current_count)
    {
        std::cout << C_RED << "Sub: COMMAND Pub 已匹配 " << C_DEF << std::endl;
    }
    else
    {
        std::cout << C_RED << "Sub: COMMAND PUBLISHER 匹配删除" << C_DEF << std::endl;
    }

    matched_ = info.total_count;
    throughput_subscriber_.command_discovery_cv_.notify_one();
}

// *******************************************************************************************
// ********************************** THROUGHPUT SUBSCRIBER **********************************
// *******************************************************************************************

ThroughputSubscriber::ThroughputSubscriber()
    : data_reader_listener_(*this)
    , command_reader_listener_(*this)
    , command_writer_listener_(*this)
{
}

ThroughputSubscriber::~ThroughputSubscriber()
{
    if (dynamic_types_)
    {
        destroy_data_endpoints();
    }
    else if (nullptr != data_reader_
            || nullptr != data_sub_topic_
            || throughput_data_type_)
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "注销数据类型时出错");
        return;
    }

    // Remove command endpoints
    subscriber_->delete_datareader(command_reader_);
    participant_->delete_subscriber(subscriber_);

    publisher_->delete_datawriter(command_writer_);
    participant_->delete_publisher(publisher_);

    participant_->delete_topic(command_sub_topic_);
    participant_->delete_topic(command_pub_topic_);

    // Remove the participant
    DomainParticipantFactory::get_instance()->delete_participant(participant_);
    EPROSIMA_LOG_INFO(THROUGHPUTSUBSCRIBER, "Sub: Participant 已删除");
}

bool ThroughputSubscriber::init(
        bool reliable,
        uint32_t pid,
        bool hostname,
        const eprosima::fastrtps::rtps::PropertyPolicy& part_property_policy,
        const eprosima::fastrtps::rtps::PropertyPolicy& property_policy,
        const std::string& xml_config_file,
        bool dynamic_types,
        Arg::EnablerValue data_sharing,
        bool data_loans,
        Arg::EnablerValue shared_memory,
        int forced_domain)
{
    pid_ = pid;
    hostname_ = hostname;
    dynamic_types_ = dynamic_types;
    data_sharing_ = data_sharing;
    shared_memory_ = shared_memory;
    data_loans_ = data_loans;
    reliable_ = reliable;
    forced_domain_ = forced_domain;
    xml_config_file_ = xml_config_file;

    /* 创建 DomainParticipant*/
    std::string participant_profile_name = "sub_participant_profile";
    DomainParticipantQos pqos;

    // 默认 domain
    DomainId_t domainId = pid % 230;

    // 默认 participant 名称
    pqos.name("throughput_test_subscriber");

    // 加载 XML 配置文件
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

    // 应用用户的强制domain
    if (forced_domain_ >= 0)
    {
        domainId = forced_domain_;
    }

    // 如果用户已使用命令行参数指定了参与者属性策略，则该策略将覆盖 XML 配置的任何内容。
    if (PropertyPolicyHelper::length(part_property_policy) > 0)
    {
        pqos.properties(part_property_policy);
    }

    // 设置共享内存传输（如果已显式启用/禁用）
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

    // 创建 participant
    participant_ =
            DomainParticipantFactory::get_instance()->create_participant(domainId, pqos);

    if (participant_ == nullptr)
    {
        std::cout << "创建 participant 时出错" << std::endl;
        return false;
    }

    // 创建 command data type
    throughput_command_type_.reset(new ThroughputCommandDataType());

    // 注册 command data type
    if (ReturnCode_t::RETCODE_OK
            != throughput_command_type_.register_type(participant_))
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "注册 command type 时出错");
        return false;
    }

    /* 创建 Publisher */
    publisher_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
    if (publisher_ == nullptr)
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "创建 Publisher 时出错");
        return false;
    }

    /* 创建 Subscriber */
    subscriber_ = participant_->create_subscriber(SUBSCRIBER_QOS_DEFAULT, nullptr);
    if (subscriber_ == nullptr)
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "创建 Subscriber 时出错");
        return false;
    }

    /* 从 xml 配置文件数据更新数据读取器QoS */
    std::string profile_name = "subscriber_profile";

    if (xml_config_file_.length() > 0
            && ReturnCode_t::RETCODE_OK != subscriber_->get_datareader_qos_from_profile(profile_name, dr_qos_))
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "错误：无法检索 " << profile_name);
        return false;
    }

    // 加载指定的属性策略
    dr_qos_.properties(property_policy);

    // 可靠性
    ReliabilityQosPolicy rp;
    rp.kind = reliable_ ? eprosima::fastrtps::RELIABLE_RELIABILITY_QOS: eprosima::fastrtps::BEST_EFFORT_RELIABILITY_QOS;
    dr_qos_.reliability(rp);

    // 根据 cli 设置数据共享。默认情况下在所有 xml 配置文件中禁用
    if (Arg::EnablerValue::ON == data_sharing_)
    {
        DataSharingQosPolicy dsp;
        dsp.on("");
        dr_qos_.data_sharing(dsp);
    }
    else if (Arg::EnablerValue::OFF == data_sharing_)
    {
        DataSharingQosPolicy dsp;
        dsp.off();
        dr_qos_.data_sharing(dsp);
    }

    // 创建 Command topic
    {
        std::ostringstream topic_name;
        topic_name << "ThroughputTest_Command_";
        if (hostname)
        {
            topic_name << asio::ip::host_name() << "_";
        }
        topic_name << pid << "_PUB2SUB";

        command_sub_topic_ = participant_->create_topic(
            topic_name.str(),
            "ThroughputCommand",
            TOPIC_QOS_DEFAULT);

        if (nullptr == command_sub_topic_)
        {
            EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "创建 COMMAND Sub topic 时出错");
            return false;
        }

        topic_name.str("");
        topic_name.clear();
        topic_name << "ThroughputTest_Command_";
        if (hostname)
        {
            topic_name << asio::ip::host_name() << "_";
        }
        topic_name << pid << "_SUB2PUB";

        command_pub_topic_ = participant_->create_topic(
            topic_name.str(),
            "ThroughputCommand",
            TOPIC_QOS_DEFAULT);

        if (nullptr == command_pub_topic_)
        {
            EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "创建 COMMAND Pub topic 时出错");
            return false;
        }
    }

    /* 创建 Command Reader */
    {
        DataReaderQos cr_qos;
        cr_qos.history().kind = KEEP_ALL_HISTORY_QOS;
        cr_qos.reliability().kind = RELIABLE_RELIABILITY_QOS;
        cr_qos.durability().durabilityKind(TRANSIENT_LOCAL);
        cr_qos.properties(property_policy);

        {
            DataSharingQosPolicy dsp;
            dsp.off();
            cr_qos.data_sharing(dsp);
        }

        command_reader_ = subscriber_->create_datareader(
            command_sub_topic_,
            cr_qos,
            &command_reader_listener_);

        if (command_reader_ == nullptr)
        {
            EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "创建 COMMAND DataWriter 时出错");
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
        cw_qos.properties(property_policy);

        {
            DataSharingQosPolicy dsp;
            dsp.off();
            cw_qos.data_sharing(dsp);
        }

        command_writer_ = publisher_->create_datawriter(
            command_pub_topic_,
            cw_qos,
            &command_writer_listener_);

        if (command_writer_ == nullptr)
        {
            EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "创建 COMMAND DataReader 时出错");
            return false;
        }
    }

    // 计算开销
    t_start_ = std::chrono::steady_clock::now();
    for (int i = 0; i < 1000; ++i)
    {
        t_end_ = std::chrono::steady_clock::now();
    }
    t_overhead_ = std::chrono::duration<double, std::micro>(t_end_ - t_start_) / 1001;
    std::cout << "用户的时钟访问开销: " << t_overhead_.count() << " us" << std::endl;

    // 使用动态数据终端节点的终端节点跨越整个测试持续时间
    // 为每个有效负载迭代创建静态类型和终结点
    return dynamic_types_ ? init_dynamic_types() && create_data_endpoints(dr_qos_) : true;
}

int ThroughputSubscriber::process_message()
{
    ThroughputCommandType command;
    SampleInfo info;

    if (command_reader_->wait_for_unread_message({100, 0}))
    {
        if (ReturnCode_t::RETCODE_OK == command_reader_->take_next_sample(
                    (void*)&command,
                    &info))
        {
            switch (command.m_command)
            {
                case (DEFAULT):
                {
                    break;
                }
                case (BEGIN):
                {
                    break;
                }
                case TYPE_NEW:
                {
                    auto dr_qos = dr_qos_;

                    if (dynamic_types_)
                    {
                        assert(nullptr == dynamic_data_);

                        // 创建 data sample
                        MemberId id;
                        dynamic_data_ = static_cast<DynamicData*>(dynamic_pub_sub_type_->createData());

                        if (nullptr == dynamic_data_)
                        {
                            EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "迭代失败：无法创建动态数据");
                            return 2;
                        }

                        // 修改数据样本
                        DynamicData* member_data = dynamic_data_->loan_value(
                            dynamic_data_->get_member_id_at_index(1));

                        for (uint32_t i = 0; i < command.m_size; ++i)
                        {
                            member_data->insert_sequence_data(id);
                            member_data->set_byte_value(0, id);
                        }
                        dynamic_data_->return_loaned_value(member_data);
                    }
                    else
                    {
                        // 验证 QoS 设置
                        uint32_t max_demand = command.m_demand;
                        if (dr_qos.history().kind == KEEP_LAST_HISTORY_QOS)
                        {
                            // 确保历史深度的需求
                            if (dr_qos.history().depth < 0 ||
                                    static_cast<uint32_t>(dr_qos.history().depth) < max_demand)
                            {
                                EPROSIMA_LOG_WARNING(THROUGHPUTSUBSCRIBER, "设置 history depth 为 " << max_demand);
                                dr_qos.resource_limits().max_samples = max_demand;
                                dr_qos.history().depth = max_demand;
                            }
                        }
                        // KEEP_ALL case
                        else
                        {
                            // 确保最大样本数需求
                            if (dr_qos.resource_limits().max_samples < 0 ||
                                    static_cast<uint32_t>(dr_qos.resource_limits().max_samples) < max_demand)
                            {
                                EPROSIMA_LOG_WARNING(THROUGHPUTSUBSCRIBER,
                                        "设置资源限制的最大样本数为 " << max_demand);
                                dr_qos.resource_limits().max_samples = max_demand;
                            }
                        }
                        // 将分配的样本设置为max_samples。这是因为allocated_sample必须<= max_samples
                        dr_qos.resource_limits().allocated_samples = dr_qos.resource_limits().max_samples;

                        if (init_static_types(command.m_size) && create_data_endpoints(dr_qos))
                        {
                            assert(nullptr == throughput_data_);

                            if (!data_loans_)
                            {
                                // 创建数据样本
                                throughput_data_ = static_cast<ThroughputType*>(throughput_data_type_.create_data());
                            }

                            // 等待数据端点发现
                            {
                                std::cout << "等待数据发现" << std::endl;
                                std::unique_lock<std::mutex> data_disc_lock(mutex_);
                                data_discovery_cv_.wait(data_disc_lock, [&]()
                                        {
                                            return total_matches() == 3;
                                        });
                                std::cout << "发现数据完成" << std::endl;
                            }
                        }
                        else
                        {
                            EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER,
                                    "准备静态类型和终结点以进行测试时出错");
                            return 2;
                        }
                    }

                    break;
                }
                case (READY_TO_START):
                {
                    std::cout << "-----------------------------------------------------------------------" << std::endl;
                    std::cout << "Command: READY_TO_START" << std::endl;
                    data_size_ = command.m_size;
                    demand_ = command.m_demand;

                    SampleInfoSeq infos;
                    LoanableSequence<ThroughputType> data_seq;

                    // 消费历史记录
                    while (data_reader_->wait_for_unread_message({0, 1000000}))
                    {
                        while (ReturnCode_t::RETCODE_OK == data_reader_->take(data_seq, infos))
                        {
                            if (ReturnCode_t::RETCODE_OK != data_reader_->return_loan(data_seq, infos))
                            {
                                EPROSIMA_LOG_INFO(ThroughputTest, "Problem returning loan");
                            }
                        }
                    }
                    data_reader_listener_.reset();

                    ThroughputCommandType command_sample(BEGIN);
                    command_writer_->write(&command_sample);
                    break;
                }
                case (TEST_STARTS):
                {
                    std::cout << "Command: TEST_STARTS" << std::endl;
                    t_start_ = std::chrono::steady_clock::now();
                    break;
                }
                case (TEST_ENDS):
                {
                    t_end_ = std::chrono::steady_clock::now();
                    std::cout << "Command: TEST_ENDS" << std::endl;
                    data_reader_listener_.save_numbers();
                    data_reader_listener_.disable();
                    return 1; // 结果处理在外部完成
                }
                case TYPE_DISPOSE:
                {
                    // 删除dynamic_data_对象，保护正在进行的回调
                    if (dynamic_types_)
                    {
                        DynamicDataFactory::get_instance()->delete_data(dynamic_data_);
                        dynamic_data_ = nullptr;
                    }
                    else
                    {
                        if (!data_loans_)
                        {
                            // 数据删除
                            throughput_data_type_.delete_data(throughput_data_);
                        }
                        throughput_data_ = nullptr;

                        // 删除静态案例上的数据端点
                        if (!destroy_data_endpoints())
                        {
                            EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER,
                                    "Iteration failed: Failed to remove static data endpoints");
                            return 2;
                        }

                        // 宣布删除与数据类型关联的终结点
                        ThroughputCommandType command_sample(TYPE_REMOVED);
                        command_writer_->write(&command_sample);

                        // 我们不需要等待上述消息的确认，因为 ThroughputPublisher 只会在收到消息时发送ALL_STOPS
                    }
                    break;
                }
                case (ALL_STOPS):
                {
                    std::cout << "-----------------------------------------------------------------------" << std::endl;
                    std::cout << "Command: ALL_STOPS" << std::endl;
                    return 2;
                }
                default:
                {
                    break;
                }
            }
        }
    }

    return 0;
}

void ThroughputSubscriber::run()
{
    std::cout << "Sub 等待 command discovery" << std::endl;
    {
        std::unique_lock<std::mutex> disc_lock(mutex_);
        command_discovery_cv_.wait(disc_lock, [&]()
                {
                    if (dynamic_types_)
                    {
                        // full command and data endpoints discovery
                        return total_matches() == 3;
                    }
                    else
                    {
                        // The only endpoints present should be command ones
                        return total_matches() == 2;
                    }
                });
    }
    std::cout << "Sub Discovery command 完成" << std::endl;

    int stop_count;
    do
    {
        stop_count = process_message();

        if (stop_count == 1)
        {
            // 这里的静态数据端点和类型仍然存在
            while (dynamic_types_ && data_reader_->wait_for_unread_message({0, 1000}))
            {
                std::cout << "等待清除状态" << std::endl;
                std::this_thread::sleep_for(std::chrono::milliseconds(10));
            }

            std::cout << "发送结果" << std::endl;
            ThroughputCommandType command_sample;
            command_sample.m_command = TEST_RESULTS;
            command_sample.m_demand = demand_;
            command_sample.m_size = data_size_ + (uint32_t)ThroughputType::overhead;
            command_sample.m_lastrecsample = data_reader_listener_.saved_last_seq_num_;
            command_sample.m_lostsamples = data_reader_listener_.saved_lost_samples_;
            command_sample.m_receivedsamples = data_reader_listener_.saved_received_samples_;

            double total_time_count =
                    (std::chrono::duration<double, std::micro>(t_end_ - t_start_) - t_overhead_).count();

            if (total_time_count < std::numeric_limits<uint64_t>::min())
            {
                command_sample.m_totaltime = std::numeric_limits<uint64_t>::min();
            }
            else if (total_time_count > std::numeric_limits<uint64_t>::max())
            {
                command_sample.m_totaltime = std::numeric_limits<uint64_t>::max();
            }
            else
            {
                command_sample.m_totaltime = static_cast<uint64_t>(total_time_count);
            }

            std::cout << "上次收到的样本: " << command_sample.m_lastrecsample << std::endl;
            std::cout << "丢失的样本: " << command_sample.m_lostsamples << std::endl;
            std::cout << "接收到的样本: " << command_sample.m_receivedsamples << std::endl;
            std::cout << "每秒接收到的样本: "
                      << (double)(command_sample.m_receivedsamples) * 1000000 /
                command_sample.m_totaltime
                      << std::endl;
            std::cout << "测试数据包负载大小： " << command_sample.m_size << " bytes 和样本数量：" << command_sample.m_demand <<
                " 个." << std::endl;
            command_writer_->write(&command_sample);

            std::cout << "-----------------------------------------------------------------------" << std::endl;
        }

    } while (stop_count != 2);

    return;
}

bool ThroughputSubscriber::init_dynamic_types()
{
    assert(participant_ != nullptr);

    // 检查之前是否已经初始化过
    if (dynamic_pub_sub_type_)
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "错误: DYNAMIC DATA type 已经初始化过了");
        return false;
    }
    else if (participant_->find_type(ThroughputDataType::type_name_))
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "错误: DYNAMIC DATA type 已经初始化过了");
        return false;
    }

    // 虚拟类型注册
    // 创建 basic builders
    DynamicTypeBuilder_ptr struct_type_builder(DynamicTypeBuilderFactory::get_instance()->create_struct_builder());

    // 添加成员到结构体
    struct_type_builder->add_member(0, "seqnum", DynamicTypeBuilderFactory::get_instance()->create_uint32_type());
    struct_type_builder->add_member(1, "data", DynamicTypeBuilderFactory::get_instance()->create_sequence_builder(
                DynamicTypeBuilderFactory::get_instance()->create_byte_type(), BOUND_UNLIMITED));
    struct_type_builder->set_name(ThroughputDataType::type_name_);
    dynamic_pub_sub_type_.reset(new DynamicPubSubType(struct_type_builder->build()));

    // 注册 data type
    if (ReturnCode_t::RETCODE_OK
            != dynamic_pub_sub_type_.register_type(participant_))
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "注册 DYNAMIC DATA topic 时出错");
        return false;
    }

    return true;
}

bool ThroughputSubscriber::init_static_types(
        uint32_t payload)
{
    assert(participant_ != nullptr);

    // 检查之前是否已经初始化过
    if (throughput_data_type_)
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "错误: STATIC DATA type 已经初始化过了");
        return false;
    }
    else if (participant_->find_type(ThroughputDataType::type_name_))
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "错误: STATIC DATA type 已经初始化过了");
        return false;
    }

    // 创建静态类型
    throughput_data_type_.reset(new ThroughputDataType(payload));
    // 注册静态类型
    if (ReturnCode_t::RETCODE_OK
            != throughput_data_type_.register_type(participant_))
    {
        return false;
    }

    return true;
}

bool ThroughputSubscriber::create_data_endpoints(
        const DataReaderQos& dr_qos)
{
    if (nullptr != data_sub_topic_)
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "错误: topic 已经初始化过了");
        return false;
    }

    if (nullptr != data_reader_)
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "错误: data_writer_ 已经初始化过了");
        return false;
    }

    // 创建 topic
    std::ostringstream topic_name;
    topic_name << "ThroughputTest_";
    if (hostname_)
    {
        topic_name << asio::ip::host_name() << "_";
    }
    topic_name << pid_ << "_UP";

    data_sub_topic_ = participant_->create_topic(
        topic_name.str(),
        ThroughputDataType::type_name_,
        TOPIC_QOS_DEFAULT);

    if (nullptr == data_sub_topic_)
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "创建 DATA topic 时出错");
        return false;
    }

    // 创建 endpoint
    if (nullptr ==
            (data_reader_ = subscriber_->create_datareader(
                data_sub_topic_,
                dr_qos,
                &data_reader_listener_)))
    {
        return false;
    }

    return true;
}

bool ThroughputSubscriber::destroy_data_endpoints()
{
    assert(nullptr != participant_);
    assert(nullptr != subscriber_);

    // 删除 endpoint
    if (nullptr == data_reader_
            || ReturnCode_t::RETCODE_OK != subscriber_->delete_datareader(data_reader_))
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "销毁 DataWriter 时出错");
        return false;
    }
    data_reader_ = nullptr;
    data_reader_listener_.reset();

    // 删除 Topic
    if (nullptr == data_sub_topic_
            || ReturnCode_t::RETCODE_OK != participant_->delete_topic(data_sub_topic_))
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "销毁 DATA topic 时出错");
        return false;
    }
    data_sub_topic_ = nullptr;

    // 删除 Type
    if (ReturnCode_t::RETCODE_OK
            != participant_->unregister_type(ThroughputDataType::type_name_))
    {
        EPROSIMA_LOG_ERROR(THROUGHPUTSUBSCRIBER, "注销 DATA type 时出错");
        return false;
    }

    throughput_data_type_.reset();

    return true;
}

int ThroughputSubscriber::total_matches() const
{
    // 无需锁定，因为始终在条件变量等待谓词中使用
    int count = data_reader_listener_.get_matches()
            + command_writer_listener_.get_matches()
            + command_reader_listener_.get_matches();

    // 每个端点在 ThroughputPublisher 中都有一个镜像对应项，因此，最大匹配数为 3
    assert(count >= 0 && count <= 3 );
    return count;
}
