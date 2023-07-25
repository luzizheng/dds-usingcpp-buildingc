

/**
 * @file DSClientEvent.h
 *
 */

#ifndef _FASTDDS_RTPS_DSCLIENTEVENT_H_
#define _FASTDDS_RTPS_DSCLIENTEVENT_H_
#ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC

#include <fastdds/rtps/resources/TimedEvent.h>

namespace eprosima {
namespace fastdds {
namespace rtps {

using namespace fastrtps::rtps;

class PDPClient;
class EDPClient;

/**
 * Class DSClientEvent, TimedEvent used to synchronize discover-server clients
 *@ingroup DISCOVERY_MODULE
 */
class DSClientEvent : public TimedEvent
{
public:

    /**
     * Constructor.
     * @param p_PDP Pointer to the PDPClient.
     * @param interval Interval in ms.
     */
    DSClientEvent(
            PDPClient* p_PDP,
            double interval);
    ~DSClientEvent();

    /**
     * Method invoked when the event occurs.
     * This temporal event:
     + resends the client RTPSParticipantProxyData to all remote servers.
     + matches the EDP endpoints when the servers are all aware of this client existence
     */
    bool event();

    PDPClient* mp_PDP;
    EDPClient* mp_EDP;
};
} /* namespace rtps */
} /* namespace fastdds */
} /* namespace eprosima */
#endif // ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC
#endif /* _FASTDDS_RTPS_DSCLIENTEVENT_H_ */
