

/**
 * @file FileConsumer.hpp
 *
 */

#ifndef _FASTDDS_DDS_LOG_FILECONSUMER_HPP_
#define _FASTDDS_DDS_LOG_FILECONSUMER_HPP_

#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/log/OStreamConsumer.hpp>

#include <fstream>

namespace eprosima {
namespace fastdds {
namespace dds {

/**
 * Log consumer that writes the log events to a file.
 *
 * @file FileConsumer.hpp
 */
class FileConsumer : public OStreamConsumer
{
public:

    //! Default constructor: filename = "output.log", append = false.
    RTPS_DllAPI FileConsumer();

    /** Constructor with parameters.
     * @param filename path of the output file where the log will be wrote.
     * @param append indicates if the consumer must append the content in the filename.
     */
    RTPS_DllAPI FileConsumer(
            const std::string& filename,
            bool append = false);

    virtual ~FileConsumer();

private:

    /** \internal
     * Called by Log consume to get the correct stream
     * @param entry Log::Entry to consume.
     */
    RTPS_DllAPI virtual std::ostream& get_stream(
            const Log::Entry& entry) override;

    std::string output_file_;
    std::ofstream file_;
    bool append_;
};

} // namespace dds
} // namespace fastdds
} // namespace eprosima

#endif // _FASTDDS_DDS_LOG_FILECONSUMER_HPP_
