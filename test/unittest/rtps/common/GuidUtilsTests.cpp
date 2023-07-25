

#include <fastdds/rtps/common/Guid.h>
#include <rtps/common/GuidUtils.hpp>

#include <climits>
#include <iostream>

#include <gtest/gtest.h>

using GUID_t = eprosima::fastrtps::rtps::GUID_t;
using GuidUtils = eprosima::fastdds::rtps::GuidUtils;

/*!
 * @fn TEST(GuidUtilities, prefix_create)
 * @brief This test checks the GUID prefix generator on the same process.
 */
TEST(GuidUtilities, prefix_create)
{
    GUID_t guid_1;
    GUID_t guid_2;

    // Calling twice with the same participant id should return the same prefix
    GuidUtils::instance().guid_prefix_create(1, guid_1.guidPrefix);
    GuidUtils::instance().guid_prefix_create(1, guid_2.guidPrefix);
    EXPECT_EQ(guid_1.guidPrefix, guid_2.guidPrefix);

    // Calling with a different participant id should return different prefixes but be
    // considered on the same process
    guid_2 = GUID_t::unknown();
    GuidUtils::instance().guid_prefix_create(2, guid_2.guidPrefix);
    EXPECT_NE(guid_1.guidPrefix, guid_2.guidPrefix);
    EXPECT_TRUE(guid_1.is_on_same_process_as(guid_2));
}

int main(
        int argc,
        char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
