

/**
 * @file KeyedChanges.h
 *
 */

#ifndef KEYEDCHANGES_H_
#define KEYEDCHANGES_H_

#include <fastdds/rtps/common/CacheChange.h>
#include <chrono>

namespace eprosima{
namespace fastrtps{

/**
 * @brief A struct storing a vector of cache changes and the next deadline in the group
 * @ingroup FASTRTPS_MODULE
 */
struct KeyedChanges
{
    //! Default constructor
    KeyedChanges()
        : cache_changes()
        , next_deadline_us()
    {
    }

    //! Copy constructor
    KeyedChanges(const KeyedChanges& other)
        : cache_changes(other.cache_changes)
        , next_deadline_us(other.next_deadline_us)
    {
    }

    //! Destructor
    ~KeyedChanges()
    {
    }

    //! A vector of cache changes
    std::vector<rtps::CacheChange_t*> cache_changes;
    //! The time when the group will miss the deadline
    std::chrono::steady_clock::time_point next_deadline_us;
};

} /* namespace  */
} /* namespace eprosima */

#endif /* KEYEDCHANGES_H_ */
