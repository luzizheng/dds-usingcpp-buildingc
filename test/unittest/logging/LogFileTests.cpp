
//

#include <fastdds/dds/log/Log.hpp>
#include <fastdds/dds/log/FileConsumer.hpp>
#include <gtest/gtest.h>
#include <memory>
#include <thread>
#include <chrono>
#include <sstream>

using namespace eprosima::fastdds::dds;
using namespace std;

TEST(LogFileTests, file_consumer)
{
    // First remove previous executions file
    std::remove("file_consumer.log");

    Log::ClearConsumers();
    Log::RegisterConsumer(std::unique_ptr<LogConsumer>(new FileConsumer("file_consumer.log")));
    Log::SetVerbosity(Log::Info);

    vector<unique_ptr<thread>> threads;
    for (int i = 0; i != 5; i++)
    {
        threads.emplace_back(new thread([i]
                {
                    EPROSIMA_LOG_WARNING(Multithread, "I'm thread " << std::to_string(i));
                }));
    }

    for (auto& thread: threads)
    {
        thread->join();
    }

    Log::ClearConsumers(); // Force close file

    std::ifstream ifs("file_consumer.log");
    std::string content((std::istreambuf_iterator<char>(ifs)),
            (std::istreambuf_iterator<char>()));

    for (int i = 0; i != 5; ++i)
    {
        std::string str("I'm thread " + std::to_string(i));
        std::size_t found = content.find(str);
        ASSERT_TRUE(found != std::string::npos);
    }
}

TEST(LogFileTests, file_consumer_append)
{
    // First remove previous executions file
    std::remove("append.log");

    Log::ClearConsumers();
    Log::RegisterConsumer(std::unique_ptr<LogConsumer>(new FileConsumer("append.log", true)));
    Log::SetVerbosity(Log::Info);

    vector<unique_ptr<thread>> threads;
    for (int i = 0; i != 5; i++)
    {
        threads.emplace_back(new thread([i]
                {
                    EPROSIMA_LOG_WARNING(Multithread, "I'm thread " << std::to_string(i));
                }));
    }

    for (auto& thread: threads)
    {
        thread->join();
    }

    Log::ClearConsumers(); // Force close file

    Log::RegisterConsumer(std::unique_ptr<LogConsumer>(new FileConsumer("append.log", true)));

    vector<unique_ptr<thread>> threads2;
    for (int i = 0; i != 5; i++)
    {
        threads2.emplace_back(new thread([i]
                {
                    EPROSIMA_LOG_WARNING(Multithread, "I'm thread " << std::to_string(i + 5));
                }));
    }

    for (auto& thread: threads2)
    {
        thread->join();
    }

    Log::ClearConsumers(); // Force close file

    std::ifstream ifs("append.log");
    std::string content((std::istreambuf_iterator<char>(ifs)),
            (std::istreambuf_iterator<char>()));

    for (int i = 0; i != 10; ++i)
    {
        std::string str("I'm thread " + std::to_string(i));
        std::size_t found = content.find(str);
        ASSERT_TRUE(found != std::string::npos);
    }
}

int main(
        int argc,
        char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
