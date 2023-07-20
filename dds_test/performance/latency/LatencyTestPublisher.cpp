/**
 * @file LatencyPublisher.cpp
 *
 */

#include "LatencyTestPublisher.hpp"

#include <inttypes.h>

#include <numeric>
#include <cmath>
#include <fstream>

#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/log/Colors.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/publisher/DataWriterListener.hpp>
#include <fastdds/dds/subscriber/DataReader.hpp>
#include <fastrtps/xmlparser/XMLProfileManager.h>
#include <fastdds/rtps/transport/UDPv4TransportDescriptor.h>
#include <fastdds/rtps/transport/shared_mem/SharedMemTransportDescriptor.h>


#define TIME_LIMIT_US 10000

using namespace eprosima::fastdds::dds;
using namespace eprosima::fastrtps::rtps;
using namespace eprosima::fastrtps::types;

LatencyTestPublisher::LatencyTestPublisher()
    : latency_command_type_(new TestCommandDataType())
    , data_writer_listener_(this)
    , data_reader_listener_(this)
    , command_writer_listener_(this)
    , command_reader_listener_(this)
{
}

LatencyTestPublisher::~LatencyTestPublisher()
{
    // 已为每个有效负载迭代删除静态类型终结点 shpuld
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
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "ERROR unregistering the DATA type and/or removing the endpoints");
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

    EPROSIMA_LOG_INFO(LatencyTest, "Pub: Participant removed");
}

