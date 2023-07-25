/**
 * @file SubscriberImpl.hpp
 */

#ifndef _STATISTICS_FASTDDS_SUBSCRIBER_SUBSCRIBER_IMPL_HPP_
#define _STATISTICS_FASTDDS_SUBSCRIBER_SUBSCRIBER_IMPL_HPP_

#include <fastdds/statistics/IListeners.hpp>

#include <fastdds/subscriber/SubscriberImpl.hpp>
#include <statistics/fastdds/subscriber/DataReaderImpl.hpp>

namespace eprosima {
namespace fastdds {
namespace statistics {
namespace dds {

namespace efd = eprosima::fastdds::dds;

class SubscriberImpl : public efd::SubscriberImpl
{
    using BaseType = efd::SubscriberImpl;

public:

    virtual ~SubscriberImpl() = default;

    SubscriberImpl(
            efd::DomainParticipantImpl* p,
            const efd::SubscriberQos& qos,
            efd::SubscriberListener* p_listen,
            const std::shared_ptr<IListener>& stat_listener)
        : BaseType(p, qos, p_listen)
        , statistics_listener_(stat_listener)
    {
    }

    efd::DataReaderImpl* create_datareader_impl(
            const efd::TypeSupport& type,
            efd::TopicDescription* topic,
            const efd::DataReaderQos& qos,
            efd::DataReaderListener* listener) override
    {
        return new DataReaderImpl(this, type, topic, qos, listener, statistics_listener_);
    }

private:

    std::shared_ptr<IListener> statistics_listener_;
};

} // dds
} // statistics
} // fastdds
} // eprosima

#endif  // _STATISTICS_FASTDDS_SUBSCRIBER_SUBSCRIBER_IMPL_HPP_
