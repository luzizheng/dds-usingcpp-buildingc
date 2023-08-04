#include "ddsqosxmlparser.h"
#include <iostream>
#include "string_caculate.h"

using namespace std;

bool EleIsDefaultVal(const XMLElement *element)
{
    if (element == NULL)
    {
        return true;
    }
    if (element->GetText() == NULL)
    {
        return true;
    }
    if (strcmp("default", element->GetText()) == 0)
    {
        return true;
    }
    return false;
}

/// @brief 解析传输层QOS配置
int qosparseTransElement(c_qos *qos_, const XMLElement *transfer_ele)
{
    if (qos_ == NULL || transfer_ele == NULL)
    {
        return 0;
    }
    const XMLElement *trans_mode_el = transfer_ele->FirstChildElement("trans_mode");
    if (trans_mode_el != NULL)
    {
        const char *trans_mode = trans_mode_el->GetText();
        if (strcmp(trans_mode, "shm") == 0 || strcmp(trans_mode, "SHM") == 0)
        {
            qos_->transfer->mode = qos_trans_protocol::SHM;
        }
        else if (strcmp(trans_mode, "udp") == 0 || strcmp(trans_mode, "UDP") == 0)
        {
            qos_->transfer->mode = qos_trans_protocol::UDPv4;
        }
        else if (strcmp(trans_mode, "tcp") == 0 || strcmp(trans_mode, "TCP") == 0)
        {
            qos_->transfer->mode = qos_trans_protocol::TCPv4;
        }
        else
        {
            qos_->transfer->mode = qos_trans_protocol::UDPv4;
        }
    }

    const XMLElement *sendBuffSizeEle = transfer_ele->FirstChildElement("socket_sendBufferSize");
    if (EleIsDefaultVal(sendBuffSizeEle) == false)
    {
        qos_->transfer->sendBufferSize = evaluate_exp(string(sendBuffSizeEle->GetText()));
    }

    const XMLElement *receiveBufferEle = transfer_ele->FirstChildElement("socket_receiveBufferSize");
    if (EleIsDefaultVal(receiveBufferEle) == false)
    {
        qos_->transfer->receiveBufferSize = evaluate_exp(string(receiveBufferEle->GetText()));
    }

    // tcp./cdd
    const XMLElement *sertcpconfEle = transfer_ele->FirstChildElement("tcp_config");
    const XMLElement *ser_wan_ip_Ele = sertcpconfEle->FirstChildElement("tcp_wanip");

    if (EleIsDefaultVal(ser_wan_ip_Ele) == false)
    {
        const char *ser_wan_ip_ch = ser_wan_ip_Ele->GetText();
        strcpy(qos_->transfer->tcp_ip_Conf->wan_ip, ser_wan_ip_ch);
    }

    const XMLElement *ser_port_Ele = sertcpconfEle->FirstChildElement("tcp_port_locator");
    if (EleIsDefaultVal(ser_port_Ele) == false)
    {
        const char *ser_port_ch = ser_port_Ele->GetText();
        qos_->transfer->tcp_ip_Conf->port_locator = atoi(ser_port_ch);
    }

    const XMLElement *ser_port_Ele_l = sertcpconfEle->FirstChildElement("tcp_port_listen");
    if (EleIsDefaultVal(ser_port_Ele_l) == false)
    {
        const char *ser_port_ch_l = ser_port_Ele_l->GetText();
        qos_->transfer->tcp_ip_Conf->port_listen = atoi(ser_port_ch_l);
    }

    const XMLElement *ser_whili_Ele = sertcpconfEle->FirstChildElement("tcp_whitelist_ips");
    if (EleIsDefaultVal(ser_whili_Ele) == false)
    {
        const char *ser_whili_ch = ser_whili_Ele->GetText();
        vector<string> list = seperateStrWithSpace(string(ser_whili_ch));
        for (int i = 0; i < list.size(); i++)
        {
            strncpy(qos_->transfer->tcp_ip_Conf->whitelist_ips[i], list[i].c_str(), QOS_IP_LEN);
        }
    }

    return 0;
}

