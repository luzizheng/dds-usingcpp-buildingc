/**
 * @file ReqRepAsReliableHelloWorldRequester.hpp
 *
 */

#ifndef _TEST_BLACKBOX_REQREPASRELIABLEHELLOWORLDREQUESTER_HPP_
#define _TEST_BLACKBOX_REQREPASRELIABLEHELLOWORLDREQUESTER_HPP_

#include "ReqRepHelloWorldRequester.hpp"
#include <asio.hpp>


#if defined(_WIN32)
#define GET_PID _getpid
#else
#define GET_PID getpid
#endif

class ReqRepAsReliableHelloWorldRequester : public ReqRepHelloWorldRequester
{
    public:
        void configSubscriber(const std::string& suffix)
        {
            sattr.qos.m_reliability.kind = eprosima::fastrtps::RELIABLE_RELIABILITY_QOS;

            std::ostringstream t;

            t << "ReqRepAsReliableHelloworld_" << asio::ip::host_name() << "_" << GET_PID() << "_" << suffix;

            sattr.topic.topicName = t.str();
        };

        void configPublisher(const std::string& suffix)
        {
            puattr.qos.m_reliability.kind = eprosima::fastrtps::RELIABLE_RELIABILITY_QOS;

            // Increase default max_blocking_time to 1 second, as our CI infrastructure shows some
            // big CPU overhead sometimes
            puattr.qos.m_reliability.max_blocking_time.seconds = 1;
            puattr.qos.m_reliability.max_blocking_time.nanosec = 0;

            std::ostringstream t;

            t << "ReqRepAsReliableHelloworld_" << asio::ip::host_name() << "_" << GET_PID() << "_" << suffix;

            puattr.topic.topicName = t.str();
        }

        ReqRepAsReliableHelloWorldRequester& durability_kind(const eprosima::fastrtps::DurabilityQosPolicyKind kind)
        {
            puattr.qos.m_durability.kind = kind;
            sattr.qos.m_durability.kind = kind;
            return *this;
        }
};

#endif // _TEST_BLACKBOX_REQREPASRELIABLEHELLOWORLDREQUESTER_HPP_
