

#ifndef TRANSPORT_INTERFACE_H
#define TRANSPORT_INTERFACE_H

#include <fastrtps/transport/TransportDescriptorInterface.h>
#include <fastrtps/transport/TransportReceiverInterface.h>

#include <fastdds/rtps/transport/TransportInterface.h>

namespace eprosima {
namespace fastrtps {
namespace rtps {

using SendResourceList = fastdds::rtps::SendResourceList;
using TransportInterface = fastdds::rtps::TransportInterface;

static const uint32_t s_maximumMessageSize = fastdds::rtps::s_maximumMessageSize;
static const uint32_t s_maximumInitialPeersRange = fastdds::rtps::s_maximumInitialPeersRange;
static const uint32_t s_minimumSocketBuffer = fastdds::rtps::s_minimumSocketBuffer;
static const std::string s_IPv4AddressAny = fastdds::rtps::s_IPv4AddressAny;
static const std::string s_IPv6AddressAny = fastdds::rtps::s_IPv6AddressAny;

} // namespace rtps
} // namespace fastrtps
} // namespace eprosima

#endif // ifndef TRANSPORT_INTERFACE_H
