#ifndef _DDS_C_QOS_H_
#define _DDS_C_QOS_H_

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define QOS_IP_LEN 20
#define QOS_DOMAIN_LEN 20
#define QOS_DIR_LEN 30
#define QOS_WHITELIST_IP_NUM 10
#define QOS_DATASHARE_DOMAIN_NUM 10

    enum qos_trans_protocol
    {
        SHM,
        UDPv4,
        UDPv6,
        TCPv4,
        TCPv6
    };

    enum qos_datasharing
    {
        ON,
        OFF,
        AUTO
    };

    /*传输可靠性选项*/
    enum qos_reliable_mode
    {
        /*!
         * 不可靠传输：
         * 可以接受“不重试传播”任何样本。
         * 据测试，样本的新值生成的频率足以使不需要重新发送或确认任何样本
         */
        besteffort = 0x01,

        /*!
         * 可靠传输：
         * 指定服务将尝试传递其历史记录中的所有样本。
         * 错过的样本可以重试。
         * 在稳定状态下（没有通过 DataWriter 传达的修改），
         * 中间件保证 DataWriter 历史记录中的所有样本最终都将传递到所有 DataReader 对象。
         * 在稳定状态之外，history 和 resourceLimits 将确定样本如何成为历史的一部分，
         * 以及是否可以从中丢弃样本。
         */
        reliable = 0x02
    };

    /*历史qos选项*/
    enum qos_history_kind
    {
        /*!
         * 服务将仅尝试保留实例的最新值，并丢弃较旧的值。
         * 要保留和传递的最大样本数由 history 的深度定义，
         * 该深度需要与 resourceLimits 设置保持一致。
         * 如果达到深度定义的限制，系统将丢弃最旧的样本，为新样本腾出空间。
         * */
        keep_last_history,

        /*!
         * 服务将尝试保留实例的所有值，直到可以将其传递给所有现有Subscriber。
         * 如果选择此选项，则深度将没有任何影响，
         * 因此历史记录仅受 resourceLimits 中设置的值的限制。
         * 如果达到限制，系统的行为取决于可靠性 reliable，
         * 如果其类型 besteffort 则旧值将被丢弃，
         * 但如果它是可靠的，则服务会阻止DataWriter，直到旧值传递给所有现有订阅者。
         * */
        keep_all_history
    };

    /*持久性qos选项*/
    enum qos_durability_kind
    {
        volatitle_durability,       // 忽略过去的样本，联接的 DataReader 接收匹配后生成的样本。
        transient_local_durability, // 当新的 DataReader 加入时，历史记录将填充过去的样本。
        transient_durability,       // 当新的 DataReader 加入时，其历史记录中会填充过去的样本，这些示样本储在持久存储上
        persistent_durability       // 所有样本都存储在永久存储中，以便它们可以在系统会话之后存活
    };

    typedef struct qos_ipconfig_
    {
        char wan_ip[QOS_IP_LEN];
        uint16_t port_locator;
        uint16_t port_listen;
        char whitelist_ips[QOS_WHITELIST_IP_NUM][QOS_IP_LEN];
    } ipconfig;

    typedef struct qos_disable_positive_acks_
    {
        bool enable;
        uint64_t keep_duration_ms;
    } qos_disable_positive_acksS;

    typedef struct qos_transfer_
    {
        enum qos_trans_protocol mode;
        uint64_t sendBufferSize;
        uint64_t receiveBufferSize;
        ipconfig *tcp_ip_Conf;

    } qos_transferS;

    typedef struct qos_data_sharing_
    {
        enum qos_datasharing mode;
        char shared_dir[QOS_DIR_LEN];
        uint32_t max_domains;
        char domain_ids[QOS_DATASHARE_DOMAIN_NUM][QOS_DOMAIN_LEN];
    } qos_data_sharingS;

    typedef struct qos_reliable_
    {
        enum qos_reliable_mode dw_mode;
        enum qos_reliable_mode dr_mode;

    } qos_reliableS;

    typedef struct qos_history_
    {
        enum qos_history_kind kind;
        int32_t depth;
    } qos_historyS;

    typedef struct qos_durability_
    {
        enum qos_durability_kind dw_kind;
        enum qos_durability_kind dr_kind;
    } qos_durabilityS;

    typedef struct qos_flowControllers_
    {
        /*控制吞吐量最大为多少kb/s,用在Topic,0表示无限制*/
        uint32_t max_kbperSecond;
    } qos_flowControllersS;

    typedef struct qos_reliable_writer_
    {   
        qos_disable_positive_acksS *disable_positive_acks;
    } qos_reliable_writerS;

    /// @brief qos结构体，后续可以添加更多字段，以支持更多qos策略
    typedef struct c_qos_
    {
        qos_transferS *transfer;
        qos_data_sharingS *data_sharing;
        qos_reliableS *reliable;
        qos_historyS *history;
        qos_durabilityS *durability;
        qos_flowControllersS *flowControllers;
        qos_reliable_writerS *reliable_writer;
    } c_qos;

    /// @brief 根据xml文件生成一个qos结构体
    /// #@param qos_ptr qos结构体指针
    /// @param xmlfile xml文件路径
    // bool genqosconf(c_qos *qos_ptr, const char *xmlfile);
    c_qos *genqosconf(const char *xmlfile);

    /// @brief 释放结构体
    bool freeQos(c_qos *qos_ptr);

    /// @brief 创建默认qos结构体
    c_qos *dds_qos_createDefaultQoS();

#ifdef __cplusplus
}
#endif

#endif