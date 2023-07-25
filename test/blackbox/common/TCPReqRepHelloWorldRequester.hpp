/**
 * @file TCPReqRepHelloWorldRequester.hpp
 *
 */

#ifndef _TEST_BLACKBOX_TCPReqRepHelloWorldRequester_HPP_
#define _TEST_BLACKBOX_TCPReqRepHelloWorldRequester_HPP_

#include "../types/HelloWorldPubSubTypes.h"

#include <fastrtps/fastrtps_fwd.h>
#include <fastrtps/subscriber/SubscriberListener.h>
#include <fastrtps/attributes/SubscriberAttributes.h>
#include <fastrtps/publisher/PublisherListener.h>
#include <fastrtps/attributes/PublisherAttributes.h>

#include <list>
#include <condition_variable>
#include <asio.hpp>


#if defined(_WIN32)
#include <process.h>
#define GET_PID _getpid
#else
#define GET_PID getpid
#endif // if defined(_WIN32)



class TCPReqRepHelloWorldRequester
{
public:

    class ReplyListener : public eprosima::fastrtps::SubscriberListener
    {
    public:

        ReplyListener(
                TCPReqRepHelloWorldRequester& requester)
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
            else if (info.status == eprosima::fastrtps::rtps::REMOVED_MATCHING)
            {
                requester_.unmatched();
            }
        }

    private:

        ReplyListener& operator =(
                const ReplyListener&) = delete;

        TCPReqRepHelloWorldRequester& requester_;
    }
    reply_listener_;

    class RequestListener : public eprosima::fastrtps::PublisherListener
    {
    public:

        RequestListener(
                TCPReqRepHelloWorldRequester& requester)
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

        TCPReqRepHelloWorldRequester& requester_;

    }
    request_listener_;

    TCPReqRepHelloWorldRequester();
    virtual ~TCPReqRepHelloWorldRequester();
    void init(
            int participantId,
            int domainId,
            uint16_t listeningPort,
            uint32_t maxInitialPeer = 0,
            const char* certs_path = nullptr,
            bool force_localhost = false);
    bool isInitialized() const
    {
        return initialized_;
    }

    void newNumber(
            eprosima::fastrtps::rtps::SampleIdentity related_sample_identity,
            uint16_t number);
    void block();
    void wait_discovery(
            std::chrono::seconds timeout = std::chrono::seconds::zero());
    void matched();
    void unmatched();
    void send(
            const uint16_t number);
    bool is_matched();

    virtual void configSubscriber(
            const std::string& suffix)
    {
        sattr.qos.m_reliability.kind = eprosima::fastrtps::RELIABLE_RELIABILITY_QOS;

        std::ostringstream t;

        t << "TCPReqRepHelloworld_" << asio::ip::host_name() << "_" << GET_PID() << "_" << suffix;

        sattr.topic.topicName = t.str();
    }

    virtual void configPublisher(
            const std::string& suffix)
    {
        puattr.qos.m_reliability.kind = eprosima::fastrtps::RELIABLE_RELIABILITY_QOS;

        // Increase default max_blocking_time to 1 second, as our CI infrastructure shows some
        // big CPU overhead sometimes
        puattr.qos.m_reliability.max_blocking_time.seconds = 1;
        puattr.qos.m_reliability.max_blocking_time.nanosec = 0;

        std::ostringstream t;

        t << "TCPReqRepHelloworld_" << asio::ip::host_name() << "_" << GET_PID() << "_" << suffix;

        puattr.topic.topicName = t.str();
    }

protected:

    eprosima::fastrtps::PublisherAttributes puattr;
    eprosima::fastrtps::SubscriberAttributes sattr;

private:

    TCPReqRepHelloWorldRequester& operator =(
            const TCPReqRepHelloWorldRequester&) = delete;

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
    std::atomic<unsigned int> matched_;
    HelloWorldPubSubType type_;
    eprosima::fastrtps::rtps::SampleIdentity related_sample_identity_;
    eprosima::fastrtps::rtps::SampleIdentity received_sample_identity_;
};

#endif // _TEST_BLACKBOX_TCPReqRepHelloWorldRequester_HPP_
