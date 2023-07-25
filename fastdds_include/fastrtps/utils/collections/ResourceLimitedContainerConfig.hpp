

/**
 * @file ResourceLimitedContainerConfig.hpp
 *
 */

#ifndef FASTRTPS_UTILS_COLLECTIONS_RESOURCELIMITEDCONTAINERCONFIG_HPP_
#define FASTRTPS_UTILS_COLLECTIONS_RESOURCELIMITEDCONTAINERCONFIG_HPP_

#include <cstddef>
#include <limits>

namespace eprosima {
namespace fastrtps {

#define dummy_avoid_winmax

/**
 * Specifies the configuration of a resource limited collection.
 * @ingroup UTILITIES_MODULE
 */
struct ResourceLimitedContainerConfig
{

    ResourceLimitedContainerConfig(
            size_t ini = 0,
            size_t max = std::numeric_limits<size_t>::max dummy_avoid_winmax (),
            size_t inc = 1u)
        : initial(ini)
        , maximum(max)
        , increment(inc)
    {
    }

    //! Number of elements to be preallocated in the collection.
    size_t initial = 0;
    //! Maximum number of elements allowed in the collection.
    size_t maximum = std::numeric_limits<size_t>::max dummy_avoid_winmax ();
    //! Number of items to add when capacity limit is reached.
    size_t increment = 1u;

    /**
     * Return a resource limits configuration for a fixed size collection.
     * @param size Number of elements to allocate.
     * @return Resource limits configuration.
     */
    inline static ResourceLimitedContainerConfig fixed_size_configuration(
            size_t size)
    {
        return ResourceLimitedContainerConfig(size, size, 0u);
    }

    /**
     * Return a resource limits configuration for a linearly growing, dynamically allocated collection.
     * @param increment Number of new elements to allocate when increasing the capacity of the collection.
     * @return Resource limits configuration.
     */
    inline static ResourceLimitedContainerConfig dynamic_allocation_configuration(
            size_t increment = 1u)
    {
        return ResourceLimitedContainerConfig(0u,
                       std::numeric_limits<size_t>::max dummy_avoid_winmax (), increment ? increment : 1u);
    }

};

inline bool operator == (
        const ResourceLimitedContainerConfig& lhs,
        const ResourceLimitedContainerConfig& rhs)
{
    return
        lhs.maximum == rhs.maximum &&
        lhs.initial == rhs.initial &&
        lhs.increment == rhs.increment;
}

}  // namespace fastrtps
}  // namespace eprosima

#endif /* FASTRTPS_UTILS_COLLECTIONS_RESOURCELIMITEDCONTAINERCONFIG_HPP_ */
