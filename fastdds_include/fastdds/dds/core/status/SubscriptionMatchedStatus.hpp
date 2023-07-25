

/**
 * @file SubscriptionMatchedStatus.hpp
 */

#ifndef _SUBSCRIPTION_MATCHED_STATUS_HPP_
#define _SUBSCRIPTION_MATCHED_STATUS_HPP_

#include <cstdint>

#include <fastdds/dds/core/status/MatchedStatus.hpp>
#include <fastdds/dds/common/InstanceHandle.hpp>

namespace eprosima {
namespace fastdds {
namespace dds {

//! @brief A structure storing the subscription status
struct SubscriptionMatchedStatus : public MatchedStatus
{
    //! @brief Handle to the last writer that matched the reader causing the status change
    InstanceHandle_t last_publication_handle;
};

} // namespace dds
} // namespace fastdds
} // namespace eprosima

#endif //_SUBCRIPTION_MATCHED_STATUS_HPP_
