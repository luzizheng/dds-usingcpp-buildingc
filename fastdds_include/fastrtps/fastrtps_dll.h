

#ifndef _FASTRTPS_FASTRTPS_DLL_H_
#define _FASTRTPS_FASTRTPS_DLL_H_

#include <fastrtps/config.h>

// normalize macros
#if !defined(FASTRTPS_DYN_LINK) && !defined(FASTRTPS_STATIC_LINK) \
    && !defined(EPROSIMA_ALL_DYN_LINK) && !defined(EPROSIMA_ALL_STATIC_LINK)
#define FASTRTPS_STATIC_LINK
#endif

#if defined(EPROSIMA_ALL_DYN_LINK) && !defined(FASTRTPS_DYN_LINK)
#define FASTRTPS_DYN_LINK
#endif

#if defined(FASTRTPS_DYN_LINK) && defined(FASTRTPS_STATIC_LINK)
#error Must not define both FASTRTPS_DYN_LINK and FASTRTPS_STATIC_LINK
#endif

#if defined(EPROSIMA_ALL_NO_LIB) && !defined(FASTRTPS_NO_LIB)
#define FASTRTPS_NO_LIB
#endif

// enable dynamic linking

#if defined(_WIN32)
#if defined(EPROSIMA_ALL_DYN_LINK) || defined(FASTRTPS_DYN_LINK)
#if defined(fastrtps_EXPORTS)
#define RTPS_DllAPI __declspec( dllexport )
#else
#define RTPS_DllAPI __declspec( dllimport )
#endif // FASTRTPS_SOURCE
#else
#define RTPS_DllAPI
#endif
#else
#define RTPS_DllAPI
#endif // _WIN32

// Auto linking.

#if !defined(FASTRTPS_SOURCE) && !defined(EPROSIMA_ALL_NO_LIB) \
    && !defined(FASTRTPS_NO_LIB)

// Set properties.
#define EPROSIMA_LIB_NAME fastrtps

#if defined(EPROSIMA_ALL_DYN_LINK) || defined(FASTRTPS_DYN_LINK)
#define EPROSIMA_DYN_LINK
#endif

#include <fastrtps/eProsima_auto_link.h>
#endif // auto-linking disabled

#endif // _fastrtps_fastrtps_DLL_H_
