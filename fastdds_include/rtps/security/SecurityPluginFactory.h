/*!
 * @file SecurityPluginFactory.h
 */
#ifndef _RTPS_SECURITY_SECURITYPLUGINFACTORY_H_
#define _RTPS_SECURITY_SECURITYPLUGINFACTORY_H_

#include <fastdds/rtps/security/authentication/Authentication.h>
#include <fastdds/rtps/security/accesscontrol/AccessControl.h>
#include <fastdds/rtps/security/cryptography/Cryptography.h>
#include <fastdds/rtps/security/logging/Logging.h>
#include <fastdds/rtps/attributes/PropertyPolicy.h>

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

class SecurityPluginFactory
{
    public:

        /*!
         * @brief Create an Authentication plugin  described in the PropertyPolicy.
         * @param property_policy PropertyPolicy containing the definition of the Authentication
         * plugin that has to be created.
         * @param Pointer to the new Authentication plugin. In case of error nullptr will be returned.
         */
        Authentication* create_authentication_plugin(const PropertyPolicy& property_policy);

        AccessControl* create_access_control_plugin(const PropertyPolicy& property_policy);

        /*!
         * @brief Create an Cryptographic plugin  described in the PropertyPolicy.
         * @param property_policy PropertyPolicy containing the definition of the Cryptographic
         * plugin that has to be created.
         * @param Pointer to the new Cryptographic plugin. In case of error nullptr will be returned.
         */
        Cryptography* create_cryptography_plugin(const PropertyPolicy& property_policy);

        /**
         * @brief Create a loggin plugin described in the PropertyPolicy.
         * @param property_policy PropertyPolicy containing the definition of the Logging
         * plugin that has to be created.
         * @return Pointer to the new Logging plugin. In case of error nullptr will be returned.
         */
        Logging* create_logging_plugin(const PropertyPolicy& property_policy);
};

} //namespace security
} //namespace rtps
} //namespace fastrtps
} //namespace eprosima

#endif // _RTPS_SECURITY_SECURITYPLUGINFACTORY_H_
