

#ifndef _TEST_RTPS_RESOURCES_TIMEDEVENT_MOCKEVENT_H_
#define  _TEST_RTPS_RESOURCES_TIMEDEVENT_MOCKEVENT_H_

#include <fastrtps/rtps/resources/TimedEvent.h>

#include <atomic>
#include <condition_variable>
#include <asio.hpp>
#include <thread>

class MockEvent
{
public:

    MockEvent(
            eprosima::fastrtps::rtps::ResourceEvent& service,
            double milliseconds,
            bool autorestart,
            std::function<void()> inner_callback = {});

    virtual ~MockEvent();

    eprosima::fastrtps::rtps::TimedEvent& event()
    {
        return event_;
    }

    bool callback();

    void wait();

    void wait_success();

    bool wait(
            unsigned int milliseconds);

    std::atomic<int> successed_;

private:

    int sem_count_;
    std::mutex sem_mutex_;
    std::condition_variable sem_cond_;
    bool autorestart_;
    std::function<void()> inner_callback_;
    eprosima::fastrtps::rtps::TimedEvent event_;
};

#endif // _TEST_RTPS_RESOURCES_TIMEDEVENT_MOCKEVENT_H_
