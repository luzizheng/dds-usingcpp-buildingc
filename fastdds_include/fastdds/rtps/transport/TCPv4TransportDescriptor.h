

#ifndef _FASTDDS_TCPV4_TRANSPORT_DESCRIPTOR_
#define _FASTDDS_TCPV4_TRANSPORT_DESCRIPTOR_

#include <sstream>

#include <fastdds/rtps/transport/TCPTransportDescriptor.h>
#include <fastdds/rtps/common/Types.h>

namespace eprosima {
namespace fastdds {
namespace rtps {

/**
 * TCPv4 Transport configuration.
 * The kind value for TCPv4TransportDescriptor is given by \c eprosima::fastrtps::rtps::LOCATOR_KIND_TCPv4.
 *
 * - \c wan_addr: Public IP address. Peers on a different LAN will use this IP for communications with this host.
 *
 * @ingroup TRANSPORT_MODULE
 */
struct TCPv4TransportDescriptor : public TCPTransportDescriptor
{
    //! Destructor
    virtual ~TCPv4TransportDescriptor() = default;

    virtual TransportInterface* create_transport() const override;

    //! Public IP address
    fastrtps::rtps::octet wan_addr[4];

    //! Set the public IP address
    void set_WAN_address(
            fastrtps::rtps::octet o1,
            fastrtps::rtps::octet o2,
            fastrtps::rtps::octet o3,
            fastrtps::rtps::octet o4)
    {
        wan_addr[0] = o1;
        wan_addr[1] = o2;
        wan_addr[2] = o3;
        wan_addr[3] = o4;
    }

    //! Set the public IP address
    void set_WAN_address(
            const std::string& in_address)
    {
        std::stringstream ss(in_address);
        int a, b, c, d; //to store the 4 ints
        char ch; //to temporarily store the '.'
        ss >> a >> ch >> b >> ch >> c >> ch >> d;
        wan_addr[0] = (fastrtps::rtps::octet)a;
        wan_addr[1] = (fastrtps::rtps::octet)b;
        wan_addr[2] = (fastrtps::rtps::octet)c;
        wan_addr[3] = (fastrtps::rtps::octet)d;
    }

    //! Get the public IP address
    std::string get_WAN_address()
    {
        std::stringstream ss;
        ss << static_cast<int>(wan_addr[0]) << "."
           << static_cast<int>(wan_addr[1]) << "."
           << static_cast<int>(wan_addr[2]) << "."
           << static_cast<int>(wan_addr[3]);
        return ss.str();
    }

    //! Constructor
    RTPS_DllAPI TCPv4TransportDescriptor();

    //! Copy constructor
    RTPS_DllAPI TCPv4TransportDescriptor(
            const TCPv4TransportDescriptor& t);

    //! Copy assignment
    RTPS_DllAPI TCPv4TransportDescriptor& operator =(
            const TCPv4TransportDescriptor& t);

    //! Comparison operator
    RTPS_DllAPI bool operator ==(
            const TCPv4TransportDescriptor& t) const;
};

} // namespace rtps
} // namespace fastdds
} // namespace eprosima

#endif // _FASTDDS_TCPV4_TRANSPORT_DESCRIPTOR_
