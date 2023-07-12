#include "qos_config.h"
#include <iostream>
#include "string_caculate.h"

using namespace QOS_CONFIG;
using namespace tinyxml2;
using namespace std;

/// @brief 解析传输层QOS配置
void qos_config::parseTransElement(const XMLElement *transfer_ele)
{
    const char *trans_mode = transfer_ele->FirstChildElement("trans_mode")->GetText();
    if (strcmp(trans_mode, "shm") == 0 || strcmp(trans_mode, "SHM") == 0)
    {
        transfer.mode = DDSTransMode::SHM;
    }
    else if (strcmp(trans_mode, "udp") == 0 || strcmp(trans_mode, "UDP") == 0)
    {
        transfer.mode = DDSTransMode::UDPv4;
    }
    else if (strcmp(trans_mode, "tcp") == 0 || strcmp(trans_mode, "TCP") == 0)
    {
        transfer.mode = DDSTransMode::TCPv4;
    }
    
    transfer.sendBufferSize = evaluate_exp(string(transfer_ele->FirstChildElement("socket_sendBufferSize")->GetText()));
    transfer.receiveBufferSize = evaluate_exp(string(transfer_ele->FirstChildElement("socket_receiveBufferSize")->GetText()));

    // tcp./cdd
    const XMLElement *sertcpconfEle = transfer_ele->FirstChildElement("tcp_config");
    const XMLElement *ser_wan_ip_Ele = sertcpconfEle->FirstChildElement("tcp_wanip");
    const char *ser_wan_ip_ch = ser_wan_ip_Ele->GetText();
    transfer.tcp_ip_Conf.wan_ip = string(ser_wan_ip_ch);

    const XMLElement *ser_port_Ele = sertcpconfEle->FirstChildElement("tcp_port_locator");
    const char *ser_port_ch = ser_port_Ele->GetText();
    transfer.tcp_ip_Conf.port_locator = atoi(ser_port_ch);

    const XMLElement *ser_port_Ele_l = sertcpconfEle->FirstChildElement("tcp_port_listen");
    const char *ser_port_ch_l = ser_port_Ele_l->GetText();
    transfer.tcp_ip_Conf.port_listen = atoi(ser_port_ch_l);

    const XMLElement *ser_whili_Ele = sertcpconfEle->FirstChildElement("tcp_whitelist_ips");
    const char *ser_whili_ch = ser_whili_Ele->GetText();
    transfer.tcp_ip_Conf.whitelist_ips = seperateStrWithSpace(string(ser_whili_ch));
}

/// @brief 解析共享数据QOS配置
void qos_config::parseDataSharingElement(const XMLElement *ds_ele)
{
    const char *kind = ds_ele->FirstChildElement("kind")->GetText();
    if (strcmp(kind, "0") == 0 || strcmpIgnUpperCase(kind, "OFF") == 0)
    {
        qos_data_sharing.mode = DDSDataSharingMode::OFF;
    }
    else if (strcmp(kind, "1") == 0 || strcmpIgnUpperCase(kind, "ON") == 0)
    {
        qos_data_sharing.mode = DDSDataSharingMode::ON;
    }
    else if (strcmp(kind, "2") == 0 || strcmpIgnUpperCase(kind, "AUTO") == 0)
    {
        qos_data_sharing.mode = DDSDataSharingMode::AUTO;
    }
    const char *dir = ds_ele->FirstChildElement("shared_dir")->GetText();
    qos_data_sharing.shared_dir = string(dir);
    qos_data_sharing.max_domains = atoi(ds_ele->FirstChildElement("max_domains")->GetText());
    qos_data_sharing.domain_ids.clear();
    const XMLElement *domain_ids_ele = ds_ele->FirstChildElement("domain_ids");
    for (const XMLElement *domainID_ele = domain_ids_ele->FirstChildElement(); domainID_ele != NULL; domainID_ele = domainID_ele->NextSiblingElement())
    {
        qos_data_sharing.domain_ids.push_back(string(domainID_ele->GetText()));
    }
}

/// @brief 解析禁用正确认QOS配置
void qos_config::parseDisablePositiveAcksElement(const XMLElement *dpaEle)
{
    const char *enable_ch = dpaEle->FirstChildElement("enable")->GetText();
    if (strcmp(enable_ch, "0") == 0 || strcmpIgnUpperCase(enable_ch, "false") == 0)
    {
        disable_positive_acks.enable = false;
    }
    else if (strcmp(enable_ch, "1") == 0 || strcmpIgnUpperCase(enable_ch, "true") == 0)
    {
        disable_positive_acks.enable = true;
    }
    disable_positive_acks.keep_duration_ms = atoi(dpaEle->FirstChildElement("keep_duration_ms")->GetText());
}

int16_t qos_config::parseXmlFile(const char *qosXmlPath)
{
    XMLDocument doc;
    XMLError err = doc.LoadFile(qosXmlPath); // 相对与执行文件的路径
    if (err != XML_SUCCESS)
    {
        cout << "qos配置文件加载失败!" << endl;
        return -1;
    }
    else
    {
        XMLElement *qosEle = doc.FirstChildElement("qos");

        // 传输层
        parseTransElement(qosEle->FirstChildElement("qos_transfer"));

        // data sharing
        parseDataSharingElement(qosEle->FirstChildElement("data_sharing"));

        // dpa
        parseDisablePositiveAcksElement(qosEle->FirstChildElement("qos_disable_positive_acks"));

        cout << "qos_xml加载成功" << endl;
        return 0;
    }
}

int16_t qos_config::init(const char *qosXmlPath)
{
    return parseXmlFile(qosXmlPath);
}

qos_config::qos_config()
{
}

qos_config::~qos_config()
{
}