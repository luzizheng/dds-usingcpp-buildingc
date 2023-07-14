#include "DDSNode.h"
#include "TestingDataPubSubTypes.h"
#include <fastdds/rtps/transport/shared_mem/SharedMemTransportDescriptor.h>
#include <fastdds/rtps/transport/TCPv4TransportDescriptor.h>
#include <fastrtps/utils/IPLocator.h>
#include <assert.h>
#include "CSTopic.h"
#include <thread>
#include <signal.h>
#include "dds_utils.h"

DDSNode::DDSNode(/* args */) : m_dataSupport(new TestingDataPubSubType()), m_participant(nullptr), m_publisher(nullptr), m_subscriber(nullptr)
{
}

DDSNode::~DDSNode()
{
    for (vector<CSTopic *>::iterator it = m_topic_li.begin(); it != m_topic_li.end(); ++it)
    {
        CSTopic *tp = *it;
        if (tp != nullptr)
        {
            delete tp;
            tp = nullptr;
        }
    }
    // m_topic_li.clear();

    ReturnCode_t rcode;

    if (m_publisher != nullptr)
    {
        rcode = m_participant->delete_publisher(m_publisher);
        // REPORTDDSCODE(rcode, "publisher释放");
    }
    if (m_subscriber != nullptr)
    {
        rcode = m_participant->delete_subscriber(m_subscriber);
        // REPORTDDSCODE(rcode, "subscriber释放");
    }

    if (m_participant != nullptr)
    {
        rcode = DomainParticipantFactory::get_instance()->delete_participant(m_participant);
        // REPORTDDSCODE(rcode, "participant释放");
    }

    cout << "node:" + m_nodeName + " 释放" << endl;
}

/// @brief 初始化
DDS_CODE DDSNode::init(const NODE_KIND &__kind, c_qos &qos_, string __name)
{
    m_status = true;
    mkind = __kind;
    qos_config = qos_;
    if (__name.empty())
    {
        __name = "testNode";
    }
    m_nodeName = __name;
    // CREATE THE PARTICIPANT
    DomainParticipantQos pqos;
    pqos.wire_protocol().builtin.discovery_config.use_SIMPLE_EndpointDiscoveryProtocol = true;
    pqos.wire_protocol().builtin.discovery_config.discoveryProtocol =
        eprosima::fastrtps::rtps::DiscoveryProtocol::SIMPLE;
    pqos.wire_protocol().builtin.discovery_config.m_simpleEDP.use_PublicationReaderANDSubscriptionWriter = true;
    pqos.wire_protocol().builtin.discovery_config.m_simpleEDP.use_PublicationWriterANDSubscriptionReader = true;
    pqos.wire_protocol().builtin.discovery_config.leaseDuration = eprosima::fastrtps::c_TimeInfinite;
    pqos.name(m_nodeName);

#if 0
    if (m_side == DDS_NODE_SIDE::SERVER)
    {
        m_config_qos.init("../ServerClient/qos_config/qos_doc_ser.xml");
    }
    else
    {
        m_config_qos.init("../ServerClient/qos_config/qos_doc_cli.xml");
    }
#endif
    if (qos_config.transfer->mode == qos_trans_protocol::SHM)
    {
        // Explicit configuration of SharedMem transport
        pqos.transport().use_builtin_transports = false;
        auto sm_transport = std::make_shared<SharedMemTransportDescriptor>();
        sm_transport->segment_size(SHM_SEG_SIZE);
        pqos.transport().user_transports.push_back(sm_transport);
        std::cout << "内存共享传输" << std::endl;
    }
    else if (qos_config.transfer->mode == qos_trans_protocol::UDPv4)
    {
        pqos.transport().use_builtin_transports = true;
        std::cout << "UDPv4传输" << std::endl;
    }
    else if (qos_config.transfer->mode == qos_trans_protocol::TCPv4)
    {
        // 创建participant
        std::string wanip = qos_config.transfer->tcp_ip_Conf->wan_ip;
        uint16_t port_locator = qos_config.transfer->tcp_ip_Conf->port_locator;
        uint16_t port_listen = qos_config.transfer->tcp_ip_Conf->port_listen;

        pqos.transport().use_builtin_transports = false;
        std::shared_ptr<TCPv4TransportDescriptor> descriptor = std::make_shared<TCPv4TransportDescriptor>();
        std::cout << "TCPv4传输" << std::endl;
        std::cout << "ip : " << wanip << std::endl;
        std::cout << "publisher listen port : " << port_listen << std::endl;
        std::cout << "subscriber locator port : " << port_locator << std::endl;

        int32_t kind = LOCATOR_KIND_TCPv4;
        Locator initial_peer_locator;
        initial_peer_locator.kind = kind;

        IPLocator::setIPv4(initial_peer_locator, wanip);
        initial_peer_locator.port = port_locator;

        pqos.wire_protocol().builtin.initialPeersList.push_back(initial_peer_locator);
#if 0
        for (std::string ip : m_config_qos.transfer.tcp_ip_Conf.whitelist_ips)
        {
            // std::cout << "加入白名单IP:" << ip << std::endl;
            descriptor->interfaceWhiteList.push_back(ip);
        }
#endif
        descriptor->sendBufferSize = 0;
        descriptor->receiveBufferSize = 0;
        descriptor->add_listener_port(port_listen);
        pqos.transport().user_transports.push_back(descriptor);
    }

    m_participant = DomainParticipantFactory::get_instance()->create_participant(0, pqos);

    // 注册types
    m_dataSupport.register_type(m_participant);

    // 创建publiser
    m_publisher = m_participant->create_publisher(PUBLISHER_QOS_DEFAULT);
    if (m_publisher == nullptr)
    {
        return -1;
    }

    // 创建 应答的 subscriber
    m_subscriber = m_participant->create_subscriber(SUBSCRIBER_QOS_DEFAULT);

    if (m_subscriber == nullptr)
    {
        return -1;
    }
    return 0;
}

/// @brief 添加新的topic
/// @param __topicN topic名称
DDS_CODE DDSNode::pushTopic(string __topicN)
{
    bool flag = false;
    for (int i = 0; i < m_topic_li.size(); i++)
    {
        CSTopic *item = m_topic_li[i];
        if (item != nullptr)
        {
            if (item->m_topicName == __topicN)
            {
                flag = true;
                break;
            }
        }
    }
    if (flag)
    {
        cerr << "重复topic" << endl;
        return -1;
    }
    CSTopic *topic = new CSTopic();

    uint16_t result = topic->init(this, __topicN);
    // topic->startListen();
    if (result != 0)
    {
        cerr << "topic初始化失败" << endl;
        return -1;
    }

    m_topic_li.push_back(topic);
    cout << "监听topic:" << __topicN << endl;
    return 0;
}

DDS_CODE DDSNode::deleteTopic(string __topicN)
{
    for (vector<CSTopic *>::iterator iter = m_topic_li.begin(); iter != m_topic_li.end(); iter++)
    {
        CSTopic *topic = *iter;
        if (topic->m_topicName == __topicN)
        {
            delete topic;
            topic = nullptr;
            m_topic_li.erase(iter);
            break;
        }
    }
    return 0;
}

DDS_CODE DDSNode::sendData(string __topicN, TestingData *_data, bool _waitTilConnect)
{
    CSTopic *target = nullptr;
    for (int i = 0; i < m_topic_li.size(); i++)
    {
        CSTopic *item = m_topic_li[i];
        if (item != nullptr)
        {
            if (item->m_topicName == __topicN)
            {
                target = item;
                break;
            }
        }
    }
    if (target == nullptr)
    {
        cout << "找不到topic" << endl;
        return -1;
    }
    return target->sendData(_data, false, _waitTilConnect);
}

