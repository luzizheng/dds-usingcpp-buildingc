

/**
 * @file ParticipantDiscoveryInfo.h
 *
 */

#ifndef _FASTDDS_RTPS_PARTICIPANT_PARTICIPANTDISCOVERYINFO_H__
#define _FASTDDS_RTPS_PARTICIPANT_PARTICIPANTDISCOVERYINFO_H__

#include <fastrtps/fastrtps_dll.h>
#include <fastdds/rtps/builtin/data/ParticipantProxyData.h>

namespace eprosima {
namespace fastrtps {
namespace rtps {

/**
 * Class ParticipantDiscoveryInfo with discovery information of the Participant.
 * @ingroup RTPS_MODULE
 */
struct ParticipantDiscoveryInfo
{
    //!Enum DISCOVERY_STATUS, four different status for discovered participants.
    //!@ingroup RTPS_MODULE
#if defined(_WIN32)
    enum RTPS_DllAPI DISCOVERY_STATUS
#else
    enum DISCOVERY_STATUS
#endif // if defined(_WIN32)
    {
        DISCOVERED_PARTICIPANT,
        CHANGED_QOS_PARTICIPANT,
        REMOVED_PARTICIPANT,
        DROPPED_PARTICIPANT,
        IGNORED_PARTICIPANT
    };

    ParticipantDiscoveryInfo(
            const ParticipantProxyData& data)
        : status(DISCOVERED_PARTICIPANT)
        , info(data)
    {
    }

    virtual ~ParticipantDiscoveryInfo()
    {
    }

    //! Status
    DISCOVERY_STATUS status;

    /**
     * @brief Participant discovery info
     *
     * @todo This is a reference to an object that could be deleted, thus it should not be a reference
     * (intraprocess case -> BlackboxTests_DDS_PIM.DDSDiscovery.ParticipantProxyPhysicalData).
     */
    const ParticipantProxyData& info;
};

#if HAVE_SECURITY
struct ParticipantAuthenticationInfo
{
    enum RTPS_DllAPI AUTHENTICATION_STATUS
    {
        AUTHORIZED_PARTICIPANT,
        UNAUTHORIZED_PARTICIPANT
    };

    ParticipantAuthenticationInfo()
        : status(UNAUTHORIZED_PARTICIPANT)
    {
    }

    ~ParticipantAuthenticationInfo()
    {
    }

    //! Status
    AUTHENTICATION_STATUS status;

    //! Associated GUID
    GUID_t guid;
};

inline bool operator ==(
        const ParticipantAuthenticationInfo& l,
        const ParticipantAuthenticationInfo& r)
{
    return l.status == r.status &&
           l.guid == r.guid;
}

#endif // if HAVE_SECURITY

} // namespace rtps
} // namespace fastrtps
} // namespace eprosima

#endif // _FASTDDS_RTPS_PARTICIPANT_PARTICIPANTDISCOVERYINFO_H__
