

/**
 * @file IncompatibleQosStatus.hpp
 */

#ifndef _FASTRTPS_INCOMPATIBLE_QOS_STATUS_HPP_
#define _FASTRTPS_INCOMPATIBLE_QOS_STATUS_HPP_

#include <fastdds/dds/core/status/IncompatibleQosStatus.hpp>

namespace eprosima {
namespace fastrtps {

using IncompatibleQosStatus = fastdds::dds::IncompatibleQosStatus;

typedef IncompatibleQosStatus RequestedIncompatibleQosStatus;
typedef IncompatibleQosStatus OfferedIncompatibleQosStatus;

} //end of namespace fastrtps
} //end of namespace eprosima

#endif // _FASTRTPS_INCOMPATIBLE_QOS_STATUS_HPP_
