/*!
 * @file AccessPermissionsHandle.h
 */
#ifndef __SECURITY_ACCESSCONTROL_ACCESSPERMISSIONSHANDLE_H__
#define __SECURITY_ACCESSCONTROL_ACCESSPERMISSIONSHANDLE_H__

#include <fastdds/rtps/security/common/Handle.h>
#include <fastdds/rtps/common/Token.h>
#include <security/accesscontrol/PermissionsTypes.h>
#include <fastdds/rtps/security/accesscontrol/ParticipantSecurityAttributes.h>
#include <fastdds/rtps/security/accesscontrol/EndpointSecurityAttributes.h>

#include <openssl/x509.h>
#include <string>
#include <map>

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

class AccessPermissions
{
public:

    AccessPermissions()
        : store_(nullptr)
        , there_are_crls_(false)
    {
    }

    ~AccessPermissions()
    {
        if (store_ != nullptr)
        {
            X509_STORE_free(store_);
        }
    }

    static const char* const class_id_;

    X509_STORE* store_;
    std::string sn;
    std::string algo;
    bool there_are_crls_;
    PermissionsToken permissions_token_;
    PermissionsCredentialToken permissions_credential_token_;
    ParticipantSecurityAttributes governance_rule_;
    std::vector<std::pair<std::string, EndpointSecurityAttributes>> governance_topic_rules_;
    Grant grant;
};

class Permissions;

typedef HandleImpl<AccessPermissions, Permissions> AccessPermissionsHandle;

} //namespace security
} //namespace rtps
} //namespace fastrtps
} //namespace eprosima

#endif // __SECURITY_ACCESSCONTROL_ACCESSPERMISSIONSHANDLE_H__
