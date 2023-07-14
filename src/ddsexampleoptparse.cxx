#include "ddsexampleoptparse.h"
#include <thirdparty/optionparser/optionparser.hpp>
#include <limits>
#include <sstream>
#include <iostream>
#include <vector>
#include <string.h>

namespace option = eprosima::option;

struct Arg : public option::Arg
{
    static void print_error(const char *msg1, const option::Option &opt, const char *msg2)
    {
        fprintf(stderr, "%s", msg1);
        fwrite(opt.name, opt.namelen, 1, stderr);
        fprintf(stderr, "%s", msg2);
    }

    static option::ArgStatus Unknown(const option::Option &option, bool msg)
    {
        if (msg)
        {
            print_error("Unknown option '", option, "'\n");
        }
        return option::ARG_ILLEGAL;
    }
    static option::ArgStatus Required(
        const option::Option &option,
        bool msg)
    {
        if (option.arg != 0 && option.arg[0] != 0)
        {
            return option::ARG_OK;
        }

        if (msg)
        {
            print_error("Option '", option, "' requires an argument\n");
        }
        return option::ARG_ILLEGAL;
    }

    static option::ArgStatus Numeric(
        const option::Option &option,
        bool msg)
    {
        char *endptr = 0;
        if (option.arg != nullptr)
        {
            strtol(option.arg, &endptr, 10);
            if (endptr != option.arg && *endptr == 0)
            {
                return option::ARG_OK;
            }
        }

        if (msg)
        {
            print_error("Option '", option, "' requires a numeric argument\n");
        }
        return option::ARG_ILLEGAL;
    }

    template <long min = 0, long max = std::numeric_limits<long>::max()>
    static option::ArgStatus NumericRange(
        const option::Option &option,
        bool msg)
    {
        static_assert(min <= max, "NumericRange: invalid range provided.");

        char *endptr = 0;
        if (option.arg != nullptr)
        {
            long value = strtol(option.arg, &endptr, 10);
            if (endptr != option.arg && *endptr == 0 &&
                value >= min && value <= max)
            {
                return option::ARG_OK;
            }
        }

        if (msg)
        {
            std::ostringstream os;
            os << "' requires a numeric argument in range ["
               << min << ", " << max << "]" << std::endl;
            print_error("Option '", option, os.str().c_str());
        }

        return option::ARG_ILLEGAL;
    }

    static option::ArgStatus String(
        const option::Option &option,
        bool msg)
    {
        if (option.arg != 0)
        {
            return option::ARG_OK;
        }
        if (msg)
        {
            print_error("Option '", option, "' requires an argument\n");
        }
        return option::ARG_ILLEGAL;
    }
};

enum optionIndex
{
    UNKNOWN_OPT,
    HELP,
    TOPIC,
    SAMPLES,
    INTERVAL,
    MESSAGE
};

const option::Descriptor usage[] = {
    {UNKNOWN_OPT, 0, "", "", Arg::None,
     "Usage: DDSExample <send|listen|both|read>\nsend:发送数据；\nlisten:阻塞线程监听并接收数据;\nboth:同一个进程内进行数据发送/接收(进程内交付);\nread:主动接收数据(非阻塞)\n\n可选:"},
    {UNKNOWN_OPT, 0, "", "", Arg::None, ""},
    {HELP, 0, "h", "help", Arg::None, "  -h \t--help  \t帮助信息."},
    {TOPIC, 0, "t", "topic", Arg::NumericRange<>,
     "  -t <num>, \t--topic=<num>  \tTopic ID (默认为0, infinite).\n发布参数(在send或both的情况下使用):"},
    {SAMPLES, 0, "s", "samples", Arg::Numeric, "-s <num>, \t--samples=<num> \t发送的样本数量(默认infinite)"},
    {INTERVAL, 0, "i", "interval", Arg::String, "-i <second>, \t--interval=<second> \t发送的间隔时间(单位:秒,默认1秒)"},
    {MESSAGE, 0, "m", "message", Arg::String, "-m <string>, \t--message=<string> \t发送的字符串信息"},
    {0, 0, 0, 0, 0, 0}};

int parseMainOptions(struct OptionsArgs * const argst, int _argc, char **_argv)
{
    int columns;

#if defined(_WIN32)
    char *buf = nullptr;
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

    ddsExampleOperation opt = ddsExampleOperation::dsend;
    uint32_t topic = 0;
    uint32_t samples = INT32_MAX;
    double interval_u = 1 * 1000 * 1000;
    char message[20] = "hello byd dds!";
    if (_argc > 1)
    {
        if (strcmp(_argv[1], "send") == 0)
        {
            opt = ddsExampleOperation::dsend;
        }else if (strcmp(_argv[1], "listen") == 0)
        {
            opt = ddsExampleOperation::dlisten;
        }else if (strcmp(_argv[1], "read") == 0)
        {
            opt = ddsExampleOperation::dread;
        }else if (strcmp(_argv[1], "both") == 0)
        {
            opt = ddsExampleOperation::dboth;
        }else{
            opt = ddsExampleOperation::dundefault;
            eprosima::option::printUsage(fwrite, stdout, usage, columns);
            return 1;
        }
        _argc -= (_argc > 0);
        _argv += (_argc > 0); // skip program name argv[0] if present
        --_argc; ++_argv; // skip pub/sub argument
        eprosima::option::Stats stats(usage, _argc, _argv);
        std::vector<eprosima::option::Option> options(stats.options_max);
        std::vector<eprosima::option::Option> buffer(stats.buffer_max);
        eprosima::option::Parser parse(usage, _argc, _argv, &options[0], &buffer[0]);

        if (parse.error())
        {
            return 1;
        }

        if (options[HELP])
        {
            eprosima::option::printUsage(fwrite, stdout, usage, columns);
            return 1;
        }

        for (int i = 0; i < parse.optionsCount(); ++i)
        {
            eprosima::option::Option& opt = buffer[i];
            switch (opt.index())
            {
                case HELP:
                    // not possible, because handled further above and exits the program
                    break;

                case SAMPLES:
                    samples = strtol(opt.arg, nullptr, 10);
                    break;

                case INTERVAL:
                    interval_u = strtod(opt.arg, nullptr) * 1000000;
                    break;

                case TOPIC:
                {
                    topic = strtol(opt.arg,nullptr,10);
                    break;
                }
                case MESSAGE:
                {

                    strcpy(message,opt.arg);
                    break;
                }

                case UNKNOWN_OPT:
                    option::printUsage(fwrite, stdout, usage, columns);
                    return 1;
                    break;
            }
        }

    }else {
        option::printUsage(fwrite, stdout, usage, columns);
        return 1;
    }

    // printf("topic = %d\nsamples=%d\ninterval=%.2f秒\n",topic,samples,interval_u/1000000.0);
    
 
    if (argst == NULL)
    {
        printf("struct OptionsArgs is NULL\n"); 
        return 1;
    }
    argst->operation = opt;
    argst->samples = samples;
    argst->topic = topic;
    argst->interval_u = interval_u;
    // if (strcmp(message,"") == 0)
    // {
    //     strcpy(argst->message,"hello byd dds!");
    // }else{
    //     strcpy(argst->message,message);
    // }
    strcpy(argst->message,message);
    return 0;
}