

/**
 * @file PDPListener.h
 *
 */

#ifndef _FASTDDS_RTPS_PDPLISTENER_H_
#define _FASTDDS_RTPS_PDPLISTENER_H_
#ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC

#include <fastdds/rtps/reader/ReaderListener.h>
#include <fastdds/rtps/builtin/data/ParticipantProxyData.h>

#include <mutex>

namespace eprosima {
namespace fastrtps {
namespace rtps {

class PDP;

/**
 * Class PDPListener, specification used by the PDP to perform the History check when a new message is received.
 * This class is implemented in order to use the same structure than with any other RTPSReader.
 * @ingroup DISCOVERY_MODULE
 */
class PDPListener: public ReaderListener
{

public:
    /**
     * @param parent Pointer to object creating this object
     */
    PDPListener(PDP* parent);

    virtual ~PDPListener() override = default;

    /**
    * New added cache
    * @param reader
    * @param change
    */
    void onNewCacheChangeAdded(
            RTPSReader* reader,
            const CacheChange_t* const change) override;

protected:

    /**
     * Get the key of a CacheChange_t
     * @param change Pointer to the CacheChange_t
     * @return True on success
     */
    bool get_key(CacheChange_t* change);

    //!Pointer to the associated mp_SPDP;
    PDP* parent_pdp_;

    /**
     * @brief Temporary data to avoid reallocations.
     *
     * @remarks This should be always accessed with the pdp_reader lock taken
     */
    ParticipantProxyData temp_participant_data_;
};


} /* namespace rtps */
} /* namespace fastrtps */
} /* namespace eprosima */

#endif
#endif /* _FASTDDS_RTPS_PDPLISTENER_H_ */
