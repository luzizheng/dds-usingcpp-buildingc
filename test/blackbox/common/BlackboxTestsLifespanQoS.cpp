#include "BlackboxTests.hpp"

#include "../api/dds-pim/PubSubReader.hpp"
#include "../api/dds-pim/PubSubWriter.hpp"
#include "../api/dds-pim/ReqRepAsReliableHelloWorldRequester.hpp"
#include "../api/dds-pim/ReqRepAsReliableHelloWorldReplier.hpp"

#include <gtest/gtest.h>

#include <fastrtps/utils/TimeConversion.h>
#include <fastrtps/xmlparser//XMLProfileManager.h>

using namespace eprosima::fastrtps;
using namespace eprosima::fastrtps::rtps;

enum communication_type
{
    TRANSPORT,
    INTRAPROCESS,
    DATASHARING
};

class LifespanQos : public testing::TestWithParam<communication_type>
{
public:

    void SetUp() override
    {
        LibrarySettingsAttributes library_settings;
        switch (GetParam())
        {
            case INTRAPROCESS:
                library_settings.intraprocess_delivery = IntraprocessDeliveryType::INTRAPROCESS_FULL;
                xmlparser::XMLProfileManager::library_settings(library_settings);
                break;
            case DATASHARING:
                enable_datasharing = true;
                break;
            case TRANSPORT:
            default:
                break;
        }
    }

    void TearDown() override
    {
        LibrarySettingsAttributes library_settings;
        switch (GetParam())
        {
            case INTRAPROCESS:
                library_settings.intraprocess_delivery = IntraprocessDeliveryType::INTRAPROCESS_OFF;
                xmlparser::XMLProfileManager::library_settings(library_settings);
                break;
            case DATASHARING:
                enable_datasharing = false;
                break;
            case TRANSPORT:
            default:
                break;
        }
    }

};


TEST_P(LifespanQos, LongLifespan)
{
    // This test sets a long lifespan, makes the writer send a few samples
    // and checks that those changes can be removed from the history
    // as they should not have been removed due to lifespan QoS

    PubSubReader<HelloWorldPubSubType> reader(TEST_TOPIC_NAME, false);
    PubSubWriter<HelloWorldPubSubType> writer(TEST_TOPIC_NAME);

    // Write rate in milliseconds
    uint32_t writer_sleep_ms = 1;
    // Number of samples written by writer
    uint32_t writer_samples = 3;
    // Lifespan period in milliseconds
    uint32_t lifespan_ms = 10000;

    writer.history_kind(eprosima::fastrtps::KEEP_ALL_HISTORY_QOS)
            .lifespan_period(lifespan_ms * 1e-3)
            .init();
    reader.history_kind(eprosima::fastrtps::KEEP_ALL_HISTORY_QOS)
            .reliability(eprosima::fastrtps::RELIABLE_RELIABILITY_QOS)
            .init();

    ASSERT_TRUE(reader.isInitialized());
    ASSERT_TRUE(writer.isInitialized());

    // Wait for discovery.
    writer.wait_discovery();
    reader.wait_discovery();

    auto data = default_helloworld_data_generator(writer_samples);
    auto expected_data = data;
    writer.send(data, writer_sleep_ms);
    ASSERT_TRUE(data.empty());

    reader.startReception(expected_data);
    reader.block_for_at_least(writer_samples);

    // Changes should not have been removed due to lifespan
    // therefore they should still exist in the history and
    // we should be able to remove them manually
    size_t removed_pub = 0;
    writer.remove_all_changes(&removed_pub);
    EXPECT_EQ(removed_pub, writer_samples);

    // On the reader side we should be able to take the data
    HelloWorldPubSubType::type msg;
    for (uint32_t i = 0; i < writer_samples; ++i)
    {
        EXPECT_EQ(reader.take_first_data(&msg), true);
    }
}

TEST_P(LifespanQos, ShortLifespan)
{
    // This test sets a short lifespan, makes the writer send a few samples
    // and checks that those samples cannot be removed from the history as
    // they have been removed by lifespan QoS

    PubSubReader<HelloWorldPubSubType> reader(TEST_TOPIC_NAME);
    PubSubWriter<HelloWorldPubSubType> writer(TEST_TOPIC_NAME);

    // Write rate in milliseconds
    uint32_t writer_sleep_ms = 200;
    // Number of samples written by writer
    uint32_t writer_samples = 3;
    // Lifespan period in milliseconds
    uint32_t lifespan_ms = 1;

    writer.history_kind(eprosima::fastrtps::KEEP_ALL_HISTORY_QOS)
            .lifespan_period(lifespan_ms * 1e-3)
            .init();
    reader.history_kind(eprosima::fastrtps::KEEP_ALL_HISTORY_QOS)
            .lifespan_period(lifespan_ms * 1e-3)
            .init();

    ASSERT_TRUE(reader.isInitialized());
    ASSERT_TRUE(writer.isInitialized());

    // Wait for discovery.
    writer.wait_discovery();
    reader.wait_discovery();

    auto data = default_helloworld_data_generator(writer_samples);
    writer.send(data, writer_sleep_ms);
    ASSERT_TRUE(data.empty());

    // Changes should have been removed from history by lifespan QoS
    // so we should not be able to remove them anymore
    size_t removed_pub = 0;
    writer.remove_all_changes(&removed_pub);
    EXPECT_EQ(removed_pub, 0u);

    // On the reader side we should not be able to take the data
    HelloWorldPubSubType::type msg;
    for (uint32_t i = 0; i < writer_samples; ++i)
    {
        EXPECT_EQ(reader.take_first_data(&msg), false);
    }
}

#ifdef INSTANTIATE_TEST_SUITE_P
#define GTEST_INSTANTIATE_TEST_MACRO(x, y, z, w) INSTANTIATE_TEST_SUITE_P(x, y, z, w)
#else
#define GTEST_INSTANTIATE_TEST_MACRO(x, y, z, w) INSTANTIATE_TEST_CASE_P(x, y, z, w)
#endif // ifdef INSTANTIATE_TEST_SUITE_P

GTEST_INSTANTIATE_TEST_MACRO(LifespanQos,
        LifespanQos,
        testing::Values(TRANSPORT, INTRAPROCESS, DATASHARING),
        [](const testing::TestParamInfo<LifespanQos::ParamType>& info)
        {
            switch (info.param)
            {
                case INTRAPROCESS:
                    return "Intraprocess";
                    break;
                case DATASHARING:
                    return "Datasharing";
                    break;
                case TRANSPORT:
                default:
                    return "Transport";
            }

        });
