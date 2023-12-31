

/**
 * @file TypeLookupReplyListener.hpp
 *
 */

#ifndef TYPELOOKUP_REPLY_LISTENER_HPP_
#define TYPELOOKUP_REPLY_LISTENER_HPP_
#ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC
#include <fastrtps/rtps/reader/ReaderListener.h>

namespace eprosima {
namespace fastrtps {

namespace types {
class TypeObjectFactory;
} // namespace types

namespace rtps {

class RTPSReader;
struct CacheChange_t;

} // namespace rtps
} // namespace fastrtp

namespace fastdds {
namespace dds {
namespace builtin {

class TypeLookupManager;

/**
 * Class TypeLookupReplyListener that receives the typelookup request messages of remote endpoints.
 * @ingroup TYPES_MODULE
 */
class TypeLookupReplyListener : public fastrtps::rtps::ReaderListener
{
public:

    /**
     * @brief Constructor
     * @param pwlp Pointer to the writer liveliness protocol
     */
    TypeLookupReplyListener(
            TypeLookupManager* pwlp);

    /**
     * @brief Destructor
     */
    virtual ~TypeLookupReplyListener() override;

    /**
     * @brief Method call when this class is notified of a new cache change
     * @param reader The reader receiving the cache change
     * @param change The cache change
     */
    void onNewCacheChangeAdded(
            fastrtps::rtps::RTPSReader* reader,
            const fastrtps::rtps::CacheChange_t* const  change) override;

private:

    //! A pointer to the typelookup manager
    TypeLookupManager* tlm_;

    //! A pointer to the TypeObject factory.
    fastrtps::types::TypeObjectFactory* factory_;
};

} /* namespace builtin */
} /* namespace dds */
} /* namespace fastdds */
} /* namespace eprosima */
#endif
#endif /* TYPELOOKUP_REPLY_LISTENER_HPP_*/
