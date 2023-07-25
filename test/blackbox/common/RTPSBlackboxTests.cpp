#include "BlackboxTests.hpp"

#include "RTPSAsSocketReader.hpp"
#include "RTPSAsSocketWriter.hpp"
#include "RTPSWithRegistrationReader.hpp"
#include "RTPSWithRegistrationWriter.hpp"

#include <gtest/gtest.h>

#include <fastrtps/rtps/RTPSDomain.h>
#include <fastrtps/xmlparser/XMLProfileManager.h>
#include <fastdds/dds/log/Log.hpp>

#include <thread>
#include <memory>
#include <cstdlib>
#include <string>

using namespace eprosima::fastrtps;
using namespace eprosima::fastrtps::rtps;

//#define cout "Use Log instead!"

uint16_t global_port = 0;
//bool enable_datasharing;

uint16_t get_port()
{
    uint16_t port = static_cast<uint16_t>(GET_PID());

    if (5000 > port)
    {
        port += 5000;
    }

    std::cout << "Generating port " << port << std::endl;
    return port;
}

class BlackboxEnvironment : public ::testing::Environment
{
public:

    void SetUp()
    {
        global_port = get_port();

        // Blackbox tests were designed with the assumption that intraprocess
        // and datasharing are both disabled. Most of them use TEST_P in order to
        // test with and without intraprocess and datasharing, but those who test
        // conditions related to network packets being lost should not use intraprocessr
        // nor datasharing. Setting it off here ensures that intraprocess and
        // datasharing are only tested when required.
        LibrarySettingsAttributes att;
        att.intraprocess_delivery = INTRAPROCESS_OFF;
        eprosima::fastrtps::xmlparser::XMLProfileManager::library_settings(att);
        //enable_datasharing = false;

        //Log::SetVerbosity(eprosima::fastdds::dds::Log::Info);
        //Log::SetCategoryFilter(std::regex("(SECURITY)"));
    }

    void TearDown()
    {
        //Log::Reset();
        eprosima::fastdds::dds::Log::KillThread();
        eprosima::fastrtps::rtps::RTPSDomain::stopAll();
    }

};

int main(
        int argc,
        char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    testing::AddGlobalTestEnvironment(new BlackboxEnvironment);

    return RUN_ALL_TESTS();
}
