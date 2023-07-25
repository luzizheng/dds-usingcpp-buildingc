/*!
 * @file StringMatching.h
 *
 */

#ifndef STRINGMATCHING_H_
#define STRINGMATCHING_H_

#include <fastrtps/fastrtps_dll.h>

#include <string>
#include <vector>
#include <stdint.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC
namespace eprosima {
namespace fastrtps {
namespace rtps {
/**
 * Class StringMatching used to match different strings against each other as defined by the POSIX fnmatch API (1003.2-1992
   section B.6).
   @ingroup UTILITIES_MODULE
 */
class RTPS_DllAPI StringMatching
{
public:

    StringMatching();

    virtual ~StringMatching();

    /** Static method to match two strings.
     * It checks if the input strings match. Any of the strings or both can be a pattern.
     */
    static bool matchString(
            const char* input1,
            const char* input2);

    /** Static method to match a string to a pattern.
     * It checks the string specified by the input argument to see if it matches the pattern specified by the pattern argument.
     */
    static bool matchPattern(
            const char* pattern,
            const char* input);
};

} // namespace rtps
} /* namespace rtps */
} /* namespace eprosima */

#endif // ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC
#endif // ifndef STRINGMATCHING_H_
