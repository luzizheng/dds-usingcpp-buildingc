

/**
 * @file PublisherListener.hpp
 */

#ifndef _FASTDDS_PUBLISHERLISTENER_HPP_
#define _FASTDDS_PUBLISHERLISTENER_HPP_

#include <fastrtps/qos/DeadlineMissedStatus.h>
#include <fastdds/dds/core/status/BaseStatus.hpp>
#include <fastdds/dds/core/status/PublicationMatchedStatus.hpp>
#include <fastdds/dds/publisher/DataWriterListener.hpp>

namespace eprosima {
namespace fastdds {
namespace dds {

class Publisher;

/**
 * Class PublisherListener, allows the end user to implement callbacks triggered by certain events.
 * It inherits all the DataWriterListener callbacks.
 * @ingroup FASTDDS_MODULE
 */
class PublisherListener : public DataWriterListener
{
public:

    /**
     * @brief Constructor
     */
    RTPS_DllAPI PublisherListener()
    {
    }

    /**
     * @brief Destructor
     */
    RTPS_DllAPI virtual ~PublisherListener()
    {
    }

};

} /* namespace dds */
} /* namespace fastdds */
} /* namespace eprosima */

#endif /* _FASTDDS_PUBLISHERLISTENER_HPP_ */
