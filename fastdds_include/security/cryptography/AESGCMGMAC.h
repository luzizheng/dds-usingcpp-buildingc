/*!
 * @file AESGCMGMAC.h
 */

#ifndef _SECURITY_AUTHENTICATION_AESGCMGMAC_H_
#define _SECURITY_AUTHENTICATION_AESGCMGMAC_H_

#include <fastdds/rtps/security/cryptography/Cryptography.h>
#include <fastdds/rtps/attributes/PropertyPolicy.h>

#include <security/cryptography/AESGCMGMAC_KeyExchange.h>
#include <security/cryptography/AESGCMGMAC_KeyFactory.h>
#include <security/cryptography/AESGCMGMAC_Transform.h>

#include <memory>

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

class AESGCMGMAC : public Cryptography
{
    CryptoKeyExchange* m_cryptokeyexchange;
    std::shared_ptr<AESGCMGMAC_KeyFactory> m_cryptokeyfactory;
    CryptoTransform* m_cryptotransform;

public:

    AESGCMGMAC();
    ~AESGCMGMAC();

    CryptoKeyExchange* cryptokeyexchange() override
    {
        return keyexchange();
    }

    CryptoKeyFactory* cryptokeyfactory() override
    {
        return keyfactory().get();
    }

    CryptoTransform* cryptotransform() override
    {
        return transform();
    }

    AESGCMGMAC_KeyExchange* keyexchange();
    std::shared_ptr<AESGCMGMAC_KeyFactory> keyfactory();
    AESGCMGMAC_Transform* transform();
};

} //namespace security
} //namespace rtps
} //namespace fastrtps
} //namespace eprosima

#endif // _SECURITY_AUTHENTICATION_AESGCMGMAC_H_
