#include "ddsqos.h"
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "tinyxml2/tinyxml2.h"

using namespace tinyxml2;
using namespace std;


int genqosconf(c_qos**qos_,const char *xmlfile)
{
    XMLDocument doc;
    XMLError err = doc.LoadFile(xmlfile); // 相对与执行文件的路径
    
    if (err != XML_SUCCESS)
    {
        cout << "xml文件加载失败!" << endl;
        c_qos *qos = dds_qos_createDefaultQoS();

        return -1;
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

        if (qos_ptr->deadline != NULL)
        {
            free(qos_ptr->deadline);
            qos_ptr->deadline = NULL;
        }

        if (qos_ptr->lifespan != NULL)
        {
            free(qos_ptr->lifespan);
            qos_ptr->lifespan = NULL;
        }
        if (qos_ptr->liveliness_dw != NULL)
        {
            free(qos_ptr->liveliness_dw);
            qos_ptr->liveliness_dw = NULL;
        }
        if (qos_ptr->liveliness_dr != NULL)
        {
            free(qos_ptr->liveliness_dr);
            qos_ptr->liveliness_dr = NULL;
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
        if (qos_ptr->resourcelimits_dw != NULL)
        {
            free(qos_ptr->resourcelimits_dw);
            qos_ptr->resourcelimits_dw = NULL;
        }
        if (qos_ptr->resourcelimits_dr != NULL)
        {
            free(qos_ptr->resourcelimits_dr);
            qos_ptr->resourcelimits_dr = NULL;
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

    qos->deadline = (qos_deadlineS *)malloc(sizeof(qos_deadlineS));
    qos->lifespan = (qos_lifespanS *)malloc(sizeof(qos_lifespanS));
    qos->liveliness_dw = (qos_livelinessS *)malloc(sizeof(qos_livelinessS));
    qos->liveliness_dr = (qos_livelinessS *)malloc(sizeof(qos_livelinessS));
    qos->transfer = (qos_transferS *)malloc(sizeof(qos_transferS));
    qos->transfer->tcp_ip_Conf = (ipconfig *)malloc(sizeof(ipconfig));
    qos->reliable_writer = (qos_reliable_writerS *)malloc(sizeof(qos_reliable_writerS));
    qos->reliable_writer->disable_positive_acks = (qos_disable_positive_acksS *)malloc(sizeof(qos_disable_positive_acksS));
    qos->data_sharing = (qos_data_sharingS *)malloc(sizeof(qos_data_sharingS));
    qos->reliable = (qos_reliableS *)malloc(sizeof(qos_reliableS));
    qos->history = (qos_historyS *)malloc(sizeof(qos_historyS));
    qos->durability = (qos_durabilityS *)malloc(sizeof(qos_durabilityS));
    qos->flowControllers = (qos_flowControllersS *)malloc(sizeof(qos_flowControllersS));
    qos->resourcelimits_dw = (qos_resourcelimitsS *)malloc(sizeof(qos_resourcelimitsS));
    qos->resourcelimits_dr = (qos_resourcelimitsS *)malloc(sizeof(qos_resourcelimitsS));

    // 默认值
    qos->deadline->dr_period_ms = 0;
    qos->deadline->dw_period_ms = 0;

    qos->lifespan->dw_duration_s = 0;
    qos->lifespan->dr_duration_s = 0;

    qos->liveliness_dw->kind = automatic_liveliness;
    qos->liveliness_dw->lease_duration_s = 0;
    qos->liveliness_dw->announcement_period_s = 0;

    qos->liveliness_dr->kind = automatic_liveliness;
    qos->liveliness_dr->lease_duration_s = 0;
    qos->liveliness_dr->announcement_period_s = 0;

    qos->transfer->mode = qos_trans_protocol::UDPv4;
    qos->transfer->sendBufferSize = 1024*1024*10;
    qos->transfer->receiveBufferSize = 1024*1024*10;

    qos->reliable_writer->disable_positive_acks->enable = false;
    qos->reliable_writer->disable_positive_acks->keep_duration_ms = 1000;
    
    qos->data_sharing->mode = qos_datasharing::AUTO;
    strcpy(qos->data_sharing->shared_dir,"");

    qos->reliable->dw_kind = qos_reliable_kind::reliable;
    qos->reliable->dr_kind = qos_reliable_kind::besteffort;

    qos->history->kind = keep_last_history;
    qos->history->depth = 1;

    qos->durability->dw_kind = transient_local_durability;
    qos->durability->dr_kind = volatitle_durability;

    qos->flowControllers->max_kbperSecond = 0;

    qos->resourcelimits_dw->max_samples = 5000;
    qos->resourcelimits_dw->max_instances = 10;
    qos->resourcelimits_dw->max_samples_per_instance = 400;
    qos->resourcelimits_dw->allocated_samples = 100;
    qos->resourcelimits_dw->extra_samples = 1;

    qos->resourcelimits_dr->max_samples = 5000;
    qos->resourcelimits_dr->max_instances = 10;
    qos->resourcelimits_dr->max_samples_per_instance = 400;
    qos->resourcelimits_dr->allocated_samples = 100;
    qos->resourcelimits_dr->extra_samples = 1;
    


    return qos;
}