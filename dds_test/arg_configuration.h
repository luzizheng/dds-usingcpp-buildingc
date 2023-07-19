// Copyright 2022 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * @file arg_configuration.h
 *
 */

#ifndef _EPROSIMA_FASTDDS_EXAMPLES_CPP_DDS_ADVANCEDCONFIGURATIONEXAMPLE_ARG_CONFIGURATION_H_
#define _EPROSIMA_FASTDDS_EXAMPLES_CPP_DDS_ADVANCEDCONFIGURATIONEXAMPLE_ARG_CONFIGURATION_H_

#include <iostream>
#include <limits>
#include <sstream>
#include <string>

#include <thirdparty/optionparser/optionparser.hpp>

namespace option = eprosima::option;

struct Arg : public option::Arg
{
    static void print_error(
            const char* msg1,
            const option::Option& opt,
            const char* msg2)
    {
        fprintf(stderr, "%s", msg1);
        fwrite(opt.name, opt.namelen, 1, stderr);
        fprintf(stderr, "%s", msg2);
    }

    static option::ArgStatus Unknown(
            const option::Option& option,
            bool msg)
    {
        if (msg)
        {
            print_error("未知选项 '", option, "'\n");
        }
        return option::ARG_ILLEGAL;
    }

    static option::ArgStatus Required(
            const option::Option& option,
            bool msg)
    {
        if (option.arg != 0 && option.arg[0] != 0)
        {
            return option::ARG_OK;
        }

        if (msg)
        {
            print_error("选项 '", option, "' 需要一个参数\n");
        }
        return option::ARG_ILLEGAL;
    }

    static option::ArgStatus Numeric(
            const option::Option& option,
            bool msg)
    {
        char* endptr = 0;
        if ( option.arg != nullptr )
        {
            strtol(option.arg, &endptr, 10);
            if (endptr != option.arg && *endptr == 0)
            {
                return option::ARG_OK;
            }
        }

        if (msg)
        {
            print_error("选项 '", option, "' 需要一个参数\n");
        }
        return option::ARG_ILLEGAL;
    }

    template<long min = 0, long max = std::numeric_limits<long>::max()>
    static option::ArgStatus NumericRange(
            const option::Option& option,
            bool msg)
    {
        static_assert(min <= max, "数字范围：提供的范围无效。");

        char* endptr = 0;
        if ( option.arg != nullptr )
        {
            long value = strtol(option.arg, &endptr, 10);
            if ( endptr != option.arg && *endptr == 0 &&
                    value >= min && value <= max)
            {
                return option::ARG_OK;
            }
        }

        if (msg)
        {
            std::ostringstream os;
            os << "' 需要范围内的数字参数 ["
               << min << ", " << max << "]" << std::endl;
            print_error("选项 '", option, os.str().c_str());
        }

        return option::ARG_ILLEGAL;
    }

    static option::ArgStatus String(
            const option::Option& option,
            bool msg)
    {
        if (option.arg != 0)
        {
            return option::ARG_OK;
        }
        if (msg)
        {
            print_error("选项 '", option, "' 需要字符串参数\n");
        }
        return option::ARG_ILLEGAL;
    }

    static option::ArgStatus Transport(
            const option::Option& option,
            bool msg)
    {
        if (option.arg != 0)
        {
            std::string transport = std::string(option.arg);
            if (transport != "shm" && transport != "udp" && transport != "udpv4" && transport != "udpv6")
            {
                if (msg)
                {
                    print_error("选项 '", option, "' 仅允许 <shm|udp[v4]|udpv6> 的取值\n");
                }
                return option::ARG_ILLEGAL;
            }
            return option::ARG_OK;
        }
        if (msg)
        {
            print_error("选项 '", option, "' 需要一个字符串参数\n");
        }
        return option::ARG_ILLEGAL;
    }

};

enum optionIndex
{
    UNKNOWN_OPT,
    HELP,
    TOPIC,
    WAIT,
    SAMPLES,
    INTERVAL,
    ASYNC,
    DOMAIN_ID,
    TRANSPORT,
    RELIABLE,
    TRANSIENT_LOCAL,
    TTL,
    PARTITIONS,
    OWNERSHIP_STRENGTH,
    OWNERSHIP,
    PROFILE,
};

const option::Descriptor usage[] = {
    { UNKNOWN_OPT, 0, "", "",                Arg::None,
      "Usage: ddstest <publisher|subscriber>\n\n常规选项:" },
    { HELP,    0, "h", "help",               Arg::None,      "  -h \t--help  \t生成帮助消息." },

    { UNKNOWN_OPT, 0, "", "",                Arg::None,      "\nPublisher 选项:"},
    { TOPIC, 0, "t", "topic",                  Arg::String,
      "  -t <topic_name> \t--topic=<topic_name>  \tTopic 名称 (默认: HelloWorldTopic)." },
    { DOMAIN_ID, 0, "d", "domain",                Arg::NumericRange<0, 230>,
      "  -d <id> \t--domain=<id>  \tDDS domain ID (默认: 0)." },
    { WAIT, 0, "w", "wait",                 Arg::NumericRange<>,
      "  -w <num> \t--wait=<num> \t发布所需的匹配订阅者数"
      " (默认: 0 => 不等待)." },
    { SAMPLES, 0, "s", "samples",              Arg::NumericRange<>,
      "  -s <num> \t--samples=<num>  \t要发送的样本数量 (默认: 0 => 无限样本数量)." },
    { INTERVAL, 0, "i", "interval",            Arg::NumericRange<>,
      "  -i <num> \t--interval=<num>  \t样本间隔时间(毫秒)(默认: 100)." },
    { ASYNC, 0, "a", "async",               Arg::None,
      "  -a \t--async \t异步发布模式(Asynchronous)(默认是同步:synchronous)." },
    { TRANSPORT, 0, "", "transport",        Arg::Transport,
      "  \t--transport=<shm|udp|udpv6> \t仅使用共享内存、UDPv4 或 UDPv6 传输."
      "如果未设置,就会使用FastDDS 默认传输方式（取决于场景，它将使用最有效的传输："
      " 数据共享交付机制 > 共享内存 > UDP)." },
    { OWNERSHIP, 0, "o", "ownership",        Arg::None,
      "  -o \t--ownership \t在EXCLUSIVE_OWNERSHIP下使用Topic (默认是SHARED_OWNERSHIP)."},
    { OWNERSHIP_STRENGTH, 0, "", "strength",        Arg::NumericRange<>,
      "  \t--strength=<num> \t设置此发布服务器强度。使用EXCLUSIVE_OWNERSHIP设置Topic. 默认值:0"},

    { UNKNOWN_OPT, 0, "", "",                Arg::None,      "\nSubscriber 选项:"},
    { TOPIC, 0, "t", "topic",                  Arg::String,
      "  -t <topic_name> \t--topic=<topic_name>  \tTopic 名称 (默认: HelloWorldTopic)." },
    { DOMAIN_ID, 0, "d", "domain",                Arg::NumericRange<0, 230>,
      "  -d <id> \t--domain=<id>  \tDDS domain ID (默认: 0)." },
    { SAMPLES, 0, "s", "samples",              Arg::NumericRange<>,
      "  -s <num> \t--samples=<num>  \t要等待的样本数 (默认: 0 => 无限样本)." },
    { TRANSPORT, 0, "", "transport",        Arg::Transport,
      "  \t--transport=<shm|udp|udpv6> \t仅使用共享内存、UDPv4 或 UDPv6 传输。"
      "如果未设置,就会使用FastDDS 默认传输方式（取决于场景，它将使用最有效的传输："
      " 数据共享交付机制 > 共享内存 > UDP)." },
    { OWNERSHIP, 0, "o", "ownership",        Arg::None,
      "  -o \t--ownership \t在EXCLUSIVE_OWNERSHIP下使用Topic (莫认是SHARED_OWNERSHIP)."},

    { UNKNOWN_OPT, 0, "", "",                Arg::None,      "\nQoS 选项:"},
    { RELIABLE, 0, "r", "reliable",         Arg::None,
      "  -r \t--reliable \t将可靠性设置为reliable可靠 (默认是best-effort)." },
    { TRANSIENT_LOCAL, 0, "", "transient",        Arg::None,
      "  \t--transient \t将持久性设为transient local(暂时性本地) (默认是volatile, 当可靠性为reliable时无效)." },
    { PARTITIONS, 0, "p", "partitions",        Arg::String,
      "  -p <str> \t--partitions=<str> \t要匹配的分区由 ';'."
      " 多个分区需要单引号或双引号。"
      " 空字符串 ('') 代表未使用分区 (默认: '')." },
    { PROFILE, 0, "x", "xml-profile",         Arg::String,
      "  -x <str> \t--xml-profile <str>\t用于配置DomainParticipant的配置文件名称."},

    { UNKNOWN_OPT, 0, "", "",                Arg::None,      "\nDiscovery 选项:"},
    { TTL, 0, "", "ttl",         Arg::NumericRange<1, 255>,
      "\t--ttl \t设置 IPv4 上的多播发现生存时间或 IPv6 的跃点限制。"
      " 如果未设置,则使用FastDDS 默认值(1跃点)。增加它以避免发现问题"
      " 在具有多个路由器的场景中。最大值: 255."},

    { 0, 0, 0, 0, 0, 0 }
};

void print_warning(
        std::string type,
        const char* opt)
{
    std::cerr << "警告: " << opt << " 是一个 " << type << " 选项, 忽略参数." << std::endl;
}

#endif /* _EPROSIMA_FASTDDS_EXAMPLES_CPP_DDS_ADVANCEDCONFIGURATIONEXAMPLE_ARG_CONFIGURATION_H_ */
