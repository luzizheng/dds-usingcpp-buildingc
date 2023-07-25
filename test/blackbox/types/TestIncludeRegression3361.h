/*!
 * @file TestIncludeRegression3361.h
 * 此头文件包含 IDL 文件中描述类型的声明。
 *
 * 此文件由gen工具生成生成。
 */

#ifndef _FAST_DDS_GENERATED_TESTINCLUDEREGRESSION3361_H_
#define _FAST_DDS_GENERATED_TESTINCLUDEREGRESSION3361_H_


#include <fastrtps/utils/fixed_size_string.hpp>

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define eProsima_user_DllExport
#endif  // _WIN32

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(TESTINCLUDEREGRESSION3361_SOURCE)
#define TESTINCLUDEREGRESSION3361_DllAPI __declspec( dllexport )
#else
#define TESTINCLUDEREGRESSION3361_DllAPI __declspec( dllimport )
#endif // TESTINCLUDEREGRESSION3361_SOURCE
#else
#define TESTINCLUDEREGRESSION3361_DllAPI
#endif  // EPROSIMA_USER_DLL_EXPORT
#else
#define TESTINCLUDEREGRESSION3361_DllAPI
#endif // _WIN32

namespace eprosima {
namespace fastcdr {
class Cdr;
} // namespace fastcdr
} // namespace eprosima


namespace TestModule {
    typedef std::string MACHINEID;
} // namespace TestModule

#endif // _FAST_DDS_GENERATED_TESTINCLUDEREGRESSION3361_H_

