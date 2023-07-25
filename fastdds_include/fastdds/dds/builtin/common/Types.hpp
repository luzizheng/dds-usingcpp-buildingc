

/**
 * @file Types.hpp
 *
 */

#ifndef TYPES_HPP
#define TYPES_HPP

#include <fastrtps/utils/fixed_size_string.hpp>

namespace eprosima {
namespace fastdds {
namespace dds {
namespace rpc {

using InstanceName = fastrtps::string_255;

enum RemoteExceptionCode_t {
    REMOTE_EX_OK,
    REMOTE_EX_UNSUPPORTED,
    REMOTE_EX_INVALID_ARGUMENT,
    REMOTE_EX_OUT_OF_RESOURCES,
    REMOTE_EX_UNKNOWN_OPERATION,
    REMOTE_EX_UNKNOWN_EXCEPTION
};

} // namespace rpc
} // namespace dds
} // namespace fastdds
} // namespace eprosima

#endif // TYPES_HPP
