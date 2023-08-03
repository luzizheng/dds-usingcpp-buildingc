#include "CSTopic.h"
#include "DDSNode.h"
#include <iostream>
#include "TestingDataPubSubTypes.h"
#include <thread>
#include "dds_utils.h"

using namespace std;

CSTopic::CSTopic()
{
    m_dw_listener.p_topic = this;
    m_dr_listener.p_topic = this;
}

CSTopic::~CSTopic()
{
    ReturnCode_t rcode;
    if (m_datawriter != nullptr)
    {
        rcode = m_node->m_publisher->delete_datawriter(m_datawriter);
        reportDDSCode(rcode, "datawriter deleted");
    }
    if (m_datareader != nullptr)
    {
        rcode = m_node->m_subscriber->delete_datareader(m_datareader);
        reportDDSCode(rcode, "datareader deleted");
    }
    if (m_topic_pub != nullptr)
    {
        rcode = m_node->m_participant->delete_topic(m_topic_pub);
        reportDDSCode(rcode, "topic_pub deleted");
    }

    if (m_topic_sub != m_topic_pub && m_topic_sub != nullptr)
    {
        rcode = m_node->m_participant->delete_topic(m_topic_sub);
        reportDDSCode(rcode, "topic_sub deleted");
    }

    cout << "CSTopic:" + m_topicName + " 释放" << endl;
}

// 配置 datawriter 和 datareader 的 qos
DDS_CODE CSTopic::configDataWriterReaderQoS(DataWriterQos *wqos, DataReaderQos *rqos, c_qos *qos_)
{
    if (wqos != NULL)
    {
        if (qos_->data_sharing->mode == qos_datasharing::AUTO)
        {
            wqos->data_sharing().automatic();
        }
        else if (qos_->data_sharing->mode == qos_datasharing::ON)
        {
            wqos->data_sharing().on(qos_->data_sharing->shared_dir);
        }else if (qos_->data_sharing->mode == qos_datasharing::OFF)
        {
            wqos->data_sharing().off();
        }

        if (qos_->reliable->dw_kind == besteffort)
        {
            wqos->reliability().kind = BEST_EFFORT_RELIABILITY_QOS;
        }
        else if (qos_->reliable->dw_kind == reliable)
        {
            wqos->reliability().kind = RELIABLE_RELIABILITY_QOS;
        }

        if (qos_->history->kind == keep_last_history)
        {
            wqos->history().kind = KEEP_LAST_HISTORY_QOS;
        }
        else if (qos_->history->kind == keep_all_history)
        {
            wqos->history().kind = KEEP_ALL_HISTORY_QOS;
        }
        wqos->history().depth = qos_->history->depth;
    
        if (qos_->durability->dw_kind == volatitle_durability)
        {
            wqos->durability().kind = VOLATILE_DURABILITY_QOS;
        }else if (qos_->durability->dw_kind == transient_local_durability)
        {
            wqos->durability().kind = TRANSIENT_LOCAL_DURABILITY_QOS;
        }else if (qos_->durability->dw_kind == transient_durability)
        {
            wqos->durability().kind = TRANSIENT_DURABILITY_QOS;
        }else if (qos_->durability->dw_kind == persistent_durability)
        {
            wqos->durability().kind = PERSISTENT_DURABILITY_QOS;
        }

        wqos->reliable_writer_qos().disable_positive_acks.enabled = qos_->reliable_writer->disable_positive_acks->enable;
        wqos->reliable_writer_qos().disable_positive_acks.duration = qos_->reliable_writer->disable_positive_acks->keep_duration_ms/0.001;
        
        // 流量限制(仅在dw上使用)
        if (qos_->flowControllers->max_kbperSecond > 0)
        {
            wqos->publish_mode().kind = ASYNCHRONOUS_PUBLISH_MODE;
            ThroughputControllerDescriptor slowPublisherThroughputController{qos_->flowControllers->max_kbperSecond*1000, 1000};
            wqos->throughput_controller() = slowPublisherThroughputController;
        }
        
        wqos->deadline().period.seconds = qos_->deadline->dw_period_ms/1000.0;
        wqos->lifespan().duration.seconds = qos_->deadline->dw_period_ms/1000.0;

        if (qos_->liveliness_dw->kind == automatic_liveliness)
        {
            wqos->liveliness().kind = AUTOMATIC_LIVELINESS_QOS;
        }else if (qos_->liveliness_dw->kind == manual_by_participant_liveliness)
        {
            wqos->liveliness().kind = MANUAL_BY_PARTICIPANT_LIVELINESS_QOS;
        }else if (qos_->liveliness_dw->kind == manual_by_topic_liveliness)
        {
            wqos->liveliness().kind = MANUAL_BY_TOPIC_LIVELINESS_QOS;
        }
        wqos->liveliness().lease_duration.seconds = qos_->liveliness_dw->lease_duration_s;
        wqos->liveliness().announcement_period.seconds = qos_->liveliness_dw->announcement_period_s;

        wqos->resource_limits().max_samples = qos_->resourcelimits_dw->max_samples;
        wqos->resource_limits().max_instances = qos_->resourcelimits_dw->max_instances;
        wqos->resource_limits().max_samples_per_instance = qos_->resourcelimits_dw->max_samples_per_instance;
        wqos->resource_limits().allocated_samples = qos_->resourcelimits_dw->allocated_samples;
        wqos->resource_limits().extra_samples = qos_->resourcelimits_dw->extra_samples;

    }

    if (rqos != NULL)
    {
        if (qos_->data_sharing->mode == qos_datasharing::AUTO)
        {
            wqos->data_sharing().automatic();
        }
        else if (qos_->data_sharing->mode == qos_datasharing::ON)
        {
            wqos->data_sharing().on(qos_->data_sharing->shared_dir);
        }else if (qos_->data_sharing->mode == qos_datasharing::OFF)
        {
            wqos->data_sharing().off();
        }

        if (qos_->reliable->dr_kind == besteffort)
        {
            rqos->reliability().kind = BEST_EFFORT_RELIABILITY_QOS;
        }
        else if (qos_->reliable->dr_kind == reliable)
        {
            rqos->reliability().kind = RELIABLE_RELIABILITY_QOS;
        }

        if (qos_->history->kind == keep_last_history)
        {
            rqos->history().kind = KEEP_LAST_HISTORY_QOS;
        }
        else if (qos_->history->kind == keep_all_history)
        {
            rqos->history().kind = KEEP_ALL_HISTORY_QOS;
        }
        rqos->history().depth = qos_->history->depth;

        if (qos_->durability->dr_kind == volatitle_durability)
        {
            rqos->durability().kind = VOLATILE_DURABILITY_QOS;
        }else if (qos_->durability->dr_kind == transient_local_durability)
        {
            rqos->durability().kind = TRANSIENT_LOCAL_DURABILITY_QOS;
        }else if (qos_->durability->dr_kind == transient_durability)
        {
            rqos->durability().kind = TRANSIENT_DURABILITY_QOS;
        }else if (qos_->durability->dr_kind == persistent_durability)
        {
            rqos->durability().kind = PERSISTENT_DURABILITY_QOS;
        }

        rqos->deadline().period.seconds = qos_->deadline->dr_period_ms/1000.0;
        rqos->lifespan().duration.seconds = qos_->deadline->dr_period_ms/1000.0;

        if (qos_->liveliness_dr->kind == automatic_liveliness)
        {
            rqos->liveliness().kind = AUTOMATIC_LIVELINESS_QOS;
        }else if (qos_->liveliness_dr->kind == manual_by_participant_liveliness)
        {
            rqos->liveliness().kind = MANUAL_BY_PARTICIPANT_LIVELINESS_QOS;
        }else if (qos_->liveliness_dr->kind == manual_by_topic_liveliness)
        {
            rqos->liveliness().kind = MANUAL_BY_TOPIC_LIVELINESS_QOS;
        }
        rqos->liveliness().lease_duration.seconds = qos_->liveliness_dr->lease_duration_s;
        rqos->liveliness().announcement_period.seconds = qos_->liveliness_dr->announcement_period_s;

        rqos->resource_limits().max_samples = qos_->resourcelimits_dr->max_samples;
        rqos->resource_limits().max_instances = qos_->resourcelimits_dr->max_instances;
        rqos->resource_limits().max_samples_per_instance = qos_->resourcelimits_dr->max_samples_per_instance;
        rqos->resource_limits().allocated_samples = qos_->resourcelimits_dr->allocated_samples;
        rqos->resource_limits().extra_samples = qos_->resourcelimits_dr->extra_samples;
    }

    return DDS_MSG_SUCCESS;
}

