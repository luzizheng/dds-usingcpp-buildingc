

#ifndef _FASTDDS_TRANSPORT_RECEIVER_INTERFACE_H
#define _FASTDDS_TRANSPORT_RECEIVER_INTERFACE_H

#include <fastdds/rtps/common/Locator.h>

namespace eprosima {
namespace fastdds {
namespace rtps {

/**
 * Interface against which to implement a data receiver, decoupled from transport internals.
 * @ingroup TRANSPORT_MODULE
 * */
class RTPS_DllAPI TransportReceiverInterface
{
public:

    //! Destructor
    virtual ~TransportReceiverInterface() = default;

    /**
     * Method to be called by the transport when receiving data.
     * @param data Pointer to the received data.
     * @param size Number of bytes received.
     * @param local_locator Locator identifying the local endpoint.
     * @param remote_locator Locator identifying the remote endpoint.
     */
    virtual void OnDataReceived(
            const fastrtps::rtps::octet* data,
            const uint32_t size,
            const Locator& local_locator,
            const Locator& remote_locator) = 0;
};

} // namespace rtps
} // namespace fastdds
} // namespace eprosima

#endif // _FASTDDS_TRANSPORT_RECEIVER_INTERFACE_H
