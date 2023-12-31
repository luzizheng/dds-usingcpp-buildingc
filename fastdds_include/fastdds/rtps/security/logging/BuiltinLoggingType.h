/*!
 * @file BuiltinLoggingType.h
 */
#ifndef _FASTDDS_RTPS_SECURITY_LOGGING_BUILTINLOGGINGTYPE_H_
#define _FASTDDS_RTPS_SECURITY_LOGGING_BUILTINLOGGINGTYPE_H_

#include <fastdds/rtps/common/Types.h>
#include <fastdds/rtps/common/Time_t.h>
#include <fastdds/rtps/security/logging/LoggingLevel.h>
#include <fastdds/rtps/security/logging/NameValuePair.h>

#include <map>

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

/**
 * @brief The BuiltinLoggingType struct
 *
 * @note Definition in DDS-Sec v1.1 9.6
 */
struct BuiltinLoggingType final
{
    octet facility;           // Set to 0x0A (10). Indicates sec/auth msgs
    LoggingLevel severity;
    rtps::Time_t timestamp;   // Since epoch 1970-01-01 00:00:00 +0000 (UTC)
    std::string hostname;     // IP host name of originator
    std::string hostip;       // IP address of originator
    std::string appname;      // Identify the device or application
    std::string procid;       // Process name/ID for syslog system
    std::string msgid;        // Identify the type of message
    std::string message;      // Free-form message
    // Note that certain string keys (SD-IDs) are reserved by IANA
    std::map<std::string, NameValuePairSeq> structured_data;
};

} //namespace security
} //namespace rtps
} //namespace fastrtps
} //namespace eprosima

#endif // _FASTDDS_RTPS_SECURITY_LOGGING_BUILTINLOGGINGTYPE_H_