DDS_CODE CSTopic::init(DDSNode *__ddsNode, string __topicN, c_qos *qos_)
{
    m_qos = qos_;
    m_topicName = __topicN;
    m_node = __ddsNode;

    if (m_topicName.empty() || m_node == nullptr)
    {
        cerr << "初始化CSTopic失败:topic name 或 node为空";
        return -1;
    }

    // 创建TOPIC
    string dataTypeName = m_node->m_dataSupport.get_type_name();

    if (m_node->mkind == NODE_KIND::DEFAULT)
    {
        m_topic_pub = m_node->m_participant->create_topic(__topicN, dataTypeName, TOPIC_QOS_DEFAULT);
        // m_topic_sub = m_node->m_participant->create_topic(__topicN, dataTypeName, TOPIC_QOS_DEFAULT);
        m_topic_sub = m_topic_pub;
    }
    else if (m_node->mkind == NODE_KIND::SERVER)
    {
        // server
        m_topic_pub = m_node->m_participant->create_topic(__topicN + "_res", dataTypeName, TOPIC_QOS_DEFAULT);
        m_topic_sub = m_node->m_participant->create_topic(__topicN + "_req", dataTypeName, TOPIC_QOS_DEFAULT);
    }
    else if (m_node->mkind == NODE_KIND::CLIENT)
    {
        // client
        m_topic_pub = m_node->m_participant->create_topic(__topicN + "_req", dataTypeName, TOPIC_QOS_DEFAULT);
        m_topic_sub = m_node->m_participant->create_topic(__topicN + "_res", dataTypeName, TOPIC_QOS_DEFAULT);
    }

    if (m_topic_pub == nullptr || m_topic_sub == nullptr)
    {
        cerr << "初始化CSTopic失败:pub/sub创建失败";
        return -1;
    }

    // 创建writer
    DataWriterQos wqos;
    configDataWriterReaderQoS(&wqos,NULL,qos_);
    m_datawriter = m_node->m_publisher->create_datawriter(m_topic_pub, wqos, &m_dw_listener);
    if (m_datawriter == nullptr)
    {
        cerr << "初始化CSTopic失败:datawriter创建失败";
        return -1;
    }

    // 创建 reader
    DataReaderQos rqos;
    configDataWriterReaderQoS(NULL,&rqos,qos_);
    m_datareader = m_node->m_subscriber->create_datareader(m_topic_sub, rqos, &m_dr_listener);

    if (m_datareader == nullptr)
    {
        cerr << "初始化CSTopic失败:datareader创建失败";
        return -1;
    }

    return 0;
}

void CSTopic::sendDataThread__(TestingData *data__, int16_t waitTilConnect__)
{
    lock_guard<mutex> lock(sendDataThread_mtx);
    if (waitTilConnect__ > 0)
    {
        std::cout << "等待连接中..." << std::endl;
        while (1)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(250));
            if (m_dw_listener.m_matched > 0 || (m_node->getStatus() == false))
            {
                break;
            }
        }
    }

    data__->timestamp(get_milliseconds_timestamp());
    InstanceHandle_t handle;
    ReturnCode_t return_code = m_datawriter->write(data__, handle);
    std::string sucmsg = "往(" + m_topicName + ")发送数据成功";
    reportDDSCode(return_code, sucmsg);
}

DDS_CODE CSTopic::sendData(TestingData *__data, bool __anotherThread, bool _waitTilConnect)
{
    if (__anotherThread)
    {
        thread th(&CSTopic::sendDataThread__, this, __data, _waitTilConnect ? 1 : 0);
        th.join();
        return 0;
    }
    else
    {
        if (_waitTilConnect)
        {
            std::cout << "等待连接中..." << std::endl;
            while (1)
            {
                std::this_thread::sleep_for(std::chrono::milliseconds(250));
                if (m_dw_listener.m_matched > 0 || (m_node->getStatus() == false))
                {
                    break;
                }
            }
        }

        InstanceHandle_t handle;
        ReturnCode_t return_code = m_datawriter->write(__data, handle);
        std::string sucmsg = "往(" + m_topicName + ")发送数据成功";
        reportDDSCode(return_code, sucmsg);
        return 0;
    }
}

/// @brief 注册函数回调
DDS_CODE CSTopic::setRecvDataCallback(dds_recvcallback callback_)
{
    m_callback = callback_;
}

/// @brief publisher连接
void CSTopic::DWListener::on_publication_matched(DataWriter *dw,
                                                 const PublicationMatchedStatus &info)
{
    m_matched = info.total_count;
    p_topic->m_node->m_pub_matchedDidChanged(p_topic, m_matched);
}

/// @brief subscriber连接
void CSTopic::DRListener::on_subscription_matched(DataReader *reader, const SubscriptionMatchedStatus &info)
{
    m_matched = info.total_count;
    p_topic->m_node->m_sub_matchedDidChanged(p_topic, m_matched);
}

// reader 接受到数据
void CSTopic::DRListener::on_data_available(
    DataReader *reader)
{

    if (listener_enable == false)
    {
        return;
    }
    TestingData data;
    SampleInfo info;

    if (reader->take_next_sample(&data, &info) == ReturnCode_t::RETCODE_OK)
    {
        if (info.valid_data)
        {
            p_topic->m_node->m_data_received(p_topic, &data);

            // callback
            if (p_topic->m_callback != nullptr)
            {
                void *pdata = (void *)data.payload().data();
                uint32_t data_len = (uint32_t)(data.payload().size() * sizeof(char));
                p_topic->m_callback(pdata, data_len);
            }
        }
    }
}
