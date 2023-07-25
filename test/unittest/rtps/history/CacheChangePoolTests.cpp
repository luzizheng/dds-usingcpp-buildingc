

#include <gtest/gtest.h>

#include <fastdds/rtps/attributes/HistoryAttributes.h>
#include <fastdds/rtps/common/CacheChange.h>

#include <rtps/history/CacheChangePool.h>

#include <tuple>

using namespace eprosima::fastrtps::rtps;
using namespace ::testing;
using namespace std;

class CacheChangePoolTests : public TestWithParam<tuple<uint32_t, uint32_t, MemoryManagementPolicy_t>>
{
protected:

    CacheChangePoolTests()
        : pool(nullptr)
        , pool_size(10)
        , max_pool_size(0)
        , memory_policy(MemoryManagementPolicy_t::PREALLOCATED_MEMORY_MODE)
    {
    }

    virtual ~CacheChangePoolTests()
    {
    }

    virtual void SetUp()
    {
        pool_size     = get<0>(GetParam());
        max_pool_size = get<1>(GetParam());
        memory_policy = get<2>(GetParam());

        PoolConfig config{ memory_policy, 0, pool_size, max_pool_size };

        pool = new CacheChangePool(config);
    }

    virtual void TearDown()
    {
        delete pool;
    }

    CacheChangePool* pool;

    uint32_t pool_size;
    uint32_t max_pool_size;
    MemoryManagementPolicy_t memory_policy;
};

TEST_P(CacheChangePoolTests, init_pool)
{
    size_t expected_size;
    if (memory_policy == MemoryManagementPolicy_t::DYNAMIC_RESERVE_MEMORY_MODE ||
            memory_policy == MemoryManagementPolicy_t::DYNAMIC_REUSABLE_MEMORY_MODE)
    {
        expected_size = 0;
    }
    else
    {
        expected_size = static_cast<size_t>(pool_size ? pool_size : 1u);
    }

    ASSERT_EQ(pool->get_allCachesSize(), expected_size);
    ASSERT_EQ(pool->get_freeCachesSize(), expected_size);
}

TEST_P(CacheChangePoolTests, reserve_cache)
{
    CacheChange_t* ch = nullptr;

    uint32_t size = static_cast<uint32_t>(pool_size);
    uint32_t max_size = static_cast<uint32_t>(max_pool_size);

    uint32_t num_inserts;
    if (max_size == 0)
    {
        num_inserts = 1000U;
    }
    else if (max_size <= size)
    {
        max_size = size;
        num_inserts = size;
    }
    else // max_size > size
    {
        num_inserts = max_size;
    }

    for (uint32_t i = 0; i < num_inserts; i++)
    {
        ASSERT_TRUE(pool->reserve_cache(ch));
        ASSERT_GE(pool->get_freeCachesSize(), 0U);

        if (max_size > 0)
        {
            ASSERT_LE(pool->get_allCachesSize(), max_size);
        }
    }

    if (max_size == 0)
    {
        ASSERT_TRUE(pool->reserve_cache(ch));
    }
    else
    {
        ASSERT_FALSE(pool->reserve_cache(ch));
    }
}

TEST_P(CacheChangePoolTests, release_cache)
{
    CacheChange_t* ch = nullptr;

    uint32_t num_inserts = 10;
    for (uint32_t i = 0; i < num_inserts; i++)
    {
        size_t all_caches_size = pool->get_allCachesSize();
        size_t free_caches_size = pool->get_freeCachesSize();

        pool->reserve_cache(ch);

        if (memory_policy == MemoryManagementPolicy_t::DYNAMIC_RESERVE_MEMORY_MODE ||
                memory_policy == MemoryManagementPolicy_t::DYNAMIC_REUSABLE_MEMORY_MODE)
        {
            ASSERT_EQ(pool->get_allCachesSize(), 1U);
            ASSERT_EQ(pool->get_freeCachesSize(), 0U);
        }
        else
        {
            ASSERT_EQ(pool->get_allCachesSize(), all_caches_size);
            ASSERT_EQ(pool->get_freeCachesSize(), free_caches_size - 1U);
        }

        pool->release_cache(ch);

        if (memory_policy == MemoryManagementPolicy_t::DYNAMIC_RESERVE_MEMORY_MODE)
        {
            ASSERT_EQ(pool->get_allCachesSize(), 0U);
            ASSERT_EQ(pool->get_freeCachesSize(), 0U);
        }
        else if (memory_policy == MemoryManagementPolicy_t::DYNAMIC_REUSABLE_MEMORY_MODE)
        {
            ASSERT_EQ(pool->get_allCachesSize(), 1U);
            ASSERT_EQ(pool->get_freeCachesSize(), 1U);
        }
        else
        {
            ASSERT_EQ(pool->get_allCachesSize(), all_caches_size);
            ASSERT_EQ(pool->get_freeCachesSize(), free_caches_size);
        }
    }
}