bool LatencyTestPublisher::init(
        int subscribers,
        int samples,
        bool reliable,
        uint32_t pid,
        bool hostname,
        bool export_csv,
        const std::string& export_prefix,
        std::string raw_data_file,
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
    // 初始化状态
    xml_config_file_ = xml_config_file;
    samples_ = samples;
    subscribers_ = subscribers;
    export_csv_ = export_csv;
    export_prefix_ = export_prefix;
    reliable_ = reliable;
    dynamic_types_ = dynamic_data;
    data_sharing_ = data_sharing;
    data_loans_ = data_loans;
    shared_memory_ = shared_memory;
    forced_domain_ = forced_domain;
    raw_data_file_ = raw_data_file;
    pid_ = pid;
    hostname_ = hostname;

    data_size_pub_ = latency_data_sizes.sample_sizes();

    // 初始化输出文件
    output_files_.push_back(std::make_shared<std::stringstream>());
    output_files_.push_back(std::make_shared<std::stringstream>());

    uint32_t data_index = DATA_BASE_INDEX;

    for (std::vector<uint32_t>::iterator it = data_size_pub_.begin(); it != data_size_pub_.end(); ++it)
    {
        // 可靠性
        std::string str_reliable = reliable_ ? "reliable" : "besteffort";

        // 摘要文件
        *output_files_[MINIMUM_INDEX] << "\"" << samples_ << " samples of " << *it << " bytes (us)\"";
        *output_files_[AVERAGE_INDEX] << "\"" << samples_ << " samples of " << *it << " bytes (us)\"";

        if (it != data_size_pub_.end() - 1)
        {
            *output_files_[MINIMUM_INDEX] << ",";
            *output_files_[AVERAGE_INDEX] << ",";
        }

        output_files_.push_back(std::make_shared<std::stringstream>());
        *output_files_[data_index] << "\"Minimum of " << samples_ << " samples (" << str_reliable << ")\",";
        *output_files_[data_index] << "\"Average of " << samples_ << " samples (" << str_reliable << ")\"" << std::endl;

        data_index++;
    }

    *output_files_[MINIMUM_INDEX] << std::endl;
    *output_files_[AVERAGE_INDEX] << std::endl;

    /* 创建 DomainParticipant*/
    std::string participant_profile_name = "pub_participant_profile";
    DomainParticipantQos pqos;

    // 默认 domain
    DomainId_t domainId = pid % 230;

    // 默认 participant 名称
    pqos.name("latency_test_publisher");

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

    // 设置共享内存传输（如果已经被显式启用/禁用）。
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
    participant_ =
            DomainParticipantFactory::get_instance()->create_participant(domainId, pqos);

    if (participant_ == nullptr)
    {
        return false;
    }

    // 注册命令类型
    if (ReturnCode_t::RETCODE_OK != latency_command_type_.register_type(participant_))
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "ERROR registering the COMMAND type");
        return false;
    }

    /* 创建Publisher */
    publisher_ = participant_->create_publisher(PUBLISHER_QOS_DEFAULT, nullptr);
    if (publisher_ == nullptr)
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "ERROR creating PUBLISHER");
        return false;
    }

    /* 创建Subscriber */
    subscriber_ = participant_->create_subscriber(SUBSCRIBER_QOS_DEFAULT, nullptr);
    if (subscriber_ == nullptr)
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "ERROR creating SUBSCRIBER");
        return false;
    }

    /* 创建数据写入器和数据读取器 QoS 配置文件*/
    {
        // 从XML读取配置
        if (xml_config_file_.length() > 0)
        {
            std::string pub_profile_name = "pub_publisher_profile";
            std::string sub_profile_name = "pub_subscriber_profile";

            if (ReturnCode_t::RETCODE_OK != publisher_->get_datawriter_qos_from_profile(pub_profile_name, dw_qos_))
            {
                EPROSIMA_LOG_ERROR(LATENCYPUBLISHER,
                        "ERROR unable to retrive the " << pub_profile_name << "from XML file");
                return false;
            }

            if (ReturnCode_t::RETCODE_OK != subscriber_->get_datareader_qos_from_profile(sub_profile_name, dr_qos_))
            {
                EPROSIMA_LOG_ERROR(LATENCYPUBLISHER,
                        "ERROR unable to retrive the " << sub_profile_name << "from XML file");
            }
        }
        // 创建 QoS 配置
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

            dw_qos_.reliability(rp);
            dr_qos_.reliability(rp);

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

    /* 创建Topics */
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

        latency_command_pub_topic_ = participant_->create_topic(
            topic_name.str(),
            "TestCommandType",
            TOPIC_QOS_DEFAULT);

        if (latency_command_pub_topic_ == nullptr)
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

        latency_command_sub_topic_ = participant_->create_topic(
            topic_name.str(),
            "TestCommandType",
            TOPIC_QOS_DEFAULT);

        if (latency_command_sub_topic_ == nullptr)
        {
            return false;
        }
    }


    /* 创建Writer */
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

    /* 创建Reader */
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

    /* 计算开销 */
    start_time_ = std::chrono::steady_clock::now();
    for (int i = 0; i < 1000; ++i)
    {
        end_time_ = std::chrono::steady_clock::now();
    }
    overhead_time_ = std::chrono::duration<double, std::micro>(end_time_ - start_time_) / 1001;
    std::cout << "Overhead " << overhead_time_.count() << " us" << std::endl;

    /* 创建raw_data_file并添加标头 */
    if (raw_data_file_ != "")
    {
        raw_sample_count_ = 0;
        std::ofstream data_file;
        data_file.open(raw_data_file_);
        data_file << "Sample,Payload [Bytes],Latency [us]" << std::endl;
    }

    // 使用动态数据终端节点的终端节点跨越整个测试持续时间
    // 为每个有效负载迭代创建静态类型和终结点
    return dynamic_types_ ? init_dynamic_types() && create_data_endpoints() : true;
}

/*
 * 我们当前更新的匹配状态信息:
 * - total_count(_change) 保存实际匹配数量
 * - current_count(_change) 是指示匹配或不匹配的标志。
 *   (TODO: 查看是否符合标准定义)
 * */

void LatencyTestPublisher::LatencyDataWriterListener::on_publication_matched(
        DataWriter* writer,
        const PublicationMatchedStatus& info)
{
    (void)writer;

    std::unique_lock<std::mutex> lock(latency_publisher_->mutex_);

    matched_ = info.total_count;

    if (info.current_count_change > 0)
    {
        EPROSIMA_LOG_INFO(LatencyTest, C_MAGENTA << "Data Pub Matched" << C_DEF);
    }

    lock.unlock();
    latency_publisher_->discovery_cv_.notify_one();
}

