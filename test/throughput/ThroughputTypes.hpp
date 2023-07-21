/**
 * @file ThroughputTypes.h
 *
 */

#ifndef THROUGHPUTTYPES_H_
#define THROUGHPUTTYPES_H_

#include <fastrtps/TopicDataType.h>
#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/log/Colors.hpp>

#include <chrono>

struct TroughputResults
{
    uint32_t payload_size;
    uint32_t recovery_time_ms;
    uint32_t demand;

    struct PublisherResults
    {
        std::chrono::duration<double, std::micro>  totaltime_us;
        uint64_t send_samples;
        double MBitssec;
        double Packssec;
    }
    publisher;

    struct SubscriberResults
    {
        std::chrono::duration<double, std::micro> totaltime_us;
        uint64_t recv_samples;
        uint32_t lost_samples;
        double MBitssec;
        double Packssec;
    }
    subscriber;

    void compute()
    {
        publisher.MBitssec = (double)publisher.send_samples * payload_size * 8 / publisher.totaltime_us.count();
        publisher.Packssec = (double)publisher.send_samples * 1000000 / publisher.totaltime_us.count();
        subscriber.MBitssec = (double)subscriber.recv_samples * payload_size * 8 / subscriber.totaltime_us.count();
        subscriber.Packssec = (double)subscriber.recv_samples * 1000000 / subscriber.totaltime_us.count();
    }

};

inline void print_results(
        std::vector<TroughputResults> results)
{
    printf("\n");
    printf(
        "[            TEST           ][                    PUBLISHER                      ][                            SUBSCRIBER                        ]\n");
    printf(
        "[ Bytes,Demand,Recovery Time][Sent Samples,Send Time(us),   Packs/sec,  MBits/sec][Rec Samples,Lost Samples,Rec Time(us),   Packs/sec,  MBits/sec]\n");
    printf(
        "[------,------,-------------][------------,-------------,------------,-----------][-----------,------------,------------,------------,-----------]\n");
    for (uint32_t i = 0; i < results.size(); i++)
    {
        printf("%7u,%6u,%13u,%13.0f,%13.0f,%12.3f,%11.3f,%12.0f,%12.0f,%12.0f,%12.3f,%11.3f\n",
                results[i].payload_size,
                results[i].demand,
                results[i].recovery_time_ms,
                (double)results[i].publisher.send_samples,
                results[i].publisher.totaltime_us.count(),
                results[i].publisher.Packssec,
                results[i].publisher.MBitssec,
                (double)results[i].subscriber.recv_samples,
                (double)results[i].subscriber.lost_samples,
                results[i].subscriber.totaltime_us.count(),
                (double)results[i].subscriber.Packssec,
                (double)results[i].subscriber.MBitssec);
    }
    printf("\n");
    fflush(stdout);
}

// 编译器无法生成此类型分配代码，因为在生成时数组成员大小未知。
// Throughput数据类型必须根据运行时给定的数组成员大小为此对象分配合适的缓冲区。
// 需要事先了解这种类型的对齐才能计算正确的缓冲区大小。
// 对于 x86 和 x64 架构，此结构默认对齐方式在 msvc 和 gcc 中为 4。
// alignas 说明符用于匹配其他平台中的此默认行为。
// 此类型不定义比较运算符，因为引用的实际数据大小未知。
// 使用其数据类型提供的比较方法。
typedef struct alignas(4) ThroughputType
{
    // 标识发送的样本
    uint32_t seqnum;
    // 实际有效载荷
    uint8_t data[1];
    // 此结构开销
    static const size_t overhead;

} ThroughputType;

class ThroughputDataType : public eprosima::fastrtps::TopicDataType
{
    // 管理类型的缓冲区大小
    const uint32_t buffer_size_;

public:

    // 此大小定义预期的吞吐量类型缓冲区大小
    ThroughputDataType(
            const uint32_t& size)
        : buffer_size_(size)
    {
        setName(type_name_.c_str());
        m_typeSize = sizeof(decltype(ThroughputType::seqnum)) +
                ((size + 3) & ~3) +
                eprosima::fastrtps::rtps::SerializedPayload_t::representation_header_size;
        m_isGetKeyDefined = false;
    }

    ~ThroughputDataType()
    {
    }

    bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

    bool deserialize(
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            void* data) override;

    std::function<uint32_t()> getSerializedSizeProvider(
            void* data) override;

    void* createData() override;

    void deleteData(
            void* data) override;

    bool getKey(
            void* /*data*/,
            eprosima::fastrtps::rtps::InstanceHandle_t* /*ihandle*/,
            bool force_md5 = false) override
    {
        (void)force_md5;
        return false;
    }

    bool compare_data(
            const ThroughputType& lt1,
            const ThroughputType& lt2) const;

    bool is_bounded() const override
    {
        // 所有plain类型都有界
        return is_plain();
    }

    bool is_plain() const override
    {
        // 它是plain的，因为类型具有固定的大小
        return true;
    }

    // 名称
    static const std::string type_name_;
};

enum e_Command : uint32_t
{
    DEFAULT,
    READY_TO_START,
    BEGIN,
    TEST_STARTS,
    TEST_ENDS,
    TYPE_NEW,
    TYPE_DISPOSE,
    TYPE_REMOVED,
    ALL_STOPS,
    TEST_RESULTS
};

typedef struct ThroughputCommandType
{
    e_Command m_command;
    uint32_t m_size = 0;
    uint32_t m_demand = 0;
    uint64_t m_receivedsamples = 0;
    uint32_t m_lostsamples = 0;
    uint64_t m_lastrecsample = 0;
    uint64_t m_totaltime = 0;

    ThroughputCommandType(
            e_Command com = DEFAULT)
        : m_command(com)
    {
    }

} ThroughputCommandType;


inline std::ostream& operator <<(
        std::ostream& output,
        const ThroughputCommandType& com)
{
    switch (com.m_command)
    {
        case (DEFAULT): return output << "DEFAULT";
        case (READY_TO_START): return output << "READY_TO_START";
        case (BEGIN): return output << "BEGIN";
        case (TEST_STARTS): return output << "TEST_STARTS";
        case (TEST_ENDS): return output << "TEST_ENDS";
        case (ALL_STOPS): return output << "ALL_STOPS";
        case (TEST_RESULTS): return output << "TEST RESULTS";
        default: return output << C_B_RED << "UNKNOWN COMMAND" << C_DEF;
    }
    return output;
}

class ThroughputCommandDataType : public eprosima::fastrtps::TopicDataType
{
public:

    ThroughputCommandDataType()
    {
        setName("ThroughputCommand");
        m_typeSize = 4 * sizeof(uint32_t) + 3 * sizeof(uint64_t) + sizeof(double);
        m_isGetKeyDefined = false;
    }

    ~ThroughputCommandDataType()
    {
    }

    bool serialize(
            void* data,
            eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;

    bool deserialize(
            eprosima::fastrtps::rtps::SerializedPayload_t* payload,
            void* data) override;

    std::function<uint32_t()> getSerializedSizeProvider(
            void* data) override;

    void* createData() override;

    void deleteData(
            void* data) override;

    bool getKey(
            void* /*data*/,
            eprosima::fastrtps::rtps::InstanceHandle_t* /*ihandle*/,
            bool force_md5 = false) override
    {
        (void)force_md5;
        return false;
    }

};

#endif /* THROUGHPUTTYPES_H_ */
