

#include <fastrtps/rtps/common/PortParameters.h>

#include <climits>
#include <gtest/gtest.h>

using namespace eprosima::fastrtps::rtps;

/*!
 * @fn TEST(PortParameters, Limit_Unicast_Domain_OK)
 * @brief This test checks the maximum valid domain with default parameters.
 */
TEST(PortParameters, Limit_Unicast_Domain_OK)
{
    PortParameters params;

    uint32_t port = params.getUnicastPort(232, 0);

    ASSERT_TRUE(port > 0);
}

/*!
 * @fn TEST(PortParameters, Limit_Unicast_Domain_Participant_OK)
 * @brief This test checks the maximum valid domain + participant with default parameters.
 */
TEST(PortParameters, Limit_Unicast_Domain_Participant_OK)
{
    PortParameters params;

    uint32_t port = params.getUnicastPort(232, 62);

    ASSERT_TRUE(port > 0);
}

/*!
 * @fn TEST(PortParametersDeathTest, Limit_Unicast_Domain_FAIL)
 * @brief This test checks the minimum invalid domain with default parameters.
 */
TEST(PortParametersDeathTest, Limit_Unicast_Domain_FAIL)
{
    PortParameters params;
    ASSERT_EXIT( { params.getUnicastPort(233, 0); }, ::testing::ExitedWithCode(EXIT_FAILURE), "");
}

/*!
 * @fn TEST(PortParametersDeathTest, Limit_Unicast_Domain_Participant_FAIL)
 * @brief This test checks the minimum invalid domain+participant with default parameters.
 */
TEST(PortParametersDeathTest, Limit_Unicast_Domain_Participant_FAIL)
{
    PortParameters params;
    ASSERT_EXIT( { params.getUnicastPort(232, 63); }, ::testing::ExitedWithCode(EXIT_FAILURE), "");
}

/*!
 * @fn TEST(PortParameters, Limit_Multicast_Domain_OK)
 * @brief This test checks the maximum valid domain with default parameters.
 */
TEST(PortParameters, Limit_Multicast_Domain_OK)
{
    PortParameters params;

    uint32_t port = params.getMulticastPort(232);

    ASSERT_TRUE(port > 0);
}

/*!
 * @fn TEST(PortParametersDeathTest, Limit_Multicast_Domain_FAIL)
 * @brief This test checks the minimum invalid domain with default parameters.
 */
TEST(PortParametersDeathTest, Limit_Multicast_Domain_FAIL)
{
    PortParameters params;
    ASSERT_EXIT( { params.getMulticastPort(233); }, ::testing::ExitedWithCode(EXIT_FAILURE), "");
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
