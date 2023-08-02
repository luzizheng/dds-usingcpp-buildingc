#include "ddsqos.h"
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "tinyxml2/tinyxml2.h"

using namespace tinyxml2;
using namespace std;

// /// @brief 根据xml文件生成一个qos结构体
// bool genqosconf(c_qos *qos_ptr, const char *xmlfile)
// {
//     XMLDocument doc;
//     XMLError err = doc.LoadFile(xmlfile); // 相对与执行文件的路径
//     if (err != XML_SUCCESS)
//     {
//         cout << "xml文件加载失败!" << endl;
//         c_qos *qos = dds_qos_createDefaultQoS();
//         qos_ptr = qos;
//     }



//     return true;
// }
c_qos *genqosconf(const char *xmlfile)
{
    XMLDocument doc;
    XMLError err = doc.LoadFile(xmlfile); // 相对与执行文件的路径
    if (err != XML_SUCCESS)
    {
        cout << "xml文件加载失败!" << endl;
        c_qos *qos = dds_qos_createDefaultQoS();
        return qos;
    }else {
        


    }



    return NULL;
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

        if (qos_ptr->reliable_writer->disable_positive_acks != NULL)
        {
            free(qos_ptr->reliable_writer->disable_positive_acks);
            qos_ptr->reliable_writer->disable_positive_acks = NULL;
        }

        if (qos_ptr->reliable_writer != NULL)
        {
            free(qos_ptr->reliable_writer);
            qos_ptr->reliable_writer = NULL;
        }

        if (qos_ptr->data_sharing != NULL)
        {
            free(qos_ptr->data_sharing);
            qos_ptr->data_sharing = NULL;
        }

        if (qos_ptr->reliable != NULL)
        {
            free(qos_ptr->reliable);
            qos_ptr->reliable = NULL;
        }

        if (qos_ptr->history != NULL)
        {
            free(qos_ptr->history);
            qos_ptr->history = NULL;
        }

        if (qos_ptr->durability != NULL)
        {
            free(qos_ptr->durability);
            qos_ptr->durability = NULL;
        }
        if (qos_ptr->flowControllers != NULL)
        {
            free(qos_ptr->flowControllers);
            qos_ptr->flowControllers = NULL;
        }
        free(qos_ptr);
        qos_ptr = NULL;
    }
    return true;
}

/// @brief 创建默认qos结构体
c_qos *dds_qos_createDefaultQoS()
{
    // malloc结构体
    c_qos *qos =  (c_qos*)malloc(sizeof(c_qos));
    qos->transfer = (qos_transferS *)malloc(sizeof(qos_transferS));
    qos->transfer->tcp_ip_Conf = (ipconfig *)malloc(sizeof(ipconfig));
    qos->reliable_writer = (qos_reliable_writerS *)malloc(sizeof(qos_reliable_writerS));
    qos->reliable_writer->disable_positive_acks = (qos_disable_positive_acksS *)malloc(sizeof(qos_disable_positive_acksS));
    qos->data_sharing = (qos_data_sharingS *)malloc(sizeof(qos_data_sharingS));
    qos->reliable = (qos_reliableS *)malloc(sizeof(qos_reliableS));
    qos->history = (qos_historyS *)malloc(sizeof(qos_historyS));
    qos->durability = (qos_durabilityS *)malloc(sizeof(qos_durabilityS));
    qos->flowControllers = (qos_flowControllersS *)malloc(sizeof(qos_flowControllersS));

    // 默认值设置
    qos->transfer->mode = qos_trans_protocol::UDPv4;
    qos->transfer->sendBufferSize = 1024*1024*10;
    qos->transfer->receiveBufferSize = 1024*1024*10;

    qos->reliable_writer->disable_positive_acks->enable = false;
    qos->reliable_writer->disable_positive_acks->keep_duration_ms = 1000;
    
    qos->data_sharing->mode = qos_datasharing::AUTO;
    strcpy(qos->data_sharing->shared_dir,"");

    qos->reliable->dw_mode = qos_reliable_mode::reliable;
    qos->reliable->dr_mode = qos_reliable_mode::besteffort;

    qos->history->kind = keep_last_history;
    qos->history->depth = 1;

    qos->durability->dw_kind = transient_local_durability;
    qos->durability->dr_kind = volatitle_durability;

    


    return qos;
}