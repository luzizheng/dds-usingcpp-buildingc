

/**
 * @file HistoryAttributes.h
 *
 */

#ifndef _FASTDDS_HISTORYATTRIBUTES_H_
#define _FASTDDS_HISTORYATTRIBUTES_H_

#include <fastdds/rtps/resources/ResourceManagement.h>
#include <fastrtps/fastrtps_dll.h>

#include <cstdint>

namespace eprosima {
namespace fastrtps {
namespace rtps {

/**
 * Class HistoryAttributes, to specify the attributes of a WriterHistory or a ReaderHistory.
 * This class is only intended to be used with the RTPS API.
 * The Publisher-Subscriber API has other fields to define this values (HistoryQosPolicy and ResourceLimitsQosPolicy).
 * @ingroup RTPS_ATTRIBUTES_MODULE
 */
class RTPS_DllAPI HistoryAttributes
{
public:

    //!Memory management policy.
    MemoryManagementPolicy_t memoryPolicy;

    //!Maximum payload size of the history, default value 500.
    uint32_t payloadMaxSize;

    //!Number of the initial Reserved Caches, default value 500.
    int32_t initialReservedCaches;

    /**
     * Maximum number of reserved caches. Default value is 0 that indicates to keep reserving until something
     * breaks.
     */
    int32_t maximumReservedCaches;

    /**
     * Number of extra caches that can be reserved for other purposes than the history.
     * For example, on a full history, the writer could give as many as these to be used by the application
     * but they will not be able to be inserted in the history unless some cache from the history is released.
     *
     * Default value is 1.
     */
    int32_t extraReservedCaches;

    //! Default constructor
    HistoryAttributes()
        : memoryPolicy(PREALLOCATED_WITH_REALLOC_MEMORY_MODE)
        , payloadMaxSize(500)
        , initialReservedCaches(500)
        , maximumReservedCaches(0)
        , extraReservedCaches(1)
    {
    }

    /** Constructor
     * @param memoryPolicy Set whether memory can be dynamically reallocated or not
     * @param payload Maximum payload size. It is used when memory management policy is
     * PREALLOCATED_MEMORY_MODE or PREALLOCATED_WITH_REALLOC_MEMORY_MODE.
     * @param initial Initial reserved caches. It is used when memory management policy is
     * PREALLOCATED_MEMORY_MODE or PREALLOCATED_WITH_REALLOC_MEMORY_MODE.
     * @param maxRes Maximum reserved caches.
     */
    HistoryAttributes(
            MemoryManagementPolicy_t memoryPolicy,
            uint32_t payload,
            int32_t initial,
            int32_t maxRes)
        : memoryPolicy(memoryPolicy)
        , payloadMaxSize(payload)
        , initialReservedCaches(initial)
        , maximumReservedCaches(maxRes)
        , extraReservedCaches(1)
    {
    }

    /** Constructor
     * @param memoryPolicy Set whether memory can be dynamically reallocated or not
     * @param payload Maximum payload size. It is used when memory management policy is
     * PREALLOCATED_MEMORY_MODE or PREALLOCATED_WITH_REALLOC_MEMORY_MODE.
     * @param initial Initial reserved caches. It is used when memory management policy is
     * PREALLOCATED_MEMORY_MODE or PREALLOCATED_WITH_REALLOC_MEMORY_MODE.
     * @param maxRes Maximum reserved caches.
     * @param extra Extra reserved caches.
     */
    HistoryAttributes(
            MemoryManagementPolicy_t memoryPolicy,
            uint32_t payload,
            int32_t initial,
            int32_t maxRes,
            int32_t extra)
        : memoryPolicy(memoryPolicy)
        , payloadMaxSize(payload)
        , initialReservedCaches(initial)
        , maximumReservedCaches(maxRes)
        , extraReservedCaches(extra)
    {
    }

    virtual ~HistoryAttributes()
    {
    }

};

} // namespace rtps
} // namespace fastrtps
} // namespace eprosima

#endif /* _FASTDDS_HISTORYATTRIBUTES_H_ */
