/**
 * @file ReqRepHelloWorldReplier.cpp
 *
 */

#include "ReqRepHelloWorldReplier.hpp"

#include <fastrtps/Domain.h>
#include <fastrtps/participant/Participant.h>
#include <fastrtps/attributes/ParticipantAttributes.h>

#include <fastrtps/subscriber/Subscriber.h>
#include <fastrtps/subscriber/SampleInfo.h>

#include <fastrtps/publisher/Publisher.h>

#include <gtest/gtest.h>

using namespace eprosima::fastrtps;
using namespace eprosima::fastrtps::rtps;

ReqRepHelloWorldReplier::ReqRepHelloWorldReplier()
    : request_listener_(*this)
    , reply_listener_(*this)
    , participant_(nullptr)
    , request_subscriber_(nullptr)
    , reply_publisher_(nullptr)
    , initialized_(false)
    , matched_(0)
{
    // By default, memory mode is PREALLOCATED_WITH_REALLOC_MEMORY_MODE
    sattr.historyMemoryPolicy = PREALLOCATED_WITH_REALLOC_MEMORY_MODE;
    puattr.historyMemoryPolicy = PREALLOCATED_WITH_REALLOC_MEMORY_MODE;
}

ReqRepHelloWorldReplier::~ReqRepHelloWorldReplier()
{
    if (participant_ != nullptr)
    {
        Domain::removeParticipant(participant_);
    }
}

void ReqRepHelloWorldReplier::init()
{
    ParticipantAttributes pattr;
    pattr.domainId = (uint32_t)GET_PID() % 230;
    participant_ = Domain::createParticipant(pattr);
    ASSERT_NE(participant_, nullptr);

    // Register type
    ASSERT_EQ(Domain::registerType(participant_, &type_), true);

    //Create subscriber
    sattr.topic.topicKind = NO_KEY;
    sattr.topic.topicDataType = type_.getName();
    configSubscriber("Request");
    request_subscriber_ = Domain::createSubscriber(participant_, sattr, &request_listener_);
    ASSERT_NE(request_subscriber_, nullptr);

    //Create publisher
    puattr.topic.topicKind = NO_KEY;
    puattr.topic.topicDataType = type_.getName();
    puattr.topic.topicName = "HelloWorldTopicReply";
    configPublisher("Reply");
    reply_publisher_ = Domain::createPublisher(participant_, puattr, &reply_listener_);
    ASSERT_NE(reply_publisher_, nullptr);

    initialized_ = true;
}

void ReqRepHelloWorldReplier::newNumber(
        SampleIdentity sample_identity,
        uint16_t number)
{
    WriteParams wparams;
    HelloWorld hello;
    hello.index(number);
    hello.message("GoodBye");
    wparams.related_sample_identity(sample_identity);
    ASSERT_EQ(reply_publisher_->write((void*)&hello, wparams), true);
}

void ReqRepHelloWorldReplier::wait_discovery()
{
    std::unique_lock<std::mutex> lock(mutexDiscovery_);

    std::cout << "Replier is waiting discovery..." << std::endl;

    cvDiscovery_.wait(lock, [&]()
            {
                return matched_ > 1;
            });

    std::cout << "Replier discovery finished..." << std::endl;
}

void ReqRepHelloWorldReplier::matched()
{
    std::unique_lock<std::mutex> lock(mutexDiscovery_);
    ++matched_;
    if (matched_ > 1)
    {
        cvDiscovery_.notify_one();
    }
}

void ReqRepHelloWorldReplier::ReplyListener::onNewDataMessage(
        Subscriber* sub)
{
    ASSERT_NE(sub, nullptr);

    HelloWorld hello;
    SampleInfo_t info;

    if (sub->takeNextData((void*)&hello, &info))
    {
        if (info.sampleKind == ALIVE)
        {
            ASSERT_EQ(hello.message().compare("HelloWorld"), 0);
            replier_.newNumber(info.sample_identity, hello.index());
        }
    }
}