void LatencyTestPublisher::LatencyDataReaderListener::on_subscription_matched(
        DataReader* reader,
        const SubscriptionMatchedStatus& info)
{
    (void)reader;

    std::unique_lock<std::mutex> lock(latency_publisher_->mutex_);

    matched_ = info.total_count;

    if (info.current_count_change > 0)
    {
        EPROSIMA_LOG_INFO(LatencyTest, C_MAGENTA << "Data Sub Matched" << C_DEF);
    }

    lock.unlock();
    latency_publisher_->discovery_cv_.notify_one();
}

void LatencyTestPublisher::ComandWriterListener::on_publication_matched(
        DataWriter* writer,
        const PublicationMatchedStatus& info)
{
    (void)writer;

    std::unique_lock<std::mutex> lock(latency_publisher_->mutex_);

    matched_ = info.total_count;

    if (info.current_count_change > 0)
    {
        EPROSIMA_LOG_INFO(LatencyTest, C_MAGENTA << "Command Pub Matched" << C_DEF);
    }

    lock.unlock();
    latency_publisher_->discovery_cv_.notify_one();
}

void LatencyTestPublisher::CommandReaderListener::on_subscription_matched(
        DataReader* reader,
        const SubscriptionMatchedStatus& info)
{
    (void)reader;

    std::unique_lock<std::mutex> lock(latency_publisher_->mutex_);

    matched_ = info.total_count;

    if (info.current_count_change > 0)
    {
        EPROSIMA_LOG_INFO(LatencyTest, C_MAGENTA << "Command Sub Matched" << C_DEF);
    }

    lock.unlock();
    latency_publisher_->discovery_cv_.notify_one();
}

void LatencyTestPublisher::CommandReaderListener::on_data_available(
        DataReader* reader)
{
    TestCommandType command;
    SampleInfo info;

    if (reader->take_next_sample(
                &command, &info) == ReturnCode_t::RETCODE_OK
            && info.valid_data)
    {
        if (command.m_command == BEGIN
                || command.m_command == END )
        {
            latency_publisher_->mutex_.lock();
            ++latency_publisher_->command_msg_count_;
            latency_publisher_->mutex_.unlock();
            latency_publisher_->command_msg_cv_.notify_one();
        }
    }
    else
    {
        EPROSIMA_LOG_INFO(LatencyTest, "Problem reading command message");
    }
}

