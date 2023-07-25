

/**
 * @file ReaderHistoryState.hpp
 */

#ifndef FASTRTPS_RTPS_READER_READERHISTORYSTATE_HPP_
#define FASTRTPS_RTPS_READER_READERHISTORYSTATE_HPP_

#include <fastdds/rtps/common/Guid.h>
#include <fastdds/rtps/common/SequenceNumber.h>

#include <foonathan/memory/container.hpp>
#include <foonathan/memory/memory_pool.hpp>

#include "utils/collections/node_size_helpers.hpp"

#include <map>

namespace eprosima {
namespace fastrtps {
namespace rtps {

using guid_map_helper = utilities::collections::map_size_helper<GUID_t, GUID_t>;
using guid_count_helper = utilities::collections::map_size_helper<GUID_t, uint16_t>;
using history_record_helper = utilities::collections::map_size_helper<GUID_t, SequenceNumber_t>;

/**
 * Class RTPSReader, manages the reception of data from its matched writers.
 * @ingroup READER_MODULE
 */
struct ReaderHistoryState
{
    using pool_allocator_t =
            foonathan::memory::memory_pool<foonathan::memory::node_pool, foonathan::memory::heap_allocator>;

    explicit ReaderHistoryState(
            size_t initial_writers_allocation)
        : persistence_guid_map_allocator(
            guid_map_helper::node_size,
            guid_map_helper::min_pool_size<pool_allocator_t>(initial_writers_allocation))
        , persistence_guid_count_allocator(
            guid_count_helper::node_size,
            guid_count_helper::min_pool_size<pool_allocator_t>(initial_writers_allocation))
        , history_record_allocator(
            history_record_helper::node_size,
            history_record_helper::min_pool_size<pool_allocator_t>(initial_writers_allocation))
        , persistence_guid_map(persistence_guid_map_allocator)
        , persistence_guid_count(persistence_guid_count_allocator)
        , history_record(history_record_allocator)
    {
    }

    pool_allocator_t persistence_guid_map_allocator;
    pool_allocator_t persistence_guid_count_allocator;
    pool_allocator_t history_record_allocator;

    //!Physical GUID to persistence GUID map
    foonathan::memory::map<GUID_t, GUID_t, pool_allocator_t> persistence_guid_map;
    //!Persistence GUID count map
    foonathan::memory::map<GUID_t, uint16_t, pool_allocator_t> persistence_guid_count;
    //!Information about max notified change
    foonathan::memory::map<GUID_t, SequenceNumber_t, pool_allocator_t> history_record;
};

} /* namespace rtps */
} /* namespace fastrtps */
} /* namespace eprosima */

#endif /* FASTRTPS_RTPS_READER_READERHISTORYSTATE_HPP_ */
