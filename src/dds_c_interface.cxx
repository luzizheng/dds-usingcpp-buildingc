#include "dds_c_interface.h"
#include "DDSNode.h"
#include <map>
#include "TestingDataPubSubTypes.h"

static std::map<dds_fd, DDSNode *> node_list;

/// @brief 初始化dds
/// @param qos_ qos配置(使用默认的话传NULL)
/// @param side_ 节点类型
/// @param name_ 名称
/// @return 返回dds描述符
dds_fd dds_create(c_qos *qos_, DDS_SIDE side_, const char *name_)
{
    if (qos_ == NULL)
    {
        qos_ = dds_qos_createDefaultQoS();
    }
    if (name_ == NULL)
    {
        name_ = "def_node";
    }
    NODE_KIND nkind;
    if (side_ == DDS_SIDE::DDS_DEFAULT)
    {
        nkind = NODE_KIND::DEFAULT;
    }
    else if (side_ == DDS_SIDE::DDS_CLIENT)
    {
        nkind = NODE_KIND::CLIENT;
    }
    else if (side_ == DDS_SIDE::DDS_SERVER)
    {
        nkind = NODE_KIND::SERVER;
    }
    DDSNode *node = new DDSNode();
    node->init(nkind, *qos_, name_);
    // node->run();
    dds_fd dds = 0;
    while (node_list[dds] != nullptr)
    {
        dds++;
    }
    node_list[dds] = node;
    return dds;
}

/// @brief 关闭dds
/// @param fd_ dds描述符
/// @return 成功返回0
DDS_MSGCODE dds_close(const dds_fd fd_)
{
    DDSNode *node = node_list[fd_];
    if (node != nullptr)
    {
        node->shutdown();
        std::map<dds_fd, DDSNode *>::iterator it;
        it = node_list.find(fd_);
        int res = node_list.erase(fd_);
        delete node;
        node = nullptr;
        if (res == 1)
        {
            return DDS_MSG_SUCCESS;
        }
        else
        {
            return DDS_MSG_OTHERERR;
        }
    }
    return DDS_MSG_OTHERERR;
}

/// @brief 更改Qos配置
/// @param fd_ dds描述符
/// @param qos_ qos配置 (使用默认的话传NULL)
/// @return 成功返回0
DDS_MSGCODE dds_setQos(const dds_fd fd_, c_qos *qos_)
{
}

/// @brief 绑定topic
/// @param fd_ dds描述符
/// @param topicN topic名称
/// @return 成功返回0
DDS_MSGCODE dds_bindTopic(const dds_fd fd_, const char *topicN)
{
    DDSNode *node = node_list[fd_];
    if (node == nullptr)
    {
        printf("can't find dds node");
        return DDS_MSG_NODEUNEXSIT;
    }
    if (topicN == NULL)
    {
        printf("topic name is null");
        return DDS_MSG_TOPICNAMEERR;
    }
    return node->pushTopic(topicN);
}

/// @brief 注销绑定topic
/// @param fd_
/// @param topicN
/// @return
DDS_MSGCODE dds_unbindTopic(const dds_fd fd_, const char *topicN)
{
    DDSNode *node = node_list[fd_];
    if (node == nullptr)
    {
        printf("can't find dds node");
        return DDS_MSG_NODEUNEXSIT;
    }
    if (topicN == NULL)
    {
        printf("topic name is null");
        return DDS_MSG_TOPICNAMEERR;
    }
    std::string topic_name = topicN;
    return node->deleteTopic(topic_name);
}

DDS_MSGCODE dds_send(const dds_fd fd_, const char *topicN, void *data, uint32_t data_len, bool waituntilconnect)
{
    DDSNode *node = node_list[fd_];
    if (node == nullptr)
    {
        printf("can't find dds node");
        return DDS_MSG_NODEUNEXSIT;
    }
    if (topicN == NULL)
    {
        printf("topic name is null");
        return DDS_MSG_TOPICNAMEERR;
    }

    if (data == NULL || data_len < 1)
    {
        printf("data error");
        return DDS_MSG_DATAERR;
    }

    TestingData *ddsData = new TestingData();
    ddsData->payload().reserve(data_len);
    char *pData = (char *)data;
    for (size_t i = 0; i < data_len; i++)
    {
        char ch = *(pData + i);
        ddsData->payload().push_back(ch);
    }
    std::string topic_name = topicN;
    return node->sendData(topic_name, ddsData, waituntilconnect);
}

DDS_MSGCODE dds_read(const dds_fd fd_, const char *topicN, uint32_t timeout_s, void **data_pp, uint32_t *data_len)
{
    DDSNode *node = node_list[fd_];
    if (node == nullptr)
    {
        printf("can't find dds node");
        return DDS_MSG_NODEUNEXSIT;
    }
    if (topicN == NULL)
    {
        printf("topic name is null");
        return DDS_MSG_TOPICNAMEERR;
    }
    TestingData tdata;
    std::string topic_name = topicN;
    DDS_MSGCODE code = node->readData(topic_name, timeout_s, &tdata);

    if (code == DDS_MSG_SUCCESS)
    {
        // std::cout << "reading sueccessed : " << code << std::endl;
        *data_len = (uint32_t)(tdata.payload().size() *sizeof(char));
        char * message = (char *)malloc((*data_len)+1);
        memcpy(message,tdata.payload().data(),*data_len);
        message[*data_len] = '\0';
        *data_pp = message;
        return DDS_MSG_SUCCESS;
    }
    else
    {
        return code;
    }
}

/// @brief 注册接收数据的回调函数，非阻塞接收数据
/// @param fd_ dds描述符
/// @param topicN topic名称
/// @param callback 回调函数
DDS_MSGCODE dds_revcDataCallback(const dds_fd fd_, const char *topicN, dds_recvcallback callback)
{
    DDSNode *node = node_list[fd_];
    if (node == nullptr)
    {
        printf("can't find dds node");
        return DDS_MSG_NODEUNEXSIT;
    }
    if (topicN == NULL)
    {
        printf("topic name is null");
        return DDS_MSG_TOPICNAMEERR;
    }
    std::string topic_name = topicN;
    return node->setRecvDataCallback(topic_name, callback);
}