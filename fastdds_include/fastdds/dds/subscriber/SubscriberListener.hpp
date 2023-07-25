

/**
 * @file SubscriberListener.hpp
 */

#ifndef _FASTDDS_SUBLISTENER_HPP_
#define _FASTDDS_SUBLISTENER_HPP_

#include <fastrtps/fastrtps_dll.h>
#include <fastrtps/qos/DeadlineMissedStatus.h>
#include <fastrtps/qos/LivelinessChangedStatus.h>
#include <fastdds/dds/core/status/SubscriptionMatchedStatus.hpp>
#include <fastdds/dds/subscriber/DataReaderListener.hpp>

namespace eprosima {
namespace fastdds {
namespace dds {

class Subscriber;

/**
 * Class SubscriberListener, it should be used by the end user to implement specific callbacks to certain actions.
 * It also inherits all DataReaderListener callbacks.
 *
 * @ingroup FASTDDS_MODULE
 */
class SubscriberListener : public DataReaderListener
{
public:

    /**
     * @brief Constructor
     */
    RTPS_DllAPI SubscriberListener()
    {
    }

    /**
     * @brief Destructor
     */
    RTPS_DllAPI virtual ~SubscriberListener()
    {
    }

    /**
     * Virtual function to be implemented by the user containing the actions to be performed when a new
     * Data Message is available on any reader.
     *
     * @param sub Subscriber
     */
    RTPS_DllAPI virtual void on_data_on_readers(
            Subscriber* sub)
    {
        (void)sub;
    }

};

} /* namespace dds */
} /* namespace fastdds */
} /* namespace eprosima */

#endif /* _FASTDDS_SUBLISTENER_HPP_ */