void LatencyTestPublisher::LatencyDataReaderListener::on_data_available(
        DataReader* reader)
{
    auto pub = latency_publisher_;

    SampleInfoSeq infos;
    LoanableSequence<LatencyType> data_seq;
    std::chrono::duration<uint32_t, std::nano> bounce_time(0);

    if (pub->data_loans_)
    {
        if (ReturnCode_t::RETCODE_OK != reader->take(data_seq, infos, 1))
        {
            EPROSIMA_LOG_ERROR(LatencyTest, "Problem reading Subscriber echoed loaned test data");
            return;
        }
    }
    else
    {
        SampleInfo info;
        void* data = pub->dynamic_types_ ?
                (void*)pub->dynamic_data_in_:
                (void*)pub->latency_data_in_;

        // 检索到的回显数据
        if (reader->take_next_sample(
                    data, &info) != ReturnCode_t::RETCODE_OK
                || !info.valid_data)
        {
            EPROSIMA_LOG_ERROR(LatencyTest, "Problem reading Subscriber echoed test data");
            return;
        }
    }

    // 样品的原子管理
    bool notify = false;
    {
        std::lock_guard<std::mutex> lock(pub->mutex_);

        if (pub->data_loans_)
        {
            // 请求一个单独的样品
            assert(infos.length() == 1 && data_seq.length() == 1);
            // 已经发放了以前的贷款
            assert(pub->latency_data_in_ == nullptr);
            // 引用借出的数据
            pub->latency_data_in_ = &data_seq[0];
            // 检索退回时间
            bounce_time = std::chrono::duration<uint32_t, std::nano>(pub->latency_data_in_->bounce);
        }

        // 检查是否是预期的回显消息
        if ((pub->dynamic_types_
                && (pub->dynamic_data_in_->get_uint32_value(0)
                != pub->dynamic_data_out_->get_uint32_value(0)))
                || (!pub->dynamic_types_
                && (pub->latency_data_in_->seqnum
                != pub->latency_data_out_->seqnum)))
        {
            EPROSIMA_LOG_INFO(LatencyTest, "Echo message received is not the expected one");
        }
        else
        {

            // 下面的系数 2 是计算往返除以 2。请注意，开销也不需要减半，因为我们每次往返两次访问时钟
            pub->end_time_ = std::chrono::steady_clock::now();
            pub->end_time_ -= bounce_time;
            auto roundtrip = std::chrono::duration<double, std::micro>(pub->end_time_ - pub->start_time_) / 2.0;
            roundtrip -= pub->overhead_time_;

            // 丢弃样本由于有效负载中断而借出失败，在这种情况下，往返将与操作系统调度程序量子切片匹配
            if (roundtrip.count() > 0
                    && !(pub->data_loans_ && roundtrip.count() > 10000))
            {
                pub->times_.push_back(roundtrip);
                ++pub->received_count_;
            }

            // 从输出数据重置序列
            if (pub->dynamic_types_)
            {
                pub->dynamic_data_out_->set_uint32_value(0, 0);
            }
            else
            {
                pub->latency_data_out_->seqnum = 0;
            }
        }

        if (pub->data_loans_)
        {
            pub->latency_data_in_ = nullptr;
        }

        ++pub->data_msg_count_;
        notify = pub->data_msg_count_ >= pub->subscribers_;
    }

    if (notify)
    {
        pub->data_msg_cv_.notify_one();
    }

    // 释放贷款（如果有）
    if (pub->data_loans_
            && ReturnCode_t::RETCODE_OK != reader->return_loan(data_seq, infos))
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "返回借用的测试数据时出现问题");
    }
}

