

#ifndef _FASTDDS_CHANNEL_RESOURCE_INFO_
#define _FASTDDS_CHANNEL_RESOURCE_INFO_

#include <memory>
#include <map>
#include <fastdds/dds/log/Log.hpp>
#include <fastdds/rtps/common/CDRMessage_t.h>

namespace eprosima {
namespace fastdds {
namespace rtps {

class ChannelResource
{
public:

    ChannelResource();
    ChannelResource(
            ChannelResource&& channelResource);
    ChannelResource(
            uint32_t rec_buffer_size);
    virtual ~ChannelResource();

    virtual void clear();

    inline void thread(
            std::thread&& pThread)
    {
        if (thread_.joinable())
        {
            thread_.join();
        }

        thread_.swap(pThread);
    }

    inline bool alive() const
    {
        return alive_.load();
    }

    inline virtual void disable()
    {
        alive_.store(false);
    }

    inline fastrtps::rtps::CDRMessage_t& message_buffer()
    {
        return message_buffer_;
    }

protected:

    //!Received message
    fastrtps::rtps::CDRMessage_t message_buffer_;

    std::atomic<bool> alive_;
    std::thread thread_;
};

} // namespace rtps
} // namespace fastdds
} // namespace eprosima

#endif // _FASTDDS_CHANNEL_RESOURCE_INFO_
