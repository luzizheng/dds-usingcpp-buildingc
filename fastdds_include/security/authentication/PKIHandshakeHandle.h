/*!
 * @file PKIHandshakeHandle.h
 */
#ifndef _SECURITY_AUTHENTICATION_PKIHANDSHAKEHANDLE_H_
#define _SECURITY_AUTHENTICATION_PKIHANDSHAKEHANDLE_H_

#include <security/authentication/PKIIdentityHandle.h>
#include <fastdds/rtps/security/authentication/Handshake.h>
#include <fastdds/rtps/security/common/SharedSecretHandle.h>
#include <openssl/evp.h>
#include <string>

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

class PKIHandshake
{
public:

    PKIHandshake() = default;

    ~PKIHandshake()
    {
        if (dhkeys_ != nullptr)
        {
            EVP_PKEY_free(dhkeys_);
        }

        if (peerkeys_ != nullptr)
        {
            EVP_PKEY_free(peerkeys_);
        }
    }

    static const char* const class_id_;

    std::string kagree_alg_;
    EVP_PKEY* dhkeys_ = { nullptr };
    EVP_PKEY* peerkeys_ = { nullptr };
    const PKIIdentityHandle* local_identity_handle_ = { nullptr };
    PKIIdentityHandle* remote_identity_handle_ = { nullptr };
    HandshakeMessageToken handshake_message_;
    std::shared_ptr<SharedSecretHandle> sharedsecret_;
};

class PKIDH;

typedef HandleImpl<PKIHandshake, PKIDH> PKIHandshakeHandle;

} //namespace security
} //namespace rtps
} //namespace fastrtps
} //namespace eprosima

#endif // _SECURITY_AUTHENTICATION_PKIHANDSHAKEHANDLE_H_

