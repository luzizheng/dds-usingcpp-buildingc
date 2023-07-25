/*!
 * @file Logging.h
 */
#ifndef _FASTDDS_RTPS_SECURITY_LOGGING_LOGTOPIC_H_
#define _FASTDDS_RTPS_SECURITY_LOGGING_LOGTOPIC_H_

#include <fastdds/rtps/security/logging/Logging.h>
#include <fastdds/rtps/security/logging/BuiltinLoggingType.h>

#include <utils/collections/concurrent_queue.h>

#include <atomic>
#include <fstream>
#include <thread>

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

/**
 * @brief LogTopic
 */
class LogTopic final : public Logging
{
    using BuiltinLoggingTypePtr = std::unique_ptr<BuiltinLoggingType>;

public:

    LogTopic();
    ~LogTopic();

private:

    /**
     * @brief log_impl
     * @param message
     * @param category
     * @param exception
     */
    void log_impl(
            const BuiltinLoggingType& message,
            SecurityException& exception) const override;

    bool enable_logging_impl(
            SecurityException& exception) override;

    void publish(
            BuiltinLoggingType& builtin_msg);

    void stop()
    {
        stop_ = true;
    }

    std::ofstream file_stream_;

    mutable ConcurrentQueue<BuiltinLoggingTypePtr> queue_;

    std::atomic_bool stop_;

    std::thread thread_;
};

} //namespace security
} //namespace rtps
} //namespace fastrtps
} //namespace eprosima

#endif // _FASTDDS_RTPS_SECURITY_LOGGING_LOGTOPIC_H_