TEST_P(CacheChangePoolTests, change_reset_on_release)
{
    CacheChange_t* ch = nullptr;

    pool->reserve_cache(ch);

    // Check that cache change is initilized
    ASSERT_EQ(ch->kind, ALIVE);
    ASSERT_EQ(ch->sequenceNumber.high, 0);
    ASSERT_EQ(ch->sequenceNumber.low, 0U);
    ASSERT_EQ(ch->writerGUID, c_Guid_Unknown);
    ASSERT_FALSE(ch->instanceHandle.isDefined());
    for (uint8_t i = 0; i < 16; ++i)
    {
        ASSERT_EQ(ch->instanceHandle.value[i], 0U);
    }

    ASSERT_FALSE(ch->isRead);
    ASSERT_EQ(ch->sourceTimestamp.seconds(), 0);
    ASSERT_EQ(ch->sourceTimestamp.fraction(), 0U);

    // Modify cache change
    ch->kind = NOT_ALIVE_DISPOSED;
    ch->sequenceNumber.high = 1;
    ch->sequenceNumber.low = 1;
    ch->writerGUID = GUID_t(GuidPrefix_t::unknown(), 1);
    for (uint8_t i = 0; i < 16; ++i)
    {
        ch->instanceHandle.value[i] = 1;
    }
    ASSERT_TRUE(ch->instanceHandle.isDefined());
    ch->isRead = true;
    ch->sourceTimestamp.seconds(1);
    ch->sourceTimestamp.fraction(1);

    pool->release_cache(ch);

    if (memory_policy != MemoryManagementPolicy_t::DYNAMIC_RESERVE_MEMORY_MODE)
    {
        // Check that cache change is initialized again
        ASSERT_EQ(ch->kind, ALIVE);
        ASSERT_EQ(ch->sequenceNumber.high, 0);
        ASSERT_EQ(ch->sequenceNumber.low, 0U);
        ASSERT_EQ(ch->writerGUID, c_Guid_Unknown);
        ASSERT_FALSE(ch->instanceHandle.isDefined());
        for (uint8_t i = 0; i < 16; ++i)
        {
            ASSERT_EQ(ch->instanceHandle.value[i], 0U);
        }

        ASSERT_FALSE(ch->isRead);
        ASSERT_EQ(ch->sourceTimestamp.seconds(), 0);
        ASSERT_EQ(ch->sourceTimestamp.fraction(), 0U);
    }
}

#ifdef INSTANTIATE_TEST_SUITE_P
#define GTEST_INSTANTIATE_TEST_MACRO(x, y, z) INSTANTIATE_TEST_SUITE_P(x, y, z)
#else
#define GTEST_INSTANTIATE_TEST_MACRO(x, y, z) INSTANTIATE_TEST_CASE_P(x, y, z, )
#endif // ifdef INSTANTIATE_TEST_SUITE_P

GTEST_INSTANTIATE_TEST_MACRO(
    CacheChangePoolTests,
    CacheChangePoolTests,
    Combine(Values(0, 10, 20, 30),
    Values(0, 10, 20, 30),
    Values(MemoryManagementPolicy_t::PREALLOCATED_MEMORY_MODE,
    MemoryManagementPolicy_t::PREALLOCATED_WITH_REALLOC_MEMORY_MODE,
    MemoryManagementPolicy_t::DYNAMIC_RESERVE_MEMORY_MODE,
    MemoryManagementPolicy_t::DYNAMIC_REUSABLE_MEMORY_MODE))
    );

int main(
        int argc,
        char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