/// @brief 解析共享数据QOS配置
int qosparseDataSharingElement(c_qos *qos_, const XMLElement *ds_ele)
{

    if (qos_ == NULL || ds_ele == NULL)
    {
        return 0;
    }
    const XMLElement *kind_ele = ds_ele->FirstChildElement("kind");
    if (EleIsDefaultVal(kind_ele) == false)
    {
        const char *kind = kind_ele->GetText();
        if (strcmp(kind, "0") == 0 || strcmpIgnUpperCase(kind, "OFF") == 0)
        {
            qos_->data_sharing->mode = qos_datasharing::OFF;
        }
        else if (strcmp(kind, "1") == 0 || strcmpIgnUpperCase(kind, "ON") == 0)
        {
            qos_->data_sharing->mode = qos_datasharing::ON;
        }
        else if (strcmp(kind, "2") == 0 || strcmpIgnUpperCase(kind, "AUTO") == 0)
        {
            qos_->data_sharing->mode = qos_datasharing::AUTO;
        }
    }

    const XMLElement *shared_dir_el = ds_ele->FirstChildElement("shared_dir");
    if (EleIsDefaultVal(shared_dir_el) == false)
    {
        const char *dir = shared_dir_el->GetText();
        strncpy(qos_->data_sharing->shared_dir, dir, QOS_DIR_LEN);
    }

    const XMLElement *max_domains_el = ds_ele->FirstChildElement("max_domains");
    if (EleIsDefaultVal(max_domains_el) == false)
    {
        qos_->data_sharing->max_domains = atoi(max_domains_el->GetText());
    }

    const XMLElement *domain_ids_ele = ds_ele->FirstChildElement("domain_ids");
    if (EleIsDefaultVal(domain_ids_ele) == false)
    {
        int i = 0;
        for (const XMLElement *domainID_ele = domain_ids_ele->FirstChildElement(); domainID_ele != NULL; domainID_ele = domainID_ele->NextSiblingElement())
        {
            strncpy(qos_->data_sharing->domain_ids[i], domainID_ele->GetText(), QOS_DOMAIN_LEN);
            i++;
        }
    }

    return 0;
}


int qosparseDeadlineElement(c_qos *qos_, const XMLElement *ele)
{
    if (qos_ == NULL || ele == NULL)
    {
        return 0;
    }
    const XMLElement *dw_period_el = ele->FirstChildElement("dw_period_ms");
    if (EleIsDefaultVal(dw_period_el) == false)
    {
        qos_->deadline->dw_period_ms = atoi(dw_period_el->GetText());
    }
    const XMLElement *dr_period_el = ele->FirstChildElement("dr_period_ms");
    if (EleIsDefaultVal(dr_period_el) == false)
    {
        qos_->deadline->dr_period_ms = atoi(dr_period_el->GetText());
    }
}


