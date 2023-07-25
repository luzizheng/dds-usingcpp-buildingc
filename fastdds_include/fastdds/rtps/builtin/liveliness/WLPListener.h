

/**
 * @file WLPListener.h
 *
 */

#ifndef _FASTDDS_RTPS_WLPLISTENER_H_
#define _FASTDDS_RTPS_WLPLISTENER_H_
#ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC

#include <fastdds/rtps/reader/ReaderListener.h>
#include <fastdds/rtps/common/Guid.h>
#include <fastdds/rtps/common/InstanceHandle.h>

#include <fastrtps/qos/QosPolicies.h>

namespace eprosima {
namespace fastrtps{
namespace rtps {

class WLP;
class RTPSReader;
struct CacheChange_t;

/**
 * Class WLPListener that receives the liveliness messages asserting the liveliness of remote endpoints.
 * @ingroup LIVELINESS_MODULE
 */
class WLPListener: public ReaderListener {
public:

    /**
     * @brief Constructor
     * @param pwlp Pointer to the writer liveliness protocol
     */
    WLPListener(WLP* pwlp);

    /**
     * @brief Destructor
     */
    virtual ~WLPListener();

    /**
     * @brief Method call when this class is notified of a new cache change
     * @param reader The reader receiving the cache change
     * @param change The cache change
     */
    void onNewCacheChangeAdded(
            RTPSReader* reader,
            const CacheChange_t* const  change) override;

private:

    /**
    * Separate the Key between the GuidPrefix_t and the liveliness Kind
    * @param key InstanceHandle_t to separate.
    * @param guidP GuidPrefix_t pointer to store the info.
    * @param liveliness Liveliness Kind Pointer.
    * @return True if correctly separated.
    */
    bool separateKey(
            InstanceHandle_t& key,
            GuidPrefix_t* guidP,
            LivelinessQosPolicyKind* liveliness);

    /**
    * Compute the key from a CacheChange_t
    * @param change
    */
    bool computeKey(CacheChange_t* change);

    //! A pointer to the writer liveliness protocol
    WLP* mp_WLP;

};

} /* namespace rtps */
} /* namespace eprosima */
}
#endif
#endif /* _FASTDDS_RTPS_WLPLISTENER_H_ */
