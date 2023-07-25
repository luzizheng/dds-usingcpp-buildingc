

#ifndef _FASTDDS_UDPV4_TRANSPORT_DESCRIPTOR
#define _FASTDDS_UDPV4_TRANSPORT_DESCRIPTOR

#include <fastdds/rtps/transport/UDPTransportDescriptor.h>

namespace eprosima {
namespace fastdds {
namespace rtps {

/**
 * UDPv4 Transport configuration
 * The kind value for UDPv4TransportDescriptor is given by \c eprosima::fastrtps::rtps::LOCATOR_KIND_UDPv4.
 *
 * @ingroup TRANSPORT_MODULE
 */
struct UDPv4TransportDescriptor : public UDPTransportDescriptor
{
    //! Destructor
    virtual ~UDPv4TransportDescriptor() = default;

    virtual TransportInterface* create_transport() const override;

    //! Constructor
    RTPS_DllAPI UDPv4TransportDescriptor();

    //! Copy constructor
    RTPS_DllAPI UDPv4TransportDescriptor(
            const UDPv4TransportDescriptor& t) = default;

    //! Copy assignment
    RTPS_DllAPI UDPv4TransportDescriptor& operator =(
            const UDPv4TransportDescriptor& t) = default;

    RTPS_DllAPI bool operator ==(
            const UDPv4TransportDescriptor& t) const;
};

} // namespace rtps
} // namespace fastdds
} // namespace eprosima

#endif // _FASTDDS_UDPV4_TRANSPORT_DESCRIPTOR
