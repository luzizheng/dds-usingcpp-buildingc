

/*
 * @file HistoryAttributesExtension.hpp
 *
 */

#ifndef FASTRTPS_RTPS_HISTORY_HISTORYATTRIBUTESEXTENSION_HPP_
#define FASTRTPS_RTPS_HISTORY_HISTORYATTRIBUTESEXTENSION_HPP_

#ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC

#include <fastdds/rtps/attributes/HistoryAttributes.h>
#include <fastrtps/utils/collections/ResourceLimitedContainerConfig.hpp>

namespace eprosima {
namespace fastrtps {
namespace rtps {

static inline ResourceLimitedContainerConfig resource_limits_from_history(
        const HistoryAttributes& history_attributes,
        size_t increment = 1u)
{
    if (history_attributes.maximumReservedCaches > 0 &&
        history_attributes.initialReservedCaches == history_attributes.maximumReservedCaches)
    {
        return ResourceLimitedContainerConfig::fixed_size_configuration(history_attributes.maximumReservedCaches);
    }

    return
    {
        history_attributes.initialReservedCaches > 0 ?
            static_cast<size_t>(history_attributes.initialReservedCaches) : 0,
        history_attributes.maximumReservedCaches > 0 ?
            static_cast<size_t>(history_attributes.maximumReservedCaches) : std::numeric_limits<size_t>::max(),
        increment > 0 ? increment : 1u
    };
}

} // namespace rtps
} // namespace fastrtps
} // namespace eprosima

#endif // DOXYGEN_SHOULD_SKIP_THIS_PUBLIC
#endif // FASTRTPS_RTPS_HISTORY_HISTORYATTRIBUTESEXTENSION_HPP_
