

/**
 * @file PublicationMatchedStatus.hpp
 */

#ifndef _PUBLICATION_MATCHED_STATUS_HPP_
#define _PUBLICATION_MATCHED_STATUS_HPP_

#include <cstdint>
#include <fastdds/dds/core/status/MatchedStatus.hpp>
#include <fastdds/dds/topic/TypeSupport.hpp>

namespace eprosima {
namespace fastdds {
namespace dds {

//! @brief A structure storing the publication status
struct PublicationMatchedStatus : public MatchedStatus
{
    //! @brief Handle to the last reader that matched the writer causing the status to change
    InstanceHandle_t last_subscription_handle;
};

} // namespace dds
} // namespace fastdds
} // namespace eprosima

#endif //_PUBLICATION_MATCHED_STATUS_HPP_
