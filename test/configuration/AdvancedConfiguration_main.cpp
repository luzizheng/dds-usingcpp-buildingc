
/**
 * @file AdvancedConfiguration_main.cpp
 *
 */

#include <string>

#include "arg_configuration.h"
#include "AdvancedConfigurationPublisher.h"
#include "AdvancedConfigurationSubscriber.h"
#include "types.hpp"

enum EntityType
{
    PUBLISHER,
    SUBSCRIBER
};

int main(
        int argc,
        char** argv)
{
    int columns;

#if defined(_WIN32)
    char* buf = nullptr;
    size_t sz = 0;
    if (_dupenv_s(&buf, &sz, "COLUMNS") == 0 && buf != nullptr)
    {
        columns = strtol(buf, nullptr, 10);
        free(buf);
    }
    else
    {
        columns = 80;
    }
#else
    columns = getenv("COLUMNS") ? atoi(getenv("COLUMNS")) : 80;
#endif // if defined(_WIN32)

    EntityType type = PUBLISHER;
    std::string topic_name = "HelloWorldTopic";
    int count = 0;
    long sleep = 100;
    int num_wait_matched = 0;
    int domain = 0;
    bool async = false;
    TransportType transport = DEFAULT;
    int hops = -1;
    bool reliable = false;
    bool transient = false; // transient local
    std::string partitions = "";
    bool use_ownership = false;
    unsigned int ownership_strength = 0;
    std::string participant_profile = "";
    //
    argc -= (argc > 0);
    argv += (argc > 0); // skip program name argv[0] if present
    option::Stats stats(true, usage, argc, argv);
    std::vector<option::Option> options(stats.options_max);
    std::vector<option::Option> buffer(stats.buffer_max);
    option::Parser parse(true, usage, argc, argv, &options[0], &buffer[0]);

    if (parse.error())
    {
        option::printUsage(fwrite, stdout, usage, columns);
        return 1;
    }

    if (options[optionIndex::HELP])
    {
        option::printUsage(fwrite, stdout, usage, columns);
        return 0;
    }

    // Decide between publisher or subscriber
    try
    {
        if (parse.nonOptionsCount() != 1)
        {
            throw 1;
        }

        const char* type_name = parse.nonOption(0);

        // make sure is the first option
        if (parse.optionsCount() && type_name >= buffer[0].name)
        {
            throw 1;
        }

        if (strcmp(type_name, "publisher") == 0)
        {
            type = PUBLISHER;
        }
        else if (strcmp(type_name, "subscriber") == 0)
        {
            type = SUBSCRIBER;
        }
        else
        {
            throw 1;
        }
    }
    catch (int error)
    {
        std::cerr << "错误: 第一个参数必须是 <publisher|subscriber>" << std::endl;
        option::printUsage(fwrite, stdout, usage, columns);
        return error;
    }

    for (int i = 0; i < parse.optionsCount(); ++i)
    {
        option::Option& opt = buffer[i];
        switch (opt.index())
        {
            case optionIndex::HELP:
                // not possible, because handled further above and exits the program
                break;

            case optionIndex::TOPIC:
                topic_name = std::string(opt.arg);
                break;

            case optionIndex::DOMAIN_ID:
                domain = strtol(opt.arg, nullptr, 10);
                break;

            case optionIndex::SAMPLES:
                count = strtol(opt.arg, nullptr, 10);
                break;

            case optionIndex::INTERVAL:
                if (type == PUBLISHER)
                {
                    sleep = strtol(opt.arg, nullptr, 10);
                }
                else
                {
                    print_warning("publisher", opt.name);
                }
                break;

            case optionIndex::WAIT:
                if (type == PUBLISHER)
                {
                    num_wait_matched = strtol(opt.arg, nullptr, 10);
                }
                else
                {
                    print_warning("publisher", opt.name);
                }
                break;

            case optionIndex::ASYNC:
                if (type == PUBLISHER)
                {
                    async = true;
                }
                else
                {
                    print_warning("publisher", opt.name);
                }
                break;

            case optionIndex::TRANSPORT:
                if (strcmp(opt.arg, "shm") == 0)
                {
                    transport = SHM;
                }
                else if (strcmp(opt.arg, "udp") == 0 || (strcmp(opt.arg, "udpv4") == 0))
                {
                    transport = UDPv4;
                }
                else if (strcmp(opt.arg, "udpv6") == 0)
                {
                    transport = UDPv6;
                }
                break;

            case optionIndex::RELIABLE:
                reliable = true;
                break;

            case optionIndex::TRANSIENT_LOCAL:
                transient = true;
                break;

            case optionIndex::TTL:
                hops = strtol(opt.arg, nullptr, 10);
                break;

            case optionIndex::PARTITIONS:
                partitions = std::string(opt.arg);
                break;

            case optionIndex::OWNERSHIP:
                use_ownership = true;
                break;

            case optionIndex::OWNERSHIP_STRENGTH:
                if (type == PUBLISHER)
                {
                    use_ownership = true;
                    ownership_strength = strtol(opt.arg, nullptr, 10);
                }
                else
                {
                    print_warning("publisher", opt.name);
                }
                break;

            case optionIndex::PROFILE:
                participant_profile = std::string(opt.arg);
                break;

            case optionIndex::UNKNOWN_OPT:
                std::cerr << "错误: " << opt.name << " 是一个无效参数." << std::endl;
                option::printUsage(fwrite, stdout, usage, columns);
                return 1;
                break;
        }
    }
    if (transient && !reliable)
    {
        std::cerr << "警告: --(transient)瞬态不会生效，因为不可靠(not reliable)." << std::endl;
    }

    if (transport == SHM && hops > 0 )
    {
        std::cerr << "警告: --TTL 不会生效，因为不使用 UDP 传输." << std::endl;
    }

    switch (type)
    {
        case PUBLISHER:
        {
            HelloWorldPublisher mypub;
            if (mypub.init(topic_name, static_cast<uint32_t>(domain), static_cast<uint32_t>(num_wait_matched), async,
                    transport, reliable, transient, hops, partitions, use_ownership, ownership_strength,
                    participant_profile))
            {
                mypub.run(static_cast<uint32_t>(count), static_cast<uint32_t>(sleep));
            }
            break;
        }
        case SUBSCRIBER:
        {
            HelloWorldSubscriber mysub;
            if (mysub.init(topic_name, static_cast<uint32_t>(count), static_cast<uint32_t>(domain), transport,
                    reliable, transient, hops, partitions, use_ownership, participant_profile))
            {
                mysub.run(static_cast<uint32_t>(count));
            }
            break;
        }
    }
    return 0;
}
