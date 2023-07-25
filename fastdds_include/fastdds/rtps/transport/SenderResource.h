

#ifndef _FASTDDS_RTPS_TRANSPORT_SENDERRESOURCE_H_
#define _FASTDDS_RTPS_TRANSPORT_SENDERRESOURCE_H_

#include <fastdds/rtps/common/Types.h>

#include <functional>
#include <vector>
#include <chrono>

#include <fastdds/rtps/common/Locator.h>

namespace eprosima {
namespace fastrtps {
namespace rtps {

class RTPSParticipantImpl;
class MessageReceiver;

/**
 * RAII object that encapsulates the Send operation over one chanel in an unknown transport.
 * A Sender resource is always univocally associated to a transport channel; the
 * act of constructing a Sender Resource opens the channel and its destruction
 * closes it.
 * @ingroup NETWORK_MODULE
 */
class SenderResource
{
public:

    /**
     * Sends to a destination locator, through the channel managed by this resource.
     * @param data Raw data slice to be sent.
     * @param dataLength Length of the data to be sent. Will be used as a boundary for
     * the previous parameter.
     * @param destination_locators_begin destination endpoint Locators iterator begin.
     * @param destination_locators_end destination endpoint Locators iterator end.
     * @param max_blocking_time_point If transport supports it then it will use it as maximum blocking time.
     * @return Success of the send operation.
     */
    bool send(
            const octet* data,
            uint32_t dataLength,
            LocatorsIterator* destination_locators_begin,
            LocatorsIterator* destination_locators_end,
            const std::chrono::steady_clock::time_point& max_blocking_time_point)
    {
        bool returned_value = false;

        if (send_lambda_)
        {
            returned_value = send_lambda_(data, dataLength, destination_locators_begin, destination_locators_end,
                            max_blocking_time_point);
        }

        return returned_value;
    }

    /**
     * Resources can only be transfered through move semantics. Copy, assignment, and
     * construction outside of the factory are forbidden.
     */
    SenderResource(
            SenderResource&& rValueResource)
    {
        clean_up.swap(rValueResource.clean_up);
        send_lambda_.swap(rValueResource.send_lambda_);
    }

    virtual ~SenderResource() = default;

    int32_t kind() const
    {
        return transport_kind_;
    }

    /**
     * Add locators representing the local endpoints managed by this sender resource.
     *
     * @param [in,out] locators  List where locators will be added.
     */
    virtual void add_locators_to_list(
            LocatorList_t& locators) const
    {
        (void)locators;
    }

protected:

    SenderResource(
            int32_t transport_kind)
        : transport_kind_(transport_kind)
    {
    }

    int32_t transport_kind_;

    std::function<void()> clean_up;
    std::function<bool(
                const octet*,
                uint32_t,
                LocatorsIterator* destination_locators_begin,
                LocatorsIterator* destination_locators_end,
                const std::chrono::steady_clock::time_point&)> send_lambda_;

private:

    SenderResource()                                 = delete;
    SenderResource(
            const SenderResource&)            = delete;
    SenderResource& operator =(
            const SenderResource&) = delete;
};

} // namespace rtps
} // namespace fastrtps
} // namespace eprosima

#endif /* _FASTDDS_RTPS_TRANSPORT_SENDERRESOURCE_H_ */
