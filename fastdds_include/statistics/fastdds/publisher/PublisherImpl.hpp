/**
 * @file PublisherImpl.hpp
 */

#ifndef _STATISTICS_FASTDDS_PUBLISHER_PUBLISHERIMPL_HPP_
#define _STATISTICS_FASTDDS_PUBLISHER_PUBLISHERIMPL_HPP_

#include <fastdds/statistics/IListeners.hpp>

#include <fastdds/publisher/PublisherImpl.hpp>
#include <statistics/fastdds/publisher/DataWriterImpl.hpp>

namespace eprosima {
namespace fastdds {
namespace statistics {
namespace dds {

namespace efd = eprosima::fastdds::dds;

class PublisherImpl : public efd::PublisherImpl
{
    using BaseType = efd::PublisherImpl;

public:

    virtual ~PublisherImpl() = default;

    PublisherImpl(
            efd::DomainParticipantImpl* p,
            const efd::PublisherQos& qos,
            efd::PublisherListener* p_listen,
            const std::shared_ptr<IListener>& stat_listener)
        : BaseType(p, qos, p_listen)
        , statistics_listener_(stat_listener)
    {
    }

    efd::DataWriterImpl* create_datawriter_impl(
            const efd::TypeSupport& type,
            efd::Topic* topic,
            const efd::DataWriterQos& qos,
            const eprosima::fastrtps::rtps::EntityId_t& entity_id)
    {
        return new DataWriterImpl(this, type, topic, qos, entity_id);
    }

    efd::DataWriterImpl* create_datawriter_impl(
            const efd::TypeSupport& type,
            efd::Topic* topic,
            const efd::DataWriterQos& qos,
            efd::DataWriterListener* listener) override
    {
        return new DataWriterImpl(this, type, topic, qos, listener, statistics_listener_);
    }

private:

    std::shared_ptr<IListener> statistics_listener_;
};

} // dds
} // statistics
} // fastdds
} // eprosima

#endif  // _STATISTICS_FASTDDS_PUBLISHER_PUBLISHERIMPL_HPP_
