/*!
 * @file SecurityMaskUtilities.h
 */
#ifndef _FASTDDS_RTPS_SECURITY_ACCESSCONTROL_SECURITYMASKUTILITIES_H_
#define _FASTDDS_RTPS_SECURITY_ACCESSCONTROL_SECURITYMASKUTILITIES_H_

namespace eprosima {
namespace fastrtps {
namespace rtps {
namespace security {

inline bool security_mask_matches(const uint32_t lv, const uint32_t rv)
{
    if (((lv & (1UL << 31)) == 0) || ((rv & (1UL << 31)) == 0))
    {
        return true;
    }

    return lv == rv;
}

}
}
}
}

#endif // _FASTDDS_RTPS_SECURITY_ACCESSCONTROL_SECURITYMASKUTILITIES_H_
