

/**
 * @file SubscriberListener.h
 */

#ifndef SUBLISTENER_H_
#define SUBLISTENER_H_

#include <fastrtps/fastrtps_dll.h>
#include <fastrtps/qos/DeadlineMissedStatus.h>
#include <fastrtps/qos/LivelinessChangedStatus.h>

namespace eprosima {
namespace fastrtps {

namespace rtps {
class MatchingInfo;
} /* namespace rtps */

class Subscriber;

/**
 * Class SubscriberListener, it should be used by the end user to implement specific callbacks to certain actions.
 * @ingroup FASTRTPS_MODULE
 * @snippet fastrtps_example.cpp ex_SubscriberListener
 */
class RTPS_DllAPI SubscriberListener
{
    public:

        SubscriberListener(){}

        virtual ~SubscriberListener(){}

        /**
         * Virtual function to be implemented by the user containing the actions to be performed when a new  Data Message is received.
         * @param sub Subscriber
         */
        virtual void onNewDataMessage(Subscriber* sub)
        {
            (void)sub;
        }

        /**
         * Virtual method to be called when the subscriber is matched with a new Writer (or unmatched); i.e., when a writer publishing in the same topic is discovered.
         * @param sub Subscriber
         * @param info Matching information
         */
        virtual void onSubscriptionMatched(
                Subscriber* sub,
                rtps::MatchingInfo& info)
        {
            (void)sub;
            (void)info;
        }

        /**
         * Virtual method to be called when a topic misses the deadline period
         * @param sub Subscriber
         * @param status The requested deadline missed status
         */
        virtual void on_requested_deadline_missed(
                Subscriber* sub,
                const RequestedDeadlineMissedStatus& status)
        {
            (void)sub;
            (void)status;
        }

        /**
         * @brief Method called when the liveliness status associated to a subscriber changes
         * @param sub The subscriber
         * @param status The liveliness changed status
         */
        virtual void on_liveliness_changed(
                Subscriber* sub,
                const LivelinessChangedStatus& status)
        {
            (void)sub;
            (void)status;
        }

};

} /* namespace fastrtps */
} /* namespace eprosima */

#endif /* LISTENER_H_ */
