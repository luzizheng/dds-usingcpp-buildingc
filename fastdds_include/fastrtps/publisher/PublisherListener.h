

/**
 * @file PublisherListener.h
 */

#ifndef PUBLISHERLISTENER_H_
#define PUBLISHERLISTENER_H_

#include <fastrtps/rtps/common/MatchingInfo.h>
#include <fastrtps/qos/DeadlineMissedStatus.h>
#include <fastrtps/qos/LivelinessLostStatus.h>

namespace eprosima {
namespace fastrtps {

class Publisher;

/**
 * Class PublisherListener, allows the end user to implement callbacks triggered by certain events.
 * @ingroup FASTRTPS_MODULE
 * @snippet fastrtps_example.cpp ex_PublisherListener
 */
class RTPS_DllAPI PublisherListener
{
public:

    PublisherListener()
    {
    }

    virtual ~PublisherListener()
    {
    }

    /**
     * This method is called when the Publisher is matched (or unmatched) against an endpoint.
     * @param pub Pointer to the associated Publisher
     * @param info Information regarding the matched subscriber
     */
    virtual void onPublicationMatched(
            Publisher* pub,
            rtps::MatchingInfo& info)
    {
        (void)pub;
        (void)info;
    }

    /**
     * A method called when a deadline is missed
     * @param pub Pointer to the associated Publisher
     * @param status The deadline missed status
     */
    virtual void on_offered_deadline_missed(
            Publisher* pub,
            const OfferedDeadlineMissedStatus& status)
    {
        (void)pub;
        (void)status;
    }

    /**
     * @brief Method called when the liveliness of a publisher is lost
     * @param pub The publisher
     * @param status The liveliness lost status
     */
    virtual void on_liveliness_lost(
            Publisher* pub,
            const LivelinessLostStatus& status)
    {
        (void)pub;
        (void)status;
    }

};

} /* namespace rtps */
} /* namespace eprosima */

#endif /* PUBLISHERLISTENER_H_ */
