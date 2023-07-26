#include "bydtest.h"
#include <ddsc.h>
#include <fastdds/dds/domain/DomainParticipantFactory.hpp>
#include <fastdds/dds/domain/DomainParticipant.hpp>

void dds2recvData(void *data,uint32_t datalen)
{
    char *str = (char *)malloc(datalen + 1);
    memcpy(str, data, datalen);
    str[datalen] = '\0';
    printf("dds2接收到数据:%s\n", str);
    free(str);
}
void dds3recvData(void *data,uint32_t datalen)
{
    char *str = (char *)malloc(datalen + 1);
    memcpy(str, data, datalen);
    str[datalen] = '\0';
    printf("dds3接收到数据:%s\n", str);
    free(str);
}
void dds4recvData(void *data,uint32_t datalen)
{
    char *str = (char *)malloc(datalen + 1);
    memcpy(str, data, datalen);
    str[datalen] = '\0';
    printf("dds4接收到数据:%s\n", str);
    free(str);
}

int test001()
{

    PT(测试001: 测试qos配置传输模式:);

    // 1
    c_qos *qos1 = dds_qos_createDefaultQoS();
    qos1->transfer->mode = SHM;
    dds_fd dds1 = dds_create(qos1,DDS_DEFAULT,"dds1");
    if (dds1 < 0)
    {
        PT(DDS1初始化失败);
        return -1;
    }
    if (dds_bindTopic(dds1,"test001") != DDS_MSG_SUCCESS)
    {
        PT(Topic绑定失败);
        return -1;
    }


    // 2
    c_qos *qos2 = dds_qos_createDefaultQoS();
    qos2->transfer->mode = SHM;
    dds_fd dds2 = dds_create(qos2,DDS_DEFAULT,"dds2");
    if (dds2 < 0)
    {
        PT(DDS2初始化失败);
        return -1;
    }
    if (dds_bindTopic(dds2,"test001") != DDS_MSG_SUCCESS)
    {
        PT(Topic绑定失败);
        return -1;
    }
    dds_revcDataCallback(dds2,"test001",dds2recvData);


    // 3
    c_qos *qos3 = dds_qos_createDefaultQoS();
    qos3->transfer->mode = UDPv4;
    dds_fd dds3 = dds_create(qos3,DDS_DEFAULT,"dds3");
    if (dds3 < 0)
    {
        PT(DDS3初始化失败);
        return -1;
    }









    return dds_close(dds1);

    
}