/**
 * @file AdvancedConfigurationPublisher.h
 *
 */

#ifndef _EPROSIMA_FASTDDS_EXAMPLES_CPP_DDS_ADVANCEDCONFIGURATIONEXAMPLE_ADVANCEDCONFIGURATIONPUBLISHER_H_
#define _EPROSIMA_FASTDDS_EXAMPLES_CPP_DDS_ADVANCEDCONFIGURATIONEXAMPLE_ADVANCEDCONFIGURATIONPUBLISHER_H_

#include <atomic>
#include <condition_variable>
#include <mutex>

#include <fastdds/dds/domain/DomainParticipant.hpp>
#include <fastdds/dds/publisher/DataWriterListener.hpp>
#include <fastdds/dds/topic/TypeSupport.hpp>

#include "HelloWorldPubSubTypes.h"
#include "types.hpp"


// 用于将具有 DataWriter、其Listener和与 HelloWorld 数据类型对应的 TypeSupport 成员的publisher分组到单个工作单元中的类
class HelloWorldPublisher
{
public:

    HelloWorldPublisher();

    virtual ~HelloWorldPublisher();

    //! Initialize the publisher
    bool init(
            const std::string& topic_name,
            uint32_t domain,
            uint32_t num_wait_matched,
            bool async,
            TransportType transport,
            bool reliable,
            bool transient,
            int hops,
            const std::string& partitions,
            bool use_ownership,
            unsigned int ownership_strength,
            const std::string& profile);

    //! Publish a sample
    void publish();

    //! Run for number samples, publish every sleep seconds
    void run(
            uint32_t number,
            uint32_t sleep);

    //! Return the current state of execution
    static bool is_stopped();

    //! Trigger the end of execution
    static void stop();

private:

    HelloWorld hello_;

    eprosima::fastdds::dds::DomainParticipant* participant_;

    eprosima::fastdds::dds::Publisher* publisher_;

    eprosima::fastdds::dds::Topic* topic_;

    eprosima::fastdds::dds::DataWriter* writer_;

    eprosima::fastdds::dds::TypeSupport type_;

    /**
     * Class handling discovery events and dataflow
     */
    class PubListener : public eprosima::fastdds::dds::DataWriterListener
    {
    public:

        PubListener()
            : matched_(0)
            , num_wait_matched_(0)
        {
        }

        ~PubListener() override
        {
        }

        //! Callback executed when a DataReader is matched or unmatched
        void on_publication_matched(
                eprosima::fastdds::dds::DataWriter* writer,
                const eprosima::fastdds::dds::PublicationMatchedStatus& info) override;

        //! Set the number of matched DataReaders required for publishing
        void set_num_wait_matched(
                uint32_t num_wait_matched);

        //! Return true if there are at least num_wait_matched_ matched DataReaders
        bool enough_matched();

        //! Block the thread until enough DataReaders are matched
        void wait();

        //! Unblock the thread so publication of samples begins/resumes
        static void awake();

    private:

        //! Number of DataReaders matched to the associated DataWriter
        std::atomic<std::uint32_t> matched_;

        //! Number of matched DataReaders required for publishing
        uint32_t num_wait_matched_;

        //! Protects wait_matched condition variable
        static std::mutex wait_matched_cv_mtx_;

        //! Waits until enough DataReaders are matched
        static std::condition_variable wait_matched_cv_;
    }
    listener_;

    //! Run thread for number samples, publish every sleep seconds
    void runThread(
            uint32_t number,
            uint32_t sleep);

    //! Member used for control flow purposes
    static std::atomic<bool> stop_;
};



#endif /* _EPROSIMA_FASTDDS_EXAMPLES_CPP_DDS_ADVANCEDCONFIGURATIONEXAMPLE_ADVANCEDCONFIGURATIONPUBLISHER_H_ */
