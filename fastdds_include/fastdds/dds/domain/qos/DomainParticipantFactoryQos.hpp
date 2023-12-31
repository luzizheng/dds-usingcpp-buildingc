

/**
 * @file DomainParticipantFactoryQos.hpp
 *
 */

#ifndef _FASTDDS_PARTICIPANTFACTORYQOS_HPP_
#define _FASTDDS_PARTICIPANTFACTORYQOS_HPP_

#include <fastrtps/fastrtps_dll.h>
#include <fastdds/dds/core/policy/QosPolicies.hpp>

namespace eprosima {
namespace fastdds {
namespace dds {

/**
 * Class DomainParticipantFactoryQos, contains all the possible Qos that can be set for a determined participant.
 * Please consult each of them to check for implementation details and default values.
 * @ingroup FASTDDS_QOS_MODULE
 */
class DomainParticipantFactoryQos
{
public:

    /**
     * @brief Constructor
     */
    RTPS_DllAPI DomainParticipantFactoryQos()
    {
    }

    /**
     * @brief Destructor
     */
    RTPS_DllAPI virtual ~DomainParticipantFactoryQos()
    {
    }

    bool operator ==(
            const DomainParticipantFactoryQos& b) const
    {
        return (this->entity_factory_ == b.entity_factory());
    }

    /**
     * Getter for EntityFactoryQosPolicy
     * @return EntityFactoryQosPolicy reference
     */
    const EntityFactoryQosPolicy& entity_factory() const
    {
        return entity_factory_;
    }

    /**
     * Getter for EntityFactoryQosPolicy
     * @return EntityFactoryQosPolicy reference
     */
    EntityFactoryQosPolicy& entity_factory()
    {
        return entity_factory_;
    }

    /**
     * Setter for EntityFactoryQosPolicy
     * @param entity_factory EntityFactoryQosPolicy
     */
    void entity_factory(
            const EntityFactoryQosPolicy& entity_factory)
    {
        entity_factory_ = entity_factory;
    }

private:

    //!EntityFactoryQosPolicy, implemented in the library.
    EntityFactoryQosPolicy entity_factory_;
};

} /* namespace dds */
} /* namespace fastdds */
} /* namespace eprosima */

#endif /* _FASTDDS_PARTICIPANTFACTORYQOS_HPP_ */
