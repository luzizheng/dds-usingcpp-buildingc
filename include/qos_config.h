#ifndef _QOS_CONFIG_H_
#define _QOS_CONFIG_H_
#include <stdint.h>
#include <string>
#include <vector>
#include <tinyxml2/tinyxml2.h>

namespace QOS_CONFIG
{
    enum DDSTransMode : int16_t
    {
        SHM,
        UDPv4,
        UDPv6,
        TCPv4,
        TCPv6
    };

    enum DDSDataSharingMode : uint16_t
    {
        ON,
        OFF,
        AUTO
    };

    typedef struct ipconfig_
    {
        std::string wan_ip;
        uint16_t port_locator;
        uint16_t port_listen;
        std::vector<std::string> whitelist_ips;
    } Ipconfig;

    typedef struct qos_disable_positive_acks_
    {
        bool enable;
        uint64_t keep_duration_ms;
    } qos_disable_positive_acksS;

    typedef struct qos_transfer_
    {
        enum DDSTransMode mode;
        uint64_t sendBufferSize;
        uint64_t receiveBufferSize;
        Ipconfig tcp_ip_Conf;

    } qos_transferS;

    typedef struct qos_data_sharing_
    {
        enum DDSDataSharingMode mode;
        std::string shared_dir;
        uint32_t max_domains;
        std::vector<std::string> domain_ids;

    } qos_data_sharingS;

    class qos_config
    {
    public:
        qos_transferS transfer;
        qos_disable_positive_acksS disable_positive_acks;
        qos_data_sharingS qos_data_sharing;

        qos_config();
        ~qos_config();
        int16_t init(const char *qosXmlPath);

    private:
        int16_t parseXmlFile(const char *qosXmlPath);
        void parseTransElement(const tinyxml2::XMLElement *ele);
        void parseDisablePositiveAcksElement(const tinyxml2::XMLElement *ele);
        void parseDataSharingElement(const tinyxml2::XMLElement *ele);
    };

}

#endif