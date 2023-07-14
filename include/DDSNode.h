#ifndef _DDS_NODE_H_
#define _DDS_NODE_H_

#include "DDSNodeConst.h"
#include <vector>
#include <string>
#include <stddef.h>

#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/subscriber/Subscriber.hpp>
#include <fastdds/dds/domain/DomainParticipant.hpp>
#include "dds_c_qos.h"

using namespace std;
using namespace eprosima::fastdds::dds;
using namespace eprosima::fastdds::rtps;
using namespace eprosima::fastrtps::rtps;

class CSTopic;
class TestingData;

class DDSNode
{
private:
    bool m_status = true;
    virtual void runThread();

public:
    NODE_KIND mkind;
    vector<CSTopic *> m_topic_li;
    c_qos qos_config;
    string m_nodeName;

    TypeSupport m_dataSupport;
    DomainParticipant *m_participant;
    Publisher *m_publisher;
    Subscriber *m_subscriber;

    DDSNode(/* args */);
    ~DDSNode();

    /// @brief 初始化
    DDS_CODE init(const NODE_KIND &__kind, c_qos &qos_, string __name);

    /// @brief 添加新的topic
    /// @param __topicN topic名称
    DDS_CODE pushTopic(string __topicN);

    DDS_CODE deleteTopic(string __topicN);

    /// @brief 发送数据
    /// @param __topicN 向哪个topic发送
    /// @param _data 数据
    /// @param __waitTilConnect 阻塞等待连接成功
    DDS_CODE sendData(string __topicN, TestingData *_data, bool _waitTilConnect);
    DDS_CODE sendDataToAllTopic(TestingData *_data, bool _waitTilConnect);
    DDS_CODE setRecvDataCallback(string __topicN, dds_recvcallback callback_);
    /// @brief 读取数据，需要阻塞
    /// @return 读取到返回0，不读取到返回其他
    DDS_CODE readData(string __topicN, uint32_t _timeout_s, TestingData *_data);

    void run();
    bool getStatus();
    void startStatus();
    void shutdown();

    /// @brief 生成数据
    /// @param data_size 数据包大小
    /// @param _withMeta 带上时间戳等元数据
    TestingData *generateDataWithSize(size_t data_size, bool _withMeta);

    virtual void m_pub_matchedDidChanged(CSTopic *__topic, int32_t _currentMatched);
    virtual void m_sub_matchedDidChanged(CSTopic *__topic, int32_t _currentMatched);
    virtual void m_data_received(CSTopic *__topic, TestingData *__data);
};

#endif