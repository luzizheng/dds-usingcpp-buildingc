

#ifndef _FASTDDS_DDS_LOG_STDOUTCONSUMER_HPP_
#define _FASTDDS_DDS_LOG_STDOUTCONSUMER_HPP_

#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/log/OStreamConsumer.hpp>

namespace eprosima {
namespace fastdds {
namespace dds {

class StdoutConsumer : public OStreamConsumer
{
public:

    virtual ~StdoutConsumer() = default;

private:

    /** \internal
     * Called by Log consume to get the correct stream
     * @param Log::Entry to consume.
     */
    RTPS_DllAPI virtual std::ostream& get_stream(
            const Log::Entry& entry) override;
};

} // namespace dds
} // namespace fastdds
} // namespace eprosima

#endif // ifndef _FASTDDS_DDS_LOG_STDOUTCONSUMER_HPP_
