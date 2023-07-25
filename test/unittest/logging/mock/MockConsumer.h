
//
#ifndef MOCK_LOG_CONSUMER_H
#define MOCK_LOG_CONSUMER_H

#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/log/StdoutConsumer.hpp>
#include <thread>
#include <mutex>
#include <vector>
#include <condition_variable>

namespace eprosima {
namespace fastdds {
namespace dds {

class MockConsumer : public StdoutConsumer
{
public:

    MockConsumer()
    {
    }

    MockConsumer(
            const char* category_name)
    {
        category = category_name;
    }

    virtual void Consume(
            const Log::Entry& entry)
    {
        if (category.empty() || entry.context.category == category)
        {
            std::unique_lock<std::mutex> guard(mMutex);
            mEntriesConsumed.push_back(entry);
            cv_.notify_all();
        }
        StdoutConsumer::Consume(entry);
    }

    const std::vector<Log::Entry> ConsumedEntries() const
    {
        std::unique_lock<std::mutex> guard(mMutex);
        return mEntriesConsumed;
    }

    template<typename Pred>
    void wait(
            Pred pred)
    {
        std::unique_lock<std::mutex> lock(mMutex);
        cv_.wait(lock, pred);
    }

    void wait_for_at_least_entries(
            size_t num_entries)
    {
        return wait([this, num_entries]() -> bool
                       {
                           return mEntriesConsumed.size() >= num_entries;
                       });
    }

    void clear_entries()
    {
        std::unique_lock<std::mutex> guard(mMutex);
        mEntriesConsumed.clear();
        cv_.notify_all();
    }

private:

    std::string category;
    std::vector<Log::Entry> mEntriesConsumed;
    mutable std::mutex mMutex;
    std::condition_variable cv_;
};

} // namespace dds
} // namespace fastdds
} // namespace eprosima

#endif // ifndef MOCK_LOG_CONSUMER_H