DDS_CODE DDSNode::sendDataToAllTopic(TestingData *_data, bool _waitTilConnect)
{
    for (int i = 0; i < m_topic_li.size(); i++)
    {
        CSTopic *item = m_topic_li[i];
        if (item != nullptr)
        {
            item->sendData(_data, true, _waitTilConnect);
        }
    }
    return 0;
}
void DDSNode::m_pub_matchedDidChanged(CSTopic *__topic, int32_t _currentMatched)
{
}
void DDSNode::m_sub_matchedDidChanged(CSTopic *__topic, int32_t _currentMatched)
{
}
void DDSNode::m_data_received(CSTopic *__topic, TestingData *__data)
{
}

void DDSNode::runThread()
{
    string s;
    string side_str;
    if (mkind == NODE_KIND::DEFAULT)
    {
        side_str = "DDS节点";
    }
    else if (mkind == NODE_KIND::CLIENT)
    {
        side_str = "DDS客户端";
    }
    else if (mkind == NODE_KIND::SERVER)
    {
        side_str = "DDS服务端";
    }
    do
    {
        cout << side_str << ":" << m_nodeName << " 运行中...按q退出" << endl;
        getline(cin, s);

        if (s != "q")
        {
            TestingData tmp;
            tmp.message(s);
            this->sendDataToAllTopic(&tmp, false);
        }

    } while (s != "q" && m_status);
}

void DDSNode::run()
{
    m_status = true;
    thread thread(&DDSNode::runThread, this);
    thread.join();
}

DDS_CODE DDSNode::setRecvDataCallback(string __topicN, dds_recvcallback callback_)
{
    CSTopic *target = nullptr;
    for (int i = 0; i < m_topic_li.size(); i++)
    {
        CSTopic *item = m_topic_li[i];
        if (item != nullptr)
        {
            if (item->m_topicName == __topicN)
            {
                target = item;
                break;
            }
        }
    }
    if (target == nullptr)
    {
        cout << "找不到topic" << endl;
        return -1;
    }
    target->m_dr_listener.listener_enable = true;
    target->setRecvDataCallback(callback_);
    return 0;
}

DDS_CODE DDSNode::readData(string __topicN, uint32_t _timeout_s, TestingData *_data)
{
    CSTopic *target = nullptr;
    for (int i = 0; i < m_topic_li.size(); i++)
    {
        CSTopic *item = m_topic_li[i];
        if (item != nullptr)
        {
            if (item->m_topicName == __topicN)
            {
                target = item;
                break;
            }
        }
    }
    if (target == nullptr)
    {
        cout << "找不到topic" << endl;
        return -1;
    }
    target->m_dr_listener.listener_enable = false;

    SampleInfo info;
    eprosima::fastrtps::Duration_t timeout(_timeout_s, 0); // 超时设置

    // 当前线程置于轮询，读取数据
    std::cout << "reading..." << std::endl;
    if (target->m_datareader->wait_for_unread_message(timeout))
    {
        if (ReturnCode_t::RETCODE_OK == target->m_datareader->take_next_sample(_data, &info))
        {
            if (info.valid_data)
            {
                std::cout << "读取数据成功" << std::endl;
                return DDS_MSG_SUCCESS;
            }
            else
            {
                std::cout << "data reader已销毁,结束轮询" << std::endl;
            }
        }
    }
    else
    {
        std::cout << "轮询超时，没有数据" << std::endl;
    }

    return DDS_MSG_OTHERERR;

    // ReturnCode_t rc = target->m_datareader->take_next_sample(_data,&info);
    // reportDDSCode(rc,"读取成功");
}

bool DDSNode::getStatus()
{
    return m_status;
}

void DDSNode::startStatus()
{
    m_status = true;
}

void DDSNode::shutdown()
{
    m_status = false;
}

TestingData *DDSNode::generateDataWithSize(size_t data_size, bool _withMeta)
{
    TestingData *data = new TestingData();
    data->payload().reserve(data_size);
    for (size_t i = 0; i < data_size; i++)
    {
        data->payload().push_back('a');
    }
    if (_withMeta)
    {
        data->timestamp(get_milliseconds_timestamp());
    }
    return data;
}