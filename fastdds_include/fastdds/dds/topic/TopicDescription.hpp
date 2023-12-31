

/**
 * @file TopicDescription.hpp
 */

#ifndef _FASTDDS_TOPIC_DESCRIPTION_HPP_
#define _FASTDDS_TOPIC_DESCRIPTION_HPP_

#include <string>

namespace eprosima {
namespace fastdds {
namespace dds {

class DomainParticipant;
class TopicDescriptionImpl;

/**
 * Class TopicDescription, represents the fact that both publications
 * and subscriptions are tied to a single data-type
 *
 * @ingroup FASTDDS_MODULE
 */
class TopicDescription
{
public:

    /**
     * Get the DomainParticipant to which the TopicDescription belongs.
     *
     * @return The DomainParticipant to which the TopicDescription belongs.
     */
    virtual DomainParticipant* get_participant() const = 0;

    /**
     * Get the name used to create this TopicDescription.
     *
     * @return the name used to create this TopicDescription.
     */
    const std::string& get_name() const
    {
        return name_;
    }

    /**
     * Get the associated type name.
     *
     * @return the type name.
     */
    const std::string& get_type_name() const
    {
        return type_name_;
    }

    virtual TopicDescriptionImpl* get_impl() const = 0;

protected:

    TopicDescription(
            const std::string& name,
            const std::string& type_name)
        : name_(name)
        , type_name_(type_name)
    {
    }

    virtual ~TopicDescription()
    {
    }

protected:

    //! Name that allows the TopicDescription to be retrieved locally
    std::string name_;

    //! Name that defines a unique resulting type for the publication or the subscription
    std::string type_name_;
};

} /* namespace dds */
} /* namespace fastdds */
} /* namespace eprosima */

#endif /* _FASTDDS_TOPIC_DESCRIPTION_HPP_ */
