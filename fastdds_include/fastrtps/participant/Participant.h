

/**
 * @file Participant.h
 *
 */

#ifndef PARTICIPANT_H_
#define PARTICIPANT_H_

#include <fastdds/rtps/common/Guid.h>
#include <fastdds/rtps/attributes/RTPSParticipantAttributes.h>

#include <utility>

namespace eprosima {
namespace fastrtps{

class ParticipantImpl;
class ParticipantAttributes;

namespace rtps
{
    class WriterProxyData;
    class ReaderProxyData;
    class ResourceEvent;
    class RTPSParticipant;
}

/**
 * Class Participant used to group Publishers and Subscribers into a single working unit.
 * @ingroup FASTRTPS_MODULE
 */
class RTPS_DllAPI Participant
{
    public:
        /**
         *	Get the rtps::GUID_t of the associated RTPSParticipant.
        * @return rtps::GUID_t
        */
        const rtps::GUID_t& getGuid() const;

        /**
         * Get the ParticipantAttributes.
         * @return ParticipantAttributes.
         */
        const ParticipantAttributes& getAttributes() const;

        /**
         * Called when using a StaticEndpointDiscovery mechanism different that the one
         * included in FastRTPS, for example when communicating with other implementations.
         * It indicates to the Participant that an Endpoint from the XML has been discovered and
         * should be activated.
         * @param partguid Participant rtps::GUID_t.
         * @param userId User defined ID as shown in the XML file.
         * @param kind EndpointKind (WRITER or READER)
         * @return True if correctly found and activated.
         */
        bool newRemoteEndpointDiscovered(
                const rtps::GUID_t& partguid,
                uint16_t userId,
                rtps::EndpointKind_t kind);

        /**
         * Returns a list with the participant names.
         * @return list of participant names.
         */
        std::vector<std::string> getParticipantNames() const;

        /**
         * @brief Asserts liveliness of manual by participant publishers
         */
        void assert_liveliness();

        rtps::ResourceEvent& get_resource_event() const;

    private:
        Participant();

        virtual ~Participant();

        ParticipantImpl* mp_impl;

        friend class Domain;

        friend class ParticipantImpl;
};

}
} /* namespace eprosima */

#endif /* PARTICIPANT_H_ */