void LatencyTestPublisher::run()
{
    for (std::vector<uint32_t>::iterator payload = data_size_pub_.begin(); payload != data_size_pub_.end(); ++payload)
    {
        if (!test(*payload))
        {
            break;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        if (payload != data_size_pub_.end() - 1)
        {
            *output_files_[MINIMUM_INDEX] << ",";
            *output_files_[AVERAGE_INDEX] << ",";
        }
    }

    std::string str_reliable = reliable_ ? "reliable" : "besteffort";

    // 打印包含测量值的汇总表
    printf("打印往返时间,统计%d个样品\n", samples_);
    printf("   字节, 样本数,  标准差,  平均延迟时间,  最小延迟时间,     50%%,     90%%,     99%%,  99.99%%,     max\n");
    printf("--------,--------,--------,--------,--------,--------,--------,--------,--------,--------,\n");
    for (uint16_t i = 0; i < stats_.size(); i++)
    {
        print_stats(DATA_BASE_INDEX + i, stats_[i]);

        if (export_csv_)
        {
            export_csv("_" + std::to_string(stats_[i].bytes_) + "_", str_reliable, *output_files_[i + 2]);
        }
    }

    if (export_csv_)
    {
        export_csv("_minimum_", str_reliable, *output_files_[MINIMUM_INDEX]);
        export_csv("_average_", str_reliable, *output_files_[AVERAGE_INDEX]);
    }
}

void LatencyTestPublisher::export_csv(
        const std::string& data_name,
        const std::string& str_reliable,
        const std::stringstream& data_stream)
{
    std::ofstream out_file;

    std::string prefix = export_prefix_;
    if (prefix.length() == 0)
    {
        prefix = "perf_LatencyTest";
    }

    out_file.open(prefix + data_name + str_reliable + ".csv");
    out_file << data_stream.str();
    out_file.close();
}

bool LatencyTestPublisher::test(
        uint32_t datasize)
{
    test_status_ = 0;
    received_count_ = 0;

    if (dynamic_types_)
    {
        dynamic_data_in_ = static_cast<DynamicData*>(dynamic_pub_sub_type_->createData());
        dynamic_data_out_ = static_cast<DynamicData*>(dynamic_pub_sub_type_->createData());

        if (nullptr == dynamic_data_in_)
        {
            EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "迭代失败:无法创建动态数据输入");
            return false;
        }

        if (nullptr == dynamic_data_out_)
        {
            EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "迭代失败:无法创建动态数据输出");
            return false;
        }

        MemberId id_in;
        MemberId id_out;
        DynamicData* data_in = dynamic_data_in_->loan_value(
            dynamic_data_in_->get_member_id_at_index(1));
        DynamicData* data_out = dynamic_data_out_->loan_value(
            dynamic_data_out_->get_member_id_at_index(1));

        // 填充直到完成所需的有效负载大小
        uint32_t padding = datasize - 4; // 序列号是 DWORD

        for (uint32_t i = 0; i < padding; ++i)
        {
            data_in->insert_sequence_data(id_in);
            data_in->set_byte_value(0, id_in);
            data_out->insert_sequence_data(id_out);
            data_out->set_byte_value(0, id_out);
        }

        dynamic_data_in_->return_loaned_value(data_in);
        dynamic_data_out_->return_loaned_value(data_out);
    }
    else if (init_static_types(datasize) && create_data_endpoints())
    {
        if (!data_loans_)
        {
            // 创建接收数据样本
            latency_data_in_ = static_cast<LatencyType*>(latency_data_type_->createData());
        }
        // 在贷款场景中，此对象将被保留，仅用于检查回显的样本是否正确 在普通情况下，它保留要发送的对象
        latency_data_out_ = static_cast<LatencyType*>(latency_data_type_->createData());
    }
    else
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "准备要测试的类型和终结点时出错");
        return false;
    }

    // 向subscribers发出publisher已准备就绪的信号
    times_.clear();
    TestCommandType command;
    command.m_command = READY;
    if (!command_writer_->write(&command))
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "Publisher无法发布 READY 命令");
        return false;
    }

    // 等待发现过程完成:
    // 每个Subscriber需要 4 个匹配项（2 个publishers和 2 个subsribers）
    wait_for_discovery(
        [this]() -> bool
        {
            return total_matches() == 4 * subscribers_;
        });

    EPROSIMA_LOG_INFO(LatencyTest, C_B_MAGENTA << "Pub: 完成发现 " << C_DEF);

    // 等待Subsriber的 BEGIN 命令
    wait_for_command(
        [this]()
        {
            return command_msg_count_ >= subscribers_;
        });

    // 第一次测量通常不具有代表性，所以我们再拿一个，然后放弃第一个。
    for (unsigned int count = 1; count <= samples_ + 1; ++count)
    {
        void* data = nullptr;

        if (dynamic_types_)
        {
            dynamic_data_in_->set_uint32_value(0, 0);
            dynamic_data_out_->set_uint32_value(count, 0);
            data = dynamic_data_out_;
        }
        else
        {
            // 初始化要发送的样本
            latency_data_out_->seqnum = count;

            // 借出每个样本
            if (data_loans_)
            {
                latency_data_in_ = nullptr;
                int trials = 10;
                bool loaned = false;

                while (trials-- != 0 && !loaned)
                {
                    loaned = (ReturnCode_t::RETCODE_OK
                            ==  data_writer_->loan_sample(
                                data,
                                DataWriter::LoanInitializationKind::NO_LOAN_INITIALIZATION));

                    std::this_thread::yield();

                    if (!loaned)
                    {
                        EPROSIMA_LOG_INFO(LatencyTest, "Publisher尝试借出: " << trials);
                    }
                }

                if (!loaned)
                {
                    EPROSIMA_LOG_ERROR(LatencyTest, "使用借出的Publisher测试数据存在问题");
                    continue; // next iteration
                }

                // 将数据复制到借贷
                auto data_type = std::static_pointer_cast<LatencyDataType>(latency_data_type_);
                data_type->copy_data(*latency_data_out_, *(LatencyType*)data);
            }
            else
            {
                data = latency_data_out_;
            }

            // 重置接收样本数据
            if (latency_data_in_)
            {
                latency_data_in_->seqnum = 0;
            }
        }

        start_time_ = std::chrono::steady_clock::now();

        // 数据发布中
        if (!data_writer_->write(data))
        {
            // 归还借贷
            if (data_loans_)
            {
                data_writer_->discard_loan(data);
            }

            EPROSIMA_LOG_ERROR(LatencyTest, "Publisher write operation failed");
            return false;
        }

        std::unique_lock<std::mutex> lock(mutex_);
        // 由于可能的消息泄漏而导致等待超时
        data_msg_cv_.wait_for(lock,
                std::chrono::milliseconds(100),
                [&]()
                {
                    return data_msg_count_ >= subscribers_;
                });
        data_msg_count_ = 0;
    }

    command.m_command = STOP;
    command_writer_->write(&command);

    if (test_status_ != 0)
    {
        EPROSIMA_LOG_ERROR(LatencyTest, "Error in test");
        return false;
    }

    // 等待Subsriber的 END 命令
    // 保证延迟测试订阅者|发布者数据终结点的创建和销毁是按顺序进行的
    wait_for_command(
        [this]()
        {
            return command_msg_count_ >= subscribers_;
        });

    // 测试完成:

    // 删除数据样本
    if (dynamic_types_)
    {
        DynamicDataFactory::get_instance()->delete_data(dynamic_data_in_);
        DynamicDataFactory::get_instance()->delete_data(dynamic_data_out_);
    }
    else
    {
        if (!data_loans_)
        {
            latency_data_type_.delete_data(latency_data_in_);
        }
        latency_data_type_.delete_data(latency_data_out_);
    }

    // 释放资源

    if (dynamic_types_)
    {
        size_t removed = 0;
        data_writer_->clear_history(&removed);
    }
    // 删除与给定有效负载大小关联的终结点
    else if (!destroy_data_endpoints())
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "Endpoints for payload size " << datasize << " 不能被移除");
        return false;
    }

    // 删除第一个测量值，因为它通常不具有代表性
    times_.erase(times_.begin());

    // Log all data to CSV file if specified
    if (raw_data_file_ != "")
    {
        export_raw_data(datasize);
    }

    analyze_times(datasize);

    return true;
}

