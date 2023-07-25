

/**
 * @file TopicDescriptionImpl.hpp
 *
 */

#ifndef _FASTDDS_TOPICDESCRIPTIONIMPL_HPP_
#define _FASTDDS_TOPICDESCRIPTIONIMPL_HPP_
#ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC

namespace eprosima {
namespace fastdds {
namespace dds {

class Topic;

class TopicDescriptionImpl
{

public:

    TopicDescriptionImpl()
        : num_refs_(0u)
    {
    }

    virtual ~TopicDescriptionImpl()
    {
    }

    bool is_referenced() const
    {
        return num_refs_ != 0u;
    }

    void reference()
    {
        ++num_refs_;
    }

    void dereference()
    {
        --num_refs_;
    }

    virtual const std::string& get_rtps_topic_name() const = 0;

private:

    std::atomic_size_t num_refs_;

};

} /* namespace dds */
} /* namespace fastdds */
} /* namespace eprosima */

#endif /* DOXYGEN_SHOULD_SKIP_THIS_PUBLIC */
#endif /* _FASTDDS_TOPICDESCRIPTIONIMPL_HPP_ */
