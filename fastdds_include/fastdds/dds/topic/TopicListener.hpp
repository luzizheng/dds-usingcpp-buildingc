

/**
 * @file SubscriberListener.hpp
 */

#ifndef _FASTDDS_TOPICLISTENER_HPP_
#define _FASTDDS_TOPICLISTENER_HPP_

#include <fastrtps/fastrtps_dll.h>
#include <fastdds/dds/core/status/BaseStatus.hpp>

namespace eprosima {
namespace fastdds {
namespace dds {

class Topic;

/**
 * Class TopicListener, it should be used by the end user to implement specific callbacks to certain actions.
 *
 * @ingroup FASTDDS_MODULE
 */
class RTPS_DllAPI TopicListener
{
public:

    /**
     * @brief Constructor
     */
    TopicListener()
    {
    }

    /**
     * @brief Destructor
     */
    virtual ~TopicListener()
    {
    }

    /**
     * Virtual function to be implemented by the user containing the actions to be performed when
     * another topic exists with the same name but different characteristics.
     *
     * @param topic Topic
     * @param status The inconsistent topic status
     */
    virtual void on_inconsistent_topic(
            Topic* topic,
            InconsistentTopicStatus status)
    {
        (void)topic;
        (void)status;
    }

};

} /* namespace dds */
} /* namespace fastdds */
} /* namespace eprosima */

#endif /* _FASTDDS_TOPICLISTENER_HPP_ */
