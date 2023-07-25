#include "BlackboxTests.hpp"

#include "../api/dds-pim/ReqRepHelloWorldRequester.hpp"

#include <gtest/gtest.h>

TEST(LatencyBudgetQos, DurationCheck)
{
    ReqRepHelloWorldRequester requester;

    eprosima::fastrtps::Duration_t latency_budget_pub(10);
    eprosima::fastrtps::Duration_t latency_budget_sub(20);

    requester.init_with_latency(latency_budget_pub, latency_budget_sub);

    ASSERT_TRUE(requester.isInitialized());

    EXPECT_EQ(requester.datawriter_latency_budget_duration(), latency_budget_pub);
    EXPECT_EQ(requester.datareader_latency_budget_duration(), latency_budget_sub);
}
