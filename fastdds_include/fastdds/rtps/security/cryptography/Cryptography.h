/*!
 * @file Cryptography.h
 */
#ifndef _FASTDDS_RTPS_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHY_H_
#define _FASTDDS_RTPS_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHY_H_

#include <fastdds/rtps/security/cryptography/CryptoKeyExchange.h>
#include <fastdds/rtps/security/cryptography/CryptoKeyFactory.h>
#include <fastdds/rtps/security/cryptography/CryptoTransform.h>
#include <fastdds/rtps/security/cryptography/CryptoTypes.h>

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

class Logging;

class Cryptography
{
public:

    Cryptography() = default;
    virtual ~Cryptography() = default;

    /* Specializations should add functions to access the different modules */
    virtual CryptoKeyExchange* cryptokeyexchange() = 0;
    virtual CryptoKeyFactory* cryptokeyfactory() = 0;
    virtual CryptoTransform* cryptotransform() = 0;

    bool set_logger(
            Logging* logger,
            SecurityException& /*exception*/)
    {
        m_logger = logger;
        return true;
    }

protected:

    const Logging* get_logger()
    {
        return m_logger;
    }

private:

    Logging* m_logger;
};

} //namespace security
} //namespace rtps
} //namespace fastrtps
} //namespace eprosima

#endif //_FASTDDS_RTPS_SECURITY_CRYPTOGRAPHY_CRYPTOGRAPHY_H_