void LatencyTestPublisher::analyze_times(
        uint32_t datasize)
{
    // 收集统计信息
    TimeStats stats;
    stats.bytes_ = datasize;
    stats.received_ = received_count_ - 1;  // 因为我们不计算第一个.
    stats.minimum_ = *min_element(times_.begin(), times_.end());
    stats.maximum_ = *max_element(times_.begin(), times_.end());
    stats.mean_ = accumulate(times_.begin(), times_.end(),
                    std::chrono::duration<double, std::micro>(0)).count() / times_.size();

    double aux_stdev = 0;
    for (std::vector<std::chrono::duration<double, std::micro>>::iterator tit = times_.begin(); tit != times_.end();
            ++tit)
    {
        aux_stdev += pow(((*tit).count() - stats.mean_), 2);
    }
    aux_stdev = sqrt(aux_stdev / times_.size());
    stats.stdev_ = aux_stdev;

    /* 百分位数 */
    sort(times_.begin(), times_.end());

    size_t elem = 0;
    elem = static_cast<size_t>(times_.size() * 0.5);
    if (elem > 0 && elem <= times_.size())
    {
        stats.percentile_50_ = times_.at(--elem).count();
    }
    else
    {
        stats.percentile_50_ = NAN;
    }

    elem = static_cast<size_t>(times_.size() * 0.9);
    if (elem > 0 && elem <= times_.size())
    {
        stats.percentile_90_ = times_.at(--elem).count();
    }
    else
    {
        stats.percentile_90_ = NAN;
    }

    elem = static_cast<size_t>(times_.size() * 0.99);
    if (elem > 0 && elem <= times_.size())
    {
        stats.percentile_99_ = times_.at(--elem).count();
    }
    else
    {
        stats.percentile_99_ = NAN;
    }

    elem = static_cast<size_t>(times_.size() * 0.9999);
    if (elem > 0 && elem <= times_.size())
    {
        stats.percentile_9999_ = times_.at(--elem).count();
    }
    else
    {
        stats.percentile_9999_ = NAN;
    }

    stats_.push_back(stats);
}

