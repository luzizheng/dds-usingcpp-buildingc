

#include <iostream>
#include <algorithm>
#include "CryptographyPluginTests.hpp"
#include "security/OpenSSLInit.hpp"

TEST_F(CryptographyPluginTest, mocktest){
    static eprosima::fastrtps::rtps::security::OpenSSLInit openssl_init;
    uint8_t mock = 7;

    ASSERT_TRUE(mock == 7);

}

int main(
        int argc,
        char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
