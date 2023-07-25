

/**
 * @file SampleRejectedStatus.hpp
 */

#ifndef _FASTDDS_DDS_QOS_SAMPLEREJECTEDSTATUS_HPP_
#define _FASTDDS_DDS_QOS_SAMPLEREJECTEDSTATUS_HPP_

#include <cstdint>

#include <fastdds/dds/topic/TypeSupport.hpp>
#include <fastdds/dds/common/InstanceHandle.hpp>

namespace eprosima {
namespace fastdds {
namespace dds {

//! An enum with the possible values for the sample rejected reason
enum SampleRejectedStatusKind
{
    //!Default value
    NOT_REJECTED,
    //! Exceeds the max_instance limit
    REJECTED_BY_INSTANCES_LIMIT,
    //! Exceeds the max_samples limit
    REJECTED_BY_SAMPLES_LIMIT,
    //! Exceeds the max_samples_per_instance limit
    REJECTED_BY_SAMPLES_PER_INSTANCE_LIMIT
};

//! @brief A struct storing the sample rejected status
struct SampleRejectedStatus
{
    /**
     * Total cumulative count of samples rejected by the DataReader.
     */
    uint32_t total_count = 0;

    /**
     * The incremental number of samples rejected since the last time the listener was called or the status was read.
     */
    uint32_t total_count_change = 0;

    /**
     * Reason for rejecting the last sample rejected.
     * If no samples have been rejected, the reason is the special value NOT_REJECTED.
     */
    SampleRejectedStatusKind last_reason = NOT_REJECTED;

    /**
     * Handle to the instance being updated by the last sample that was rejected.
     */
    InstanceHandle_t last_instance_handle;
};

} //namespace dds
} //namespace fastdds
} //namespace eprosima

#endif // _FASTDDS_DDS_QOS_SAMPLEREJECTEDSTATUS_HPP_