void LatencyTestPublisher::print_stats(
        uint32_t data_index,
        TimeStats& stats)
{
    *output_files_[MINIMUM_INDEX] << "\"" << stats.minimum_.count() << "\"";
    *output_files_[AVERAGE_INDEX] << "\"" << stats.mean_ << "\"";
    *output_files_[data_index] << "\"" << stats.minimum_.count() << "\",\"" << stats.mean_ << "\"" << std::endl;


#ifdef _WIN32
    printf("%8I64u,%8u,%8.3f,%8.3f,%8.3f,%8.3f,%8.3f,%8.3f,%8.3f,%8.3f \n",
            stats.bytes_, stats.received_, stats.stdev_, stats.mean_, stats.minimum_.count(), stats.percentile_50_,
            stats.percentile_90_, stats.percentile_99_, stats.percentile_9999_, stats.maximum_.count());
#else
    printf("%8" PRIu64 ",%8u,%8.3f,%8.3f,%8.3f,%8.3f,%8.3f,%8.3f,%8.3f,%8.3f \n",
            stats.bytes_, stats.received_, stats.stdev_, stats.mean_, stats.minimum_.count(), stats.percentile_50_,
            stats.percentile_90_, stats.percentile_99_, stats.percentile_9999_, stats.maximum_.count());
#endif // ifdef _WIN32
}

void LatencyTestPublisher::export_raw_data(
        uint32_t datasize)
{
    std::ofstream data_file;
    data_file.open(raw_data_file_, std::fstream::app);
    for (std::vector<std::chrono::duration<double, std::micro>>::iterator tit = times_.begin(); tit != times_.end();
            ++tit)
    {
        data_file << ++raw_sample_count_ << "," << datasize << "," << (*tit).count() << std::endl;
    }
    data_file.close();
}

int32_t LatencyTestPublisher::total_matches() const
{
    // 无需锁定，因为始终在条件变量等待谓词中使用
    int32_t count = data_writer_listener_.get_matches()
            + data_reader_listener_.get_matches()
            + command_writer_listener_.get_matches()
            + command_reader_listener_.get_matches();

    // 每个端点在 LatencyTestPublisher 中都有一个镜像对应项
    // 因此，最大匹配数为 4 * 订阅者总数
    assert(count >= 0 && count <= 4 * subscribers_);
    return count;
}

bool LatencyTestPublisher::init_dynamic_types()
{
    assert(participant_ != nullptr);

    // 检查之前是否已经初始化过
    if (dynamic_pub_sub_type_)
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "错误: DYNAMIC DATA type 已经初始化过");
        return false;
    }
    else if (participant_->find_type(LatencyDataType::type_name_))
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "错误: DYNAMIC DATA type 已经注册过");
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
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "注册DYNAMIC DATA type时出错");
        return false;
    }

    return true;
}

bool LatencyTestPublisher::init_static_types(
        uint32_t payload)
{
    assert(participant_ != nullptr);

    // 检查之前是否已经初始化过
    if (latency_data_type_)
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "错误:STATIC DATA type 已经初始化过");
        return false;
    }
    else if (participant_->find_type(LatencyDataType::type_name_))
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "错误:STATIC DATA type已经注册过");
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
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "注册 STATIC DATA type 时出错");
        return false;
    }

    return true;
}

