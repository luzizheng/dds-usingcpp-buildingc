

/**
 * @file WriterQos.h
 *
 */

#ifndef WRITERQOS_H_
#define WRITERQOS_H_

#include <fastdds/dds/publisher/qos/WriterQos.hpp>

#include <fastrtps/qos/QosPolicies.h>  // Needed for old enum constant values

namespace eprosima {
namespace fastrtps {

using WriterQos = fastdds::dds::WriterQos;

} /* namespace  */
} /* namespace eprosima */

#endif /* WRITERQOS_H_ */
