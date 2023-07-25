

/**
 * @file MatchedStatus.hpp
 */

#ifndef _MATCHED_STATUS_HPP_
#define _MATCHED_STATUS_HPP_

#include <cstdint>

namespace eprosima {
namespace fastdds {
namespace dds {

//! @brief A structure storing a matching status
struct MatchedStatus
{
    //! @brief Constructor
    MatchedStatus() = default;

    //! @brief Destructor
    ~MatchedStatus() = default;

    //! @brief Total cumulative count the concerned reader discovered a match with a writer
    //! @details It found a writer for the same topic with a requested QoS that is compatible with that offered by the reader
    int32_t total_count = 0;

    //! @brief The change in total_count since the last time the listener was called or the status was read
    int32_t total_count_change = 0;

    //! @brief The number of writers currently matched to the concerned reader
    int32_t current_count = 0;

    //! @brief The change in current_count since the last time the listener was called or the status was read
    int32_t current_count_change = 0;
};

} // namespace dds
} // namespace fastdds
} // namespace eprosima

#endif //_MATCHED_STATUS_HPP_
