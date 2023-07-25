

/**
 * @file DeadlineMissedStatus.h
 */

#ifndef _DEADLINE_MISSED_STATUS_H_
#define _DEADLINE_MISSED_STATUS_H_

#include <fastdds/dds/core/status/DeadlineMissedStatus.hpp>

namespace eprosima {
namespace fastrtps {

using DeadlineMissedStatus = fastdds::dds::DeadlineMissedStatus;

typedef DeadlineMissedStatus OfferedDeadlineMissedStatus;
typedef DeadlineMissedStatus RequestedDeadlineMissedStatus;

} //end of namespace
} //end of namespace eprosima

#endif /* _DEADLINE_MISSED_STATUS_H_ */
