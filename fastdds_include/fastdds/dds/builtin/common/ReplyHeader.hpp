

/**
 * @file RequestHeader.hpp
 *
 */

#ifndef REPLYHEADER_HPP
#define REPLYHEADER_HPP

#include <fastrtps/rtps/common/SampleIdentity.h>
#include <fastdds/dds/builtin/common/Types.hpp>

namespace eprosima {

namespace fastcdr {
class Cdr;
} // fastcdr

namespace fastdds {
namespace dds {
namespace rpc {

struct ReplyHeader
{
    fastrtps::rtps::SampleIdentity relatedRequestId;

    RemoteExceptionCode_t remoteEx;

    RTPS_DllAPI static size_t getCdrSerializedSize(
            const ReplyHeader& data,
            size_t current_alignment = 0);

    RTPS_DllAPI void serialize(
            eprosima::fastcdr::Cdr &cdr) const;

    RTPS_DllAPI void deserialize(
            eprosima::fastcdr::Cdr &cdr);

    RTPS_DllAPI static bool isKeyDefined()
    {
        return false;
    }
};

} // namespace rpc
} // namespace dds
} // namespace fastdds
} // namespace eprosima

#endif // REPLYHEADER_HPP
