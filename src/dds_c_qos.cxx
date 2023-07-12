#include "dds_c_qos.h"
#include <stdlib.h>
#include <string.h>

/// @brief 根据xml文件生成一个qos结构体
bool genqosconf(c_qos *qos_ptr, const char *xmlfile)
{
}

/// @brief 释放结构体
bool freeQos(c_qos *qos_ptr)
{

    if (qos_ptr != NULL)
    {
        if (qos_ptr->transfer != NULL)
        {
            if (qos_ptr->transfer->tcp_ip_Conf != NULL)
            {
                free(qos_ptr->transfer->tcp_ip_Conf);
                qos_ptr->transfer->tcp_ip_Conf = NULL;
            }
            free(qos_ptr->transfer);
            qos_ptr->transfer = NULL;
        }

        if (qos_ptr->disable_positive_acks != NULL)
        {
            free(qos_ptr->disable_positive_acks);
            qos_ptr->disable_positive_acks = NULL;
        }

        if (qos_ptr->qos_data_sharing != NULL)
        {
            free(qos_ptr->qos_data_sharing);
            qos_ptr->qos_data_sharing = NULL;
        }

        if (qos_ptr->qos_reliable != NULL)
        {
            free(qos_ptr->qos_reliable);
            qos_ptr->qos_reliable = NULL;
        }

        free(qos_ptr);
        qos_ptr = NULL;
    }
}

/// @brief 创建默认qos结构体
c_qos *dds_qos_createDefaultQoS()
{
    c_qos *qos =  (c_qos*)malloc(sizeof(c_qos));
    qos->transfer = (qos_transferS *)malloc(sizeof(qos_transferS));
    qos->transfer->tcp_ip_Conf = (ipconfig *)malloc(sizeof(ipconfig));
    qos->disable_positive_acks = (qos_disable_positive_acksS *)malloc(sizeof(qos_disable_positive_acksS));
    qos->qos_data_sharing = (qos_data_sharingS *)malloc(sizeof(qos_data_sharingS));
    qos->qos_reliable = (qos_reliableS *)malloc(sizeof(qos_reliableS));

    qos->transfer->mode = qos_trans_protocol::UDPv4;
    qos->transfer->sendBufferSize = 1024*1024*10;
    qos->transfer->receiveBufferSize = 1024*1024*10;

    qos->disable_positive_acks->enable = false;
    qos->disable_positive_acks->keep_duration_ms = 1000;

    qos->qos_data_sharing->mode = qos_datasharing::AUTO;
    strcpy(qos->qos_data_sharing->shared_dir,"");

    qos->qos_reliable->mode = qos_reliable_mode::besteffort;
    return qos;
}