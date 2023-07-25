

/**
 * @file RequesterAttributes.hpp
 */

#ifndef REQUESTERATTRIBUTES_HPP_
#define REQUESTERATTRIBUTES_HPP_

#include "PublisherAttributes.h"
#include "SubscriberAttributes.h"

namespace eprosima {
namespace fastrtps {

class RequesterAttributes
{
public:
    RequesterAttributes() = default;

    bool operator==(const RequesterAttributes& b) const
    {
        return (this->service_name == b.service_name) &&
               (this->request_topic_name == b.request_topic_name) &&
               (this->reply_topic_name == b.reply_topic_name) &&
               (this->publisher == b.publisher) &&
               (this->subscriber == b.subscriber);
    }

    std::string service_name;
    std::string request_type;
    std::string reply_type;
    std::string request_topic_name;
    std::string reply_topic_name;
    PublisherAttributes publisher;
    SubscriberAttributes subscriber;
};


} /* namespace fastrtps */
} /* namespace eprosima */

#endif /* REQUESTERATTRIBUTES_HPP_ */