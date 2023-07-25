/**
 * @file DataReaderImpl.hpp
 */

#ifndef _STATISTICS_FASTDDS_SUBSCRIBER_DATAREADERIMPL_HPP_
#define _STATISTICS_FASTDDS_SUBSCRIBER_DATAREADERIMPL_HPP_

#include <fastdds/dds/topic/TopicDescription.hpp>
#include <fastdds/statistics/IListeners.hpp>

#include <fastdds/subscriber/DataReaderImpl.hpp>
#include <fastdds/rtps/reader/RTPSReader.h>

#include <statistics/fastdds/domain/DomainParticipantImpl.hpp>

namespace eprosima {
namespace fastdds {
namespace statistics {
namespace dds {

namespace efd = eprosima::fastdds::dds;

class DataReaderImpl : public efd::DataReaderImpl
{
    using BaseType = efd::DataReaderImpl;

public:

    virtual ~DataReaderImpl() = default;

    DataReaderImpl(
            efd::SubscriberImpl* s,
            const efd::TypeSupport& type,
            efd::TopicDescription* topic,
            const efd::DataReaderQos& qos,
            efd::DataReaderListener* listener,
            std::shared_ptr<IListener> stat_listener)
        : BaseType(s, type, topic, qos, listener)
        , statistics_listener_(stat_listener)
    {
    }

    ReturnCode_t enable() override
    {
        if (nullptr != reader_)
        {
            return ReturnCode_t::RETCODE_OK;
        }

        ReturnCode_t ret = BaseType::enable();

        if (ReturnCode_t::RETCODE_OK == ret &&
                !DomainParticipantImpl::is_statistics_topic_name(topic_->get_name()))
        {
            reader_->add_statistics_listener(statistics_listener_);
        }

        return ret;
    }

    void disable() override
    {
        if (nullptr != reader_ &&
                !DomainParticipantImpl::is_statistics_topic_name(topic_->get_name()))
        {
            reader_->remove_statistics_listener(statistics_listener_);
        }

        BaseType::disable();
    }

private:

    std::shared_ptr<IListener> statistics_listener_;
};

} // dds
} // statistics
} // fastdds
} // eprosima

#endif  // _STATISTICS_FASTDDS_SUBSCRIBER_DATAREADERIMPL_HPP_
