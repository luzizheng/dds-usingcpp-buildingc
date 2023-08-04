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
#define QOS_USERDATA_LEN 20


#pragma mark - qos选项类型枚举

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
    enum qos_reliable_kind
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
         * 如果其类型 besteffort 则旧值将被丢弃，服务将尝试保留实例的所有值，直到可以将其传递给所有现有Subscriber。
         * 如果选择此选项，则深度将没有任何影响，
         * 因此历史记录仅受 resourceLimits 中设置的值的限制。
         * 如果达到限制，系统的行为取决于可靠性 reliable，
         * 如果其类型 besteffort 则旧值将被丢弃，
         * 但如果它是可靠的，则服务会阻止DataWriter，直到旧值传递给所有现有订阅者。
         * 但如果它是可靠的,则服务会阻止DataWriter,直到旧值传递给所有现有订阅者.
         */
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

    enum qos_liveliness_kind
    {
        automatic_liveliness,
        manual_by_participant_liveliness,
        manual_by_topic_liveliness
    };

#pragma mark - qos 子结构体
    typedef struct qos_deadline_
    {
        float dw_period_ms;
        float dr_period_ms;
    }qos_deadlineS;

    typedef struct qos_lifespan_
    {
        uint32_t dw_duration_s;
        uint32_t dr_duration_s;
    }qos_lifespanS;

    typedef struct qos_liveliness_
    {
        enum qos_liveliness_kind kind;
        uint32_t lease_duration_s;
        uint32_t announcement_period_s;

    }qos_livelinessS;

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
        enum qos_reliable_kind dw_kind;
        enum qos_reliable_kind dr_kind;
        uint32_t max_blocking_time_dw_ms;
        uint32_t max_blocking_time_dr_ms;

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
        /*! 控制吞吐量最大为多少kb/s,用在Topic,0表示无限制*/
        uint32_t max_kbperSecond;
    } qos_flowControllersS;

    typedef struct qos_reliable_writer_
    {   
        qos_disable_positive_acksS *disable_positive_acks;
    } qos_reliable_writerS;

    typedef struct qos_resourcelimits_
    {
        /*! 
         * 控制 dw 或 dr 可以在与其关联的所有实例中管理的最大样本数。
         * 换句话说,它表示中间件可以为 dr 或 dw 存储的最大样本。
         * 值 0 表示无限资源
         */
        int32_t max_samples;

        /*! 
         * 控制 dw 或 dr 可以管理的最大样本数。
         * 值 0 表示无限资源
         */
        int32_t max_instances;

        /*! 
         * 控制 dw 或 dr 可以管理的实例中的最大样本数
         * 值 0 表示无限资源
         */
        int32_t max_samples_per_instance;

        /*! 
         * 说明初始化时将分配的样本数。
         * 值 0 表示无限资源
         */
        int32_t allocated_samples;

        /*! 
         * 说明将在池中分配的额外样本数,因此池中的最大样本数将max_samples 加 extra_samples。
         * 即使历史记录已满,这些额外的样本也会充当样本库。
         */
        int32_t extra_samples;
    }qos_resourcelimitsS;

#pragma mark - qos结构体
    /// @brief qos结构体，后续可以添加更多字段，以支持更多qos策略
    typedef struct c_qos_
    {
        /*!
         * 截止时间：
         * 在发布端,截止日期定义了应用程序预计提供新样本的最长时间。
         * 在订阅端,它定义了应接收
         * 新样本的最长期限。
         */
        qos_deadlineS *deadline;

        /*!
         * 生命周期:
         * dw写入的每个数据样本都有一个关联的过期时间,
         * 超过该过期时间,数据将从dw 和 dr 历史记录以及瞬态和持久性信息缓存中删除
         */
        qos_lifespanS *lifespan;

        /*!
         * 活性:
         * 控制服务使用的机制,以确保网络上的特定实体仍处于活动状态。
         * 有不同的设置可以区分"数据定期更新"的应用和"数据偶尔更改"的应用。
         * 它还允许根据活动机制应检测的故障类型自定义应用程序
         */
        qos_livelinessS *liveliness_dw;
        qos_livelinessS *liveliness_dr;

        /*!
         * 配置传输层协议和参数
         */
        qos_transferS *transfer;

        /*!
         * 配置dw和dr之间的数据共享传递通信
         */
        qos_data_sharingS *data_sharing;

        /*!
         * 可靠性
         */
        qos_reliableS *reliable;

        /*!
         * 写入器可靠性
         */
        qos_reliable_writerS *reliable_writer;

        /*!
         * 历史
         */
        qos_historyS *history;

        /*!
         * 持久性:
         * dw 可以在整个 Topic 中发送消息,即使网络上没有 DataReader 也是如此。
         * 此外,在写入某些数据后加入 Topic 的 dr 可能对访问该信息感兴趣。
         * 持久性 定义了在 dr 加入之前,系统对 Topic 上存在的那些样本的行为方式。
         * 系统的行为取决于 qos_durability_kind 的值
         */
        qos_durabilityS *durability;

        /*!
         * 配置参与者的流控制器
         */
        qos_flowControllersS *flowControllers;

        /*!
         * 用于DataWriter的资源限制策略
         */
        qos_resourcelimitsS *resourcelimits_dw;
        /*!
         * 用于DataReader的资源限制策略
         */
        qos_resourcelimitsS *resourcelimits_dr;

        /*!
         * 用于DomainParticipant的用户信息
         */
        char userdata_dp[QOS_USERDATA_LEN];
        /*!
         * 用于DataWriter的用户信息
         */
        char userdata_dw[QOS_USERDATA_LEN];
        /*!
         * 用于DataReader的用户信息
         */
        char userdata_dr[QOS_USERDATA_LEN];
    } c_qos;

    /// @brief 根据xml文件生成一个qos结构体
    /// #@param qos_ptr qos结构体指针
    /// @param xmlfile xml文件路径
    int genqosconf(c_qos**qos_,const char *xmlfile);

    /// @brief 释放结构体
    bool freeQos(c_qos *qos_ptr);

    /// @brief 创建默认qos结构体
    c_qos *dds_qos_createDefaultQoS();

#ifdef __cplusplus
}
#endif

#endif