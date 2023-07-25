

/**
 * @file FragmentNumber.h
 */

#ifndef _FASTDDS_RTPS_RPTS_ELEM_FRAGNUM_H_
#define _FASTDDS_RTPS_RPTS_ELEM_FRAGNUM_H_

#include <fastrtps/fastrtps_dll.h>
#include <fastrtps/utils/fixed_size_bitmap.hpp>
#include <fastdds/rtps/common/Types.h>

#include <set>
#include <cmath>
#include <algorithm>

namespace eprosima{
namespace fastrtps{
namespace rtps{

using FragmentNumber_t = uint32_t;

//!Structure FragmentNumberSet_t, contains a group of fragmentnumbers.
//!@ingroup COMMON_MODULE
using FragmentNumberSet_t = BitmapRange<FragmentNumber_t>;

inline std::ostream& operator<<(std::ostream& output, const FragmentNumberSet_t& fns)
{
    output << fns.base() << ":";
    fns.for_each([&](FragmentNumber_t it)
    {
        output << it << "-";
    });

    return output;
}

}
}
}

#endif /* _FASTDDS_RTPS_RPTS_ELEM_FRAGNUM_H_ */