int qosparseLifeSpanElement(c_qos *qos_, const XMLElement *ele)
{
    if (qos_ == NULL || ele == NULL)
    {
        return 0;
    }
    const XMLElement *dw_duration_el = ele->FirstChildElement("dw_duration_s");
    if (EleIsDefaultVal(dw_duration_el) == false)
    {
        qos_->lifespan->dw_duration_s = atoi(dw_duration_el->GetText());
    }
    const XMLElement *dr_duration_el = ele->FirstChildElement("dr_duration_s");
    if (EleIsDefaultVal(dr_duration_el) == false)
    {
        qos_->lifespan->dr_duration_s = atoi(dr_duration_el->GetText());
    }
}
int qosparseLivelinessElement(c_qos *qos_, const XMLElement *ele)
{
    if (qos_ == NULL || ele == NULL)
    {
        return 0;
    }
    const XMLElement *dw_el = ele->FirstChildElement("dw");
    if (dw_el != NULL)
    {
        const XMLElement *kind_el = dw_el->FirstChildElement("kind");
        if (EleIsDefaultVal(kind_el) == false)
        {
            const char *kind_ch = kind_el->GetText();
            if (strcmp(kind_ch,"automatic") == 0)
            {
                qos_->liveliness_dw->kind = automatic_liveliness;
            }else if(strcmp(kind_ch,"manual_by_participant") == 0)
            {
                qos_->liveliness_dw->kind = manual_by_participant_liveliness;
            }else if(strcmp(kind_ch,"manual_by_topic") == 0)
            {
                qos_->liveliness_dw->kind = manual_by_topic_liveliness;
            }
        }
        const XMLElement *lease_duration_el = dw_el->FirstChildElement("lease_duration_s");
        if (EleIsDefaultVal(lease_duration_el) == false)
        {
            qos_->liveliness_dw->lease_duration_s = atoi(lease_duration_el->GetText());
        }
        const XMLElement *announcement_period_el = dw_el->FirstChildElement("announcement_period_s");
        if (EleIsDefaultVal(announcement_period_el) == false)
        {
            qos_->liveliness_dw->announcement_period_s = atoi(announcement_period_el->GetText());
        }

    }

    const XMLElement *dr_el = ele->FirstChildElement("dr");
    if (dr_el != NULL)
    {
        const XMLElement *kind_el = dr_el->FirstChildElement("kind");
        if (EleIsDefaultVal(kind_el) == false)
        {
            const char *kind_ch = kind_el->GetText();
            if (strcmp(kind_ch,"automatic") == 0)
            {
                qos_->liveliness_dr->kind = automatic_liveliness;
            }else if(strcmp(kind_ch,"manual_by_participant") == 0)
            {
                qos_->liveliness_dr->kind = manual_by_participant_liveliness;
            }else if(strcmp(kind_ch,"manual_by_topic") == 0)
            {
                qos_->liveliness_dr->kind = manual_by_topic_liveliness;
            }
        }
        const XMLElement *lease_duration_el = dr_el->FirstChildElement("lease_duration_s");
        if (EleIsDefaultVal(lease_duration_el) == false)
        {
            qos_->liveliness_dr->lease_duration_s = atoi(lease_duration_el->GetText());
        }
        const XMLElement *announcement_period_el = dr_el->FirstChildElement("announcement_period_s");
        if (EleIsDefaultVal(announcement_period_el) == false)
        {
            qos_->liveliness_dr->announcement_period_s = atoi(announcement_period_el->GetText());
        }
    }
}
int qosparseReliableElement(c_qos *qos_, const XMLElement *ele)
{
    if (qos_ == NULL || ele == NULL)
    {
        return 0;
    }
    const XMLElement *dw_el = ele->FirstChildElement("dw");
    if (dw_el != NULL)
    {
        const XMLElement* kind_el = dw_el->FirstChildElement("kind");
        if (EleIsDefaultVal(kind_el) == false)
        {
            const char * kind_ch = kind_el->GetText();
            if (strcmp(kind_ch,"reliable") == 0)
            {
                qos_->reliable->dw_kind = qos_reliable_kind::reliable;
            }else if (strcmp(kind_ch,"besteffort") == 0)
            {
                qos_->reliable->dw_kind = qos_reliable_kind::besteffort;
            }
        }
        const XMLElement *max_blocking_time_el = dw_el->FirstChildElement("max_blocking_time_ms");
        if (EleIsDefaultVal(max_blocking_time_el) == false)
        {
            qos_->reliable->max_blocking_time_dw_ms = atoi(max_blocking_time_el->GetText());
        }
    }

    const XMLElement *dr_el = ele->FirstChildElement("dr");
    if (dr_el != NULL)
    {
        const XMLElement* kind_el = dr_el->FirstChildElement("kind");
        if (EleIsDefaultVal(kind_el) == false)
        {
            const char * kind_ch = kind_el->GetText();
            if (strcmp(kind_ch,"reliable") == 0)
            {
                qos_->reliable->dr_kind = qos_reliable_kind::reliable;
            }else if (strcmp(kind_ch,"besteffort") == 0)
            {
                qos_->reliable->dr_kind = qos_reliable_kind::besteffort;
            }
        }
        const XMLElement *max_blocking_time_el = dr_el->FirstChildElement("max_blocking_time_ms");
        if (EleIsDefaultVal(max_blocking_time_el) == false)
        {
            qos_->reliable->max_blocking_time_dr_ms = atoi(max_blocking_time_el->GetText());
        }
    }
}
int qosparseReliableWriterElement(c_qos *qos_, const XMLElement *ele)
{
    if (qos_ == NULL || ele == NULL)
    {
        return 0;
    }
    const XMLElement *disbale_positive_acks_el = ele->FirstChildElement("disbale_positive_acks");
    if (disbale_positive_acks_el != NULL)
    {
        const XMLElement *enable_el =  disbale_positive_acks_el->FirstChildElement("enable");
        if (EleIsDefaultVal(enable_el) == false)
        {
            const char *enable_ch = enable_el->GetText();
            if (strcmp(enable_ch,"true") == 0)
            {
                qos_->reliable_writer->disable_positive_acks->enable = true;
            }else if(strcmp(enable_ch,"false") == 0){
                qos_->reliable_writer->disable_positive_acks->enable = false;
            }
        }
        const XMLElement *keep_duration_el = disbale_positive_acks_el->FirstChildElement("keep_duration_ms");
        if (EleIsDefaultVal(keep_duration_el) == false)
        {
            qos_->reliable_writer->disable_positive_acks->keep_duration_ms = atoi(keep_duration_el->GetText());
        }
    }
}
int qosparseHistoryElement(c_qos *qos_, const XMLElement *ele)
{
    if (qos_ == NULL || ele == NULL)
    {
        return 0;
    }
    const XMLElement * kind_el = ele->FirstChildElement("kind");
    if (EleIsDefaultVal(kind_el) == false)
    {
        const char *kind_ch = kind_el->GetText();
        if (strcmp(kind_ch,"keep_last") == 0)
        {
            qos_->history->kind = qos_history_kind::keep_last_history;
        }else if (strcmp(kind_ch,"keep_all") == 0)
        {
            qos_->history->kind = qos_history_kind::keep_all_history;
        }
    }
    const XMLElement *depth_el = ele->FirstChildElement("depth");
    if (EleIsDefaultVal(depth_el) == false)
    {
        qos_->history->depth = atoi(depth_el->GetText());
    }
}
int qosparseDurabilityElement(c_qos *qos_, const XMLElement *ele)
{
    if (qos_ == NULL || ele == NULL)
    {
        return 0;
    }
    const XMLElement *dw_el = ele->FirstChildElement("dw");
    if (dw_el != NULL)
    {
        const XMLElement *kind_el = dw_el->FirstChildElement("kind");
        if (EleIsDefaultVal(kind_el) == false)
        {
            const char *kind_ch = kind_el->GetText();
            if (strcmp(kind_ch,"volatitle") == 0)
            {
                qos_->durability->dw_kind = qos_durability_kind::volatitle_durability;
            }else if (strcmp(kind_ch,"transient_local") == 0)
            {
                qos_->durability->dw_kind = qos_durability_kind::transient_local_durability;
            }else if (strcmp(kind_ch,"transient") == 0)
            {
                qos_->durability->dw_kind = qos_durability_kind::transient_durability;
            }else if (strcmp(kind_ch,"persistent") == 0)
            {
                qos_->durability->dw_kind = qos_durability_kind::persistent_durability;
            }
        }
    }

    const XMLElement *dr_el = ele->FirstChildElement("dr");
    if (dr_el != NULL)
    {
        const XMLElement *kind_el = dr_el->FirstChildElement("kind");
        if (EleIsDefaultVal(kind_el) == false)
        {
            const char *kind_ch = kind_el->GetText();
            if (strcmp(kind_ch,"volatitle") == 0)
            {
                qos_->durability->dr_kind = qos_durability_kind::volatitle_durability;
            }else if (strcmp(kind_ch,"transient_local") == 0)
            {
                qos_->durability->dr_kind = qos_durability_kind::transient_local_durability;
            }else if (strcmp(kind_ch,"transient") == 0)
            {
                qos_->durability->dr_kind = qos_durability_kind::transient_durability;
            }else if (strcmp(kind_ch,"persistent") == 0)
            {
                qos_->durability->dr_kind = qos_durability_kind::persistent_durability;
            }
        }
    }

}
int qosparseflowControllersElement(c_qos *qos_, const XMLElement *ele)
{
    if (qos_ == NULL || ele == NULL)
    {
        return 0;
    }
    const XMLElement *max_kbperSecond_el = ele->FirstChildElement("max_kbperSecond");
    if (EleIsDefaultVal(max_kbperSecond_el) == false)
    {
        qos_->flowControllers->max_kbperSecond = atoi(max_kbperSecond_el->GetText());
    }
}
int qosparseresourceLimitsElement(c_qos *qos_, const XMLElement *ele)
{
    if (qos_ == NULL || ele == NULL)
    {
        return 0;
    }
    const XMLElement *dw_el = ele->FirstChildElement("dw");
    if (dw_el != NULL)
    {
        const XMLElement *max_samples_el = dw_el->FirstChildElement("max_samples");
        if (EleIsDefaultVal(max_samples_el) == false)
        {
            qos_->resourcelimits_dw->max_samples = atoi(max_samples_el->GetText());
        }

        const XMLElement *max_instances_el = dw_el->FirstChildElement("max_instances");
        if (EleIsDefaultVal(max_instances_el) == false)
        {
            qos_->resourcelimits_dw->max_instances = atoi(max_instances_el->GetText());
        }

        const XMLElement *max_samples_per_instance_el = dw_el->FirstChildElement("max_samples_per_instance");
        if (EleIsDefaultVal(max_samples_per_instance_el) == false)
        {
            qos_->resourcelimits_dw->max_samples_per_instance = atoi(max_samples_per_instance_el->GetText());
        }

        const XMLElement *allocated_samples_el = dw_el->FirstChildElement("allocated_samples");
        if (EleIsDefaultVal(allocated_samples_el) == false)
        {
            qos_->resourcelimits_dw->allocated_samples = atoi(allocated_samples_el->GetText());
        }

        const XMLElement *extra_samples_el = dw_el->FirstChildElement("extra_samples");
        if (EleIsDefaultVal(extra_samples_el) == false)
        {
            qos_->resourcelimits_dw->extra_samples = atoi(extra_samples_el->GetText());
        }
    }

    const XMLElement *dr_el = ele->FirstChildElement("dr");
    if (dr_el != NULL)
    {
        const XMLElement *max_samples_el = dr_el->FirstChildElement("max_samples");
        if (EleIsDefaultVal(max_samples_el) == false)
        {
            qos_->resourcelimits_dr->max_samples = atoi(max_samples_el->GetText());
        }

        const XMLElement *max_instances_el = dr_el->FirstChildElement("max_instances");
        if (EleIsDefaultVal(max_instances_el) == false)
        {
            qos_->resourcelimits_dr->max_instances = atoi(max_instances_el->GetText());
        }

        const XMLElement *max_samples_per_instance_el = dr_el->FirstChildElement("max_samples_per_instance");
        if (EleIsDefaultVal(max_samples_per_instance_el) == false)
        {
            qos_->resourcelimits_dr->max_samples_per_instance = atoi(max_samples_per_instance_el->GetText());
        }

        const XMLElement *allocated_samples_el = dr_el->FirstChildElement("allocated_samples");
        if (EleIsDefaultVal(allocated_samples_el) == false)
        {
            qos_->resourcelimits_dr->allocated_samples = atoi(allocated_samples_el->GetText());
        }

        const XMLElement *extra_samples_el = dr_el->FirstChildElement("extra_samples");
        if (EleIsDefaultVal(extra_samples_el) == false)
        {
            qos_->resourcelimits_dr->extra_samples = atoi(extra_samples_el->GetText());
        }
    }

}
