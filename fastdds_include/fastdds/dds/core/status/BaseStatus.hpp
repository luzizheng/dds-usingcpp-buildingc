

/**
 * @file BaseStatus.hpp
 */

#ifndef _FASTDDS_BASE_STATUS_HPP_
#define _FASTDDS_BASE_STATUS_HPP_

#include <cstdint>

namespace eprosima {
namespace fastdds {
namespace dds {

//! @brief A struct storing the base status
struct BaseStatus
{
    //!Total cumulative count
    int32_t total_count = 0;

    //!Increment since the last time the status was read
    int32_t total_count_change = 0;
};

//!Alias of BaseStatus
using SampleLostStatus = BaseStatus;
//!Alias of BaseStatus
using LivelinessLostStatus = BaseStatus;
//!Alias of BaseStatus
using InconsistentTopicStatus = BaseStatus;

} //namespace dds
} //namespace fastdds

namespace fastrtps {

using LivelinessLostStatus = fastdds::dds::BaseStatus;

}

} //namespace eprosima

#endif // _FASTDDS_BASE_STATUS_HPP_
