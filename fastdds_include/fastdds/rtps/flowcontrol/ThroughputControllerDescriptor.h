

#ifndef _FASTDDS_RTPS_THROUGHPUT_CONTROLLER_DESCRIPTOR_H
#define _FASTDDS_RTPS_THROUGHPUT_CONTROLLER_DESCRIPTOR_H

#include <fastrtps/fastrtps_dll.h>
#include <cstdint>

namespace eprosima {
namespace fastrtps {
namespace rtps {

/**
 * Descriptor for a Throughput Controller, containing all constructor information
 * for it.
 * @ingroup NETWORK_MODULE
 * @deprecated Use FlowControllerDescriptor
 */
struct ThroughputControllerDescriptor
{
    //! Packet size in bytes that this controller will allow in a given period.
    uint32_t bytesPerPeriod;
    //! Window of time in which no more than 'bytesPerPeriod' bytes are allowed.
    uint32_t periodMillisecs;

    RTPS_DllAPI ThroughputControllerDescriptor();
    RTPS_DllAPI ThroughputControllerDescriptor(
            uint32_t size,
            uint32_t time);

    bool operator ==(
            const ThroughputControllerDescriptor& b) const
    {
        return (this->bytesPerPeriod == b.bytesPerPeriod) &&
               (this->periodMillisecs == b.periodMillisecs);
    }

};

} // namespace rtps
} // namespace fastrtps
} // namespace eprosima

#endif // THROUGHPUT_CONTROLLER_DESCRIPTOR_H
