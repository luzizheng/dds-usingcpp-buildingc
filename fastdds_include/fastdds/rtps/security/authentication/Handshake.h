/*!
 * @file Handshake.h
 */
#ifndef _FASTDDS_RTPS_SECURITY_AUTHENTICATION_HANDSHAKE_H_
#define _FASTDDS_RTPS_SECURITY_AUTHENTICATION_HANDSHAKE_H_

#include <fastdds/rtps/security/common/Handle.h>
#include <fastdds/rtps/common/Token.h>

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

typedef Handle HandshakeHandle;

typedef Token HandshakeMessageToken;

} //namespace eprosima
} //namespace fastrtps
} //namespace rtps
} //namespace security

#endif // _FASTDDS_RTPS_SECURITY_AUTHENTICATION_HANDSHAKE_H_
