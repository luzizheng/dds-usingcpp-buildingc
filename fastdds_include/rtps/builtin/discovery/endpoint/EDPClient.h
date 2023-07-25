

/**
 * @file EDPClient.h
 *
 */

#ifndef _FASTDDS_RTPS_EDPCLIENT_H_
#define _FASTDDS_RTPS_EDPCLIENT_H_
#ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC

#include <fastdds/rtps/builtin/discovery/endpoint/EDPSimple.h>

namespace eprosima {
namespace fastdds {
namespace rtps {

using namespace fastrtps::rtps;

/**
 * Class EDPClient, extends the EDPSimple functionality to accommodate client side needs
 *@ingroup DISCOVERY_MODULE
 */
class EDPClient : public EDPSimple
{
public:

    /**
     * Constructor.
     * @param p Pointer to the PDP
     * @param part Pointer to the RTPSParticipantImpl
     */
    EDPClient(
            PDP* p,
            RTPSParticipantImpl* part)
        : EDPSimple(p, part)
    {
    }

    /**
     * This method generates the corresponding change in the subscription writer and send it to all known remote endpoints.
     * @param reader Pointer to the Reader object.
     * @param rdata Pointer to the ReaderProxyData object.
     * @return true if correct.
     */
    bool processLocalReaderProxyData(
            RTPSReader* reader,
            ReaderProxyData* rdata) override;
    /**
     * This method generates the corresponding change in the publciations writer and send it to all known remote endpoints.
     * @param writer Pointer to the Writer object.
     * @param wdata Pointer to the WriterProxyData object.
     * @return true if correct.
     */
    bool processLocalWriterProxyData(
            RTPSWriter* writer,
            WriterProxyData* wdata) override;
    /**
     * This methods generates the change disposing of the local Reader and calls the unpairing and removal methods of the base class.
     * @param R Pointer to the RTPSReader object.
     * @return True if correct.
     */
    bool removeLocalReader(
            RTPSReader* R) override;
    /**
     * This methods generates the change disposing of the local Writer and calls the unpairing and removal methods of the base class.
     * @param W Pointer to the RTPSWriter object.
     * @return True if correct.
     */
    bool removeLocalWriter(
            RTPSWriter* W) override;

};

} /* namespace rtps */
} /* namespace fastdds */
} /* namespace eprosima */

#endif // ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC
#endif /* _FASTDDS_RTPS_EDPCLIENT_H_ */
