/*!
 * @file string_convert.hpp
 *
 * std::wstring_convert deprecation on c++17 forces us to provide our own conversions.
 */

#ifndef FASTRTPS_UTILS_STRING_CONVERT_HPP_
#define FASTRTPS_UTILS_STRING_CONVERT_HPP_

#include <string>

#ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC
namespace eprosima {
namespace fastrtps {

std::wstring wstring_from_bytes(
        const std::string& str);
std::string wstring_to_bytes(
        const std::wstring& str);

} /* namespace fastrtps */
} /* namespace eprosima */
#endif // ifndef DOXYGEN_SHOULD_SKIP_THIS_PUBLIC

#endif /* FASTRTPS_UTILS_STRING_CONVERT_HPP_ */
