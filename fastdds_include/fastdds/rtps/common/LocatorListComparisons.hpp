

/**
 * @file LocatorListComparisons.hpp
 */

#ifndef _FASTDDS_RTPS_COMMON_LOCATORLISTCOMPARISONS_HPP_
#define _FASTDDS_RTPS_COMMON_LOCATORLISTCOMPARISONS_HPP_

#include <fastdds/rtps/common/Locator.h>
#include <fastrtps/utils/collections/ResourceLimitedVector.hpp>
#include <algorithm>

namespace eprosima {
namespace fastrtps {
namespace rtps {

/**
 * @brief Equal to operator to compare two locator lists.
 *
 * @param lhs Locator list to be compared.
 * @param rhs Other locator list to be compared.
 * @return true if the list are equal.
 * @return false otherwise.
 */
static inline bool operator == (
        const ResourceLimitedVector<Locator_t>& lhs,
        const ResourceLimitedVector<Locator_t>& rhs)
{
    if (lhs.size() == rhs.size())
    {
        for (const Locator_t& locator : lhs)
        {
            if (std::find(rhs.begin(), rhs.end(), locator) == rhs.end())
            {
                return false;
            }
        }

        return true;
    }

    return false;
}

} /* namespace rtps */
} /* namespace fastrtps */
} /* namespace eprosima */

#endif /* _FASTDDS_RTPS_COMMON_LOCATORLISTCOMPARISONS_HPP_ */
