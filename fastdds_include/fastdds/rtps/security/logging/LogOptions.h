/*!
 * @file LogOptions.h
 */
#ifndef _FASTDDS_RTPS_SECURITY_LOGGING_LOGOPTIONS_H_
#define _FASTDDS_RTPS_SECURITY_LOGGING_LOGOPTIONS_H_

#include <string>

#include <fastdds/rtps/security/logging/LoggingLevel.h>

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

/**
 * @brief The LogOptions struct
 * @note Definition in DDS-Sec v1.1 8.6.2.1
 */
struct LogOptions
{
    //! Whether the log events should be distributed over DDS
    bool distribute;

    //! Level at which log messages will be logged.
    //! Messages at or below the log_level are logged.
    LoggingLevel log_level;

    //! Full path to a local file
    std::string log_file;
};

} //namespace security
} //namespace rtps
} //namespace fastrtps
} //namespace eprosima

#endif // _FASTDDS_RTPS_SECURITY_LOGGING_LOGOPTIONS_H_
