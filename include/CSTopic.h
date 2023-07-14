#ifndef _DDSCSTOPIC_H_
#define _DDSCSTOPIC_H_

#include <string>
#include <stdint.h>
#include <fastdds/dds/subscriber/DataReader.hpp>
#include <fastdds/dds/publisher/DataWriter.hpp>
#include <fastdds/dds/publisher/DataWriterListener.hpp>
#include <fastdds/dds/subscriber/DataReaderListener.hpp>
#include <fastdds/dds/topic/Topic.hpp>
#include <fastdds/dds/publisher/Publisher.hpp>
#include <fastdds/dds/subscriber/Subscriber.hpp>
#include <fastdds/dds/domain/DomainParticipant.hpp>
#include "DDSNodeConst.h"
#include <string>
#include <mutex>

using namespace std;
using namespace eprosima::fastdds::dds;
using namespace eprosima::fastdds::rtps;
using namespace eprosima::fastrtps::rtps;

class CSTopic;
class TestingData;
class DDSNode;

class CSTopic
{
private:
    DDSNode *m_node;
    void sendDataThread__(TestingData *data__,int16_t waitTilConnect__);
    std::mutex sendDataThread_mtx;
    dds_recvcallback m_callback;
public:
    string m_topicName;
    DataWriter *m_datawriter;
    DataReader *m_datareader;
    Topic *m_topic_pub;
    Topic *m_topic_sub;
    

    CSTopic();
    ~CSTopic();

    /// @brief 初始化
    /// @param ddsNode 跟随的dds节点
    /// @param topicName topic名称
    DDS_CODE init(DDSNode *__ddsNode, string __topicN);

    /// @brief 往topic写数据
    /// @param __data 数据指针
    /// @param __anotherThread 是否需要另外开辟一条线程
    /// @param _waitTilConnect 阻塞等待连接
    DDS_CODE sendData(TestingData *__data,bool __anotherThread,bool _waitTilConnect);

    /// @brief 注册函数回调
    DDS_CODE setRecvDataCallback(dds_recvcallback callback_);

    class DWListener : public DataWriterListener
    {
    public:
        DWListener() : m_matched(0)
        {
        }

        ~DWListener() override
        {
        }

        CSTopic *p_topic;
        int32_t m_matched;

        void on_publication_matched(DataWriter *writer, const PublicationMatchedStatus &info) override;
    } m_dw_listener;

    class DRListener : public DataReaderListener
    {
    public:
        DRListener() : listener_enable(false), m_matched(0)
        {
        }

        ~DRListener() override
        {
        }

        /// @brief 是否启用，默认false，当外部需要主动read数据时，这个不能启用，否则就被listener取掉数据了
        bool listener_enable;

        CSTopic *p_topic;
        int32_t m_matched;
        void on_data_available(DataReader *reader) override;
        void on_subscription_matched(DataReader *reader, const SubscriptionMatchedStatus &info) override;
    } m_dr_listener;
};

#endif