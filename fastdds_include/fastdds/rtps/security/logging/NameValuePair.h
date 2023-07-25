/*!
 * @file NameValuePair.h
 */
#ifndef _FASTDDS_RTPS_SECURITY_LOGGING_NAMEVALUEPAIR_H_
#define _FASTDDS_RTPS_SECURITY_LOGGING_NAMEVALUEPAIR_H_

#include <string>
#include <vector>

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

/**
 * @brief The NameValuePair struct
 *
 * @note Definition in DDS-Sec v1.1 9.6
 */
struct NameValuePair final
{
    std::string name;
    std::string value;
};

using NameValuePairSeq = std::vector<NameValuePair>;

} //namespace security
} //namespace rtps
} //namespace fastrtps
} //namespace eprosima

#endif // _FASTDDS_RTPS_SECURITY_LOGGING_NAMEVALUEPAIR_H_
