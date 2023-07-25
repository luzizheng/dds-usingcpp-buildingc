

/**
 * @file ParticipantAttributes.h
 *
 */

#ifndef PARTICIPANTATTRIBUTES_H_
#define PARTICIPANTATTRIBUTES_H_

#include <fastdds/rtps/attributes/RTPSParticipantAttributes.h>

namespace eprosima {
namespace fastrtps {

/**
 * Class ParticipantAttributes, used by the user to define the attributes of a Participant.
 * The Participants in the Publisher-Subscriber layer are only a container to a RTPSParticipant, so their attributes are the same.
 * Still to maintain the equivalence this class is used to define them.
 * @ingroup FASTRTPS_ATTRIBUTES_MODULE
 */
class ParticipantAttributes
{
public:

    //! DomainId to be used by the associated RTPSParticipant (default: 0)
    uint32_t domainId = 0;

    //!Attributes of the associated RTPSParticipant.
    rtps::RTPSParticipantAttributes rtps;

    ParticipantAttributes()
    {
    }

    virtual ~ParticipantAttributes()
    {
    }

    bool operator ==(
            const ParticipantAttributes& b) const
    {
        return (this->domainId == b.domainId && this->rtps == b.rtps);
    }

};

} // namespace fastrtps
} // namespace eprosima

#endif /* PARTICIPANTATTRIBUTES_H_ */
