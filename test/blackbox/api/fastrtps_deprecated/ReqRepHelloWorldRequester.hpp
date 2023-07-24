/**
 * @file ReqRepHelloWorldRequester.hpp
 *
 */

#ifndef _TEST_BLACKBOX_REQREPHELLOWORLDREQUESTER_HPP_
#define _TEST_BLACKBOX_REQREPHELLOWORLDREQUESTER_HPP_

#include "../../types/HelloWorldPubSubTypes.h"

#include <fastrtps/fastrtps_fwd.h>
#include <fastrtps/subscriber/Subscriber.h>
#include <fastrtps/subscriber/SubscriberListener.h>
#include <fastrtps/attributes/SubscriberAttributes.h>
#include <fastrtps/publisher/Publisher.h>
#include <fastrtps/publisher/PublisherListener.h>
#include <fastrtps/attributes/PublisherAttributes.h>

#include <list>
#include <condition_variable>


#if defined(_WIN32)
#include <process.h>
#define GET_PID _getpid
#else
#define GET_PID getpid
#endif // if defined(_WIN32)



class ReqRepHelloWorldRequester
{
public:

    class ReplyListener : public eprosima::fastrtps::SubscriberListener
    {
    public:

        ReplyListener(
                ReqRepHelloWorldRequester& requester)
            : requester_(requester)
        {
        }

        ~ReplyListener()
        {
        }

        void onNewDataMessage(
                eprosima::fastrtps::Subscriber* sub);
        void onSubscriptionMatched(
                eprosima::fastrtps::Subscriber* /*sub*/,
                eprosima::fastrtps::rtps::MatchingInfo& info)
        {
            if (info.status == eprosima::fastrtps::rtps::MATCHED_MATCHING)
            {
                requester_.matched();
            }
        }

    private:

        ReplyListener& operator =(
                const ReplyListener&) = delete;

        ReqRepHelloWorldRequester& requester_;
    }
    reply_listener_;

    class RequestListener : public eprosima::fastrtps::PublisherListener
    {
    public:

        RequestListener(
                ReqRepHelloWorldRequester& requester)
            : requester_(requester)
        {
        }

        ~RequestListener()
        {
        }

        void onPublicationMatched(
                eprosima::fastrtps::Publisher* /*pub*/,
                eprosima::fastrtps::rtps::MatchingInfo& info)
        {
            if (info.status == eprosima::fastrtps::rtps::MATCHED_MATCHING)
            {
                requester_.matched();
            }
        }

    private:

        RequestListener& operator =(
                const RequestListener&) = delete;

        ReqRepHelloWorldRequester& requester_;

    }
    request_listener_;

    ReqRepHelloWorldRequester();
    virtual ~ReqRepHelloWorldRequester();
    void init();
    void init_with_latency(
            const eprosima::fastrtps::Duration_t& latency_budget_duration_pub,
            const eprosima::fastrtps::Duration_t& latency_budget_duration_sub);
    bool isInitialized() const
    {
        return initialized_;
    }

    void newNumber(
            eprosima::fastrtps::rtps::SampleIdentity related_sample_identity,
            uint16_t number);
    void block(
            const std::chrono::seconds& seconds);
    void wait_discovery();
    void matched();
    void send(
            const uint16_t number);

    const eprosima::fastrtps::Duration_t datawriter_latency_budget_duration() const
    {
        return request_publisher_->getAttributes().qos.m_latencyBudget.duration;
    }

    const eprosima::fastrtps::Duration_t datareader_latency_budget_duration() const
    {
        return reply_subscriber_->getAttributes().qos.m_latencyBudget.duration;
    }

    virtual void configSubscriber(
            const std::string& suffix)
    {
        (void) suffix;
    }

    virtual void configPublisher(
            const std::string& suffix)
    {
        (void) suffix;
    }

protected:

    eprosima::fastrtps::PublisherAttributes puattr;
    eprosima::fastrtps::SubscriberAttributes sattr;

private:

    ReqRepHelloWorldRequester& operator =(
            const ReqRepHelloWorldRequester&) = delete;

    uint16_t current_number_;
    uint16_t number_received_;
    eprosima::fastrtps::Participant* participant_;
    eprosima::fastrtps::Subscriber* reply_subscriber_;
    eprosima::fastrtps::Publisher* request_publisher_;
    bool initialized_;
    std::mutex mutex_;
    std::condition_variable cv_;
    std::mutex mutexDiscovery_;
    std::condition_variable cvDiscovery_;
    unsigned int matched_;
    HelloWorldPubSubType type_;
    eprosima::fastrtps::rtps::SampleIdentity related_sample_identity_;
    eprosima::fastrtps::rtps::SampleIdentity received_sample_identity_;
};

#endif // _TEST_BLACKBOX_REQREPHELLOWORLDREQUESTER_HPP_
