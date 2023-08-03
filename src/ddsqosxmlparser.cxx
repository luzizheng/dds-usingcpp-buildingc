#include "ddsqosxmlparser.h"
#include <iostream>
#include "string_caculate.h"

using namespace std;


/// @brief 解析传输层QOS配置
int qosparseTransElement(c_qos *qos_,const XMLElement *transfer_ele)
{
    if (qos_==NULL)
    {
        return -1;
    }
    const char *trans_mode = transfer_ele->FirstChildElement("trans_mode")->GetText();
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
    
    qos_->transfer->sendBufferSize = evaluate_exp(string(transfer_ele->FirstChildElement("socket_sendBufferSize")->GetText()));
    qos_->transfer->receiveBufferSize = evaluate_exp(string(transfer_ele->FirstChildElement("socket_receiveBufferSize")->GetText()));

    // tcp./cdd
    const XMLElement *sertcpconfEle = transfer_ele->FirstChildElement("tcp_config");
    const XMLElement *ser_wan_ip_Ele = sertcpconfEle->FirstChildElement("tcp_wanip");
    const char *ser_wan_ip_ch = ser_wan_ip_Ele->GetText();

    strcpy(qos_->transfer->tcp_ip_Conf->wan_ip,ser_wan_ip_ch);


    const XMLElement *ser_port_Ele = sertcpconfEle->FirstChildElement("tcp_port_locator");
    const char *ser_port_ch = ser_port_Ele->GetText();
    qos_->transfer->tcp_ip_Conf->port_locator = atoi(ser_port_ch);

    const XMLElement *ser_port_Ele_l = sertcpconfEle->FirstChildElement("tcp_port_listen");
    const char *ser_port_ch_l = ser_port_Ele_l->GetText();
    qos_->transfer->tcp_ip_Conf->port_listen = atoi(ser_port_ch_l);

    const XMLElement *ser_whili_Ele = sertcpconfEle->FirstChildElement("tcp_whitelist_ips");
    const char *ser_whili_ch = ser_whili_Ele->GetText();
    vector<string> list = seperateStrWithSpace(string(ser_whili_ch));
    for (int i=0;i<list.size();i++)
    {
        strncpy(qos_->transfer->tcp_ip_Conf->whitelist_ips[i],list[i].c_str(),QOS_IP_LEN);
    }
    return 0;
}

/// @brief 解析共享数据QOS配置
int qosparseDataSharingElement(c_qos *qos_,const XMLElement *ds_ele)
{
    const char *kind = ds_ele->FirstChildElement("kind")->GetText();
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
    const char *dir = ds_ele->FirstChildElement("shared_dir")->GetText();
    strncpy(qos_->data_sharing->shared_dir,dir,QOS_DIR_LEN);
    qos_->data_sharing->max_domains = atoi(ds_ele->FirstChildElement("max_domains")->GetText());
    
    const XMLElement *domain_ids_ele = ds_ele->FirstChildElement("domain_ids");
    int i = 0;
    for (const XMLElement *domainID_ele = domain_ids_ele->FirstChildElement(); domainID_ele != NULL; domainID_ele = domainID_ele->NextSiblingElement())
    {
        strncpy(qos_->data_sharing->domain_ids[i],domainID_ele->GetText(),QOS_DOMAIN_LEN);
        i++;
    }
    return 0;
}