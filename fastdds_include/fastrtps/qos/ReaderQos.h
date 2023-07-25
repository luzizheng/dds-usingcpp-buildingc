

/**
 * @file ReaderQos.h
 *
 */

#ifndef READERQOS_H_
#define READERQOS_H_

#include <fastdds/dds/subscriber/qos/ReaderQos.hpp>

#include <fastrtps/qos/QosPolicies.h>  // Needed for old enum constant values

namespace eprosima {
namespace fastrtps {

using ReaderQos = fastdds::dds::ReaderQos;

} /* namespace  */
} /* namespace eprosima */

#endif /* READERQOS_H_ */