bool LatencyTestPublisher::create_data_endpoints()
{
    if (nullptr != latency_data_pub_topic_ || nullptr != latency_data_sub_topic_)
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "错误: latency_data_pub_topic_ 已经初始化过");
        return false;
    }

    if (nullptr != latency_data_sub_topic_)
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "错误: latency_data_sub_topic_ 已经初始化过");
        return false;
    }

    if (nullptr != data_writer_)
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "错误: data_writer_ 已经初始化过");
        return false;
    }

    if (nullptr != data_reader_)
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "错误: data_reader_ 已经初始化过");
        return false;
    }

    /* 创建Topics */
    std::ostringstream topic_name;
    topic_name << "LatencyTest_";
    if (hostname_)
    {
        topic_name << asio::ip::host_name() << "_";
    }
    topic_name << pid_ << "_PUB2SUB";

    latency_data_pub_topic_ = participant_->create_topic(
        topic_name.str(),
        LatencyDataType::type_name_,
        TOPIC_QOS_DEFAULT);

    if (nullptr == latency_data_pub_topic_)
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "创建 latency_data_pub_topic_ 时出错");
        return false;
    }

    topic_name.str("");
    topic_name.clear();
    topic_name << "LatencyTest_";

    if (hostname_)
    {
        topic_name << asio::ip::host_name() << "_";
    }
    topic_name << pid_ << "_SUB2PUB";

    latency_data_sub_topic_ = participant_->create_topic(
        topic_name.str(),
        LatencyDataType::type_name_,
        TOPIC_QOS_DEFAULT);

    if (latency_data_sub_topic_ == nullptr)
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "创建latency_data_sub_topic_时出错");
        return false;
    }

    // 创建DataWriter
    data_writer_ = publisher_->create_datawriter(
        latency_data_pub_topic_,
        dw_qos_,
        &data_writer_listener_);

    if (data_writer_ == nullptr)
    {
        return false;
    }

    // 创建 Echo DataReader
    data_reader_ = subscriber_->create_datareader(
        latency_data_sub_topic_,
        dr_qos_,
        &data_reader_listener_);

    if (data_reader_ == nullptr)
    {
        return false;
    }

    return true;
}

bool LatencyTestPublisher::destroy_data_endpoints()
{
    assert(nullptr != participant_);
    assert(nullptr != publisher_);
    assert(nullptr != subscriber_);

    // 删除 endpoints
    if (nullptr == data_writer_
            || ReturnCode_t::RETCODE_OK != publisher_->delete_datawriter(data_writer_))
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "销毁 DataWriter 时出错");
        return false;
    }
    data_writer_ = nullptr;
    data_writer_listener_.reset();

    if (nullptr == data_reader_
            || ReturnCode_t::RETCODE_OK != subscriber_->delete_datareader(data_reader_))
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "销毁 DataReader 时出错");
        return false;
    }
    data_reader_ = nullptr;
    data_reader_listener_.reset();

    // 删除Topics
    if (nullptr == latency_data_pub_topic_
            || ReturnCode_t::RETCODE_OK != participant_->delete_topic(latency_data_pub_topic_))
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "销毁 DATA PUB topic 时出错");
        return false;
    }
    latency_data_pub_topic_ = nullptr;

    if (nullptr == latency_data_sub_topic_
            || ReturnCode_t::RETCODE_OK != participant_->delete_topic(latency_data_sub_topic_))
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "销毁 DATA SUB topic 时出错");
        return false;
    }
    latency_data_sub_topic_ = nullptr;

    // 删除 Type
    if (ReturnCode_t::RETCODE_OK != participant_->unregister_type(LatencyDataType::type_name_))
    {
        EPROSIMA_LOG_ERROR(LATENCYPUBLISHER, "注销 DATA type 时出错");
        return false;
    }

    latency_data_type_.reset();
    dynamic_pub_sub_type_.reset();
    DynamicTypeBuilderFactory::delete_instance();

    return true;
}
