

#ifndef _FASTCDR_FASTCDR_DLL_H_
#define _FASTCDR_FASTCDR_DLL_H_

#include <fastcdr/config.h>

// normalize macros
#if !defined(FASTCDR_DYN_LINK) && !defined(FASTCDR_STATIC_LINK) \
    && !defined(EPROSIMA_ALL_DYN_LINK) && !defined(EPROSIMA_ALL_STATIC_LINK)
#define FASTCDR_STATIC_LINK
#endif // if !defined(FASTCDR_DYN_LINK) && !defined(FASTCDR_STATIC_LINK) && !defined(EPROSIMA_ALL_DYN_LINK) && !defined(EPROSIMA_ALL_STATIC_LINK)

#if defined(EPROSIMA_ALL_DYN_LINK) && !defined(FASTCDR_DYN_LINK)
#define FASTCDR_DYN_LINK
#endif // if defined(EPROSIMA_ALL_DYN_LINK) && !defined(FASTCDR_DYN_LINK)

#if defined(FASTCDR_DYN_LINK) && defined(FASTCDR_STATIC_LINK)
#error Must not define both FASTCDR_DYN_LINK and FASTCDR_STATIC_LINK
#endif // if defined(FASTCDR_DYN_LINK) && defined(FASTCDR_STATIC_LINK)

#if defined(EPROSIMA_ALL_NO_LIB) && !defined(FASTCDR_NO_LIB)
#define FASTCDR_NO_LIB
#endif // if defined(EPROSIMA_ALL_NO_LIB) && !defined(FASTCDR_NO_LIB)

// enable dynamic linking

#if defined(_WIN32)
#if defined(EPROSIMA_ALL_DYN_LINK) || defined(FASTCDR_DYN_LINK)
#if defined(fastcdr_EXPORTS)
#define Cdr_DllAPI __declspec( dllexport )
#else
#define Cdr_DllAPI __declspec( dllimport )
#endif // FASTCDR_SOURCE
#else
#define Cdr_DllAPI
#endif // if defined(EPROSIMA_ALL_DYN_LINK) || defined(FASTCDR_DYN_LINK)
#else
#define Cdr_DllAPI
#endif // _WIN32

// Auto linking.

#if !defined(FASTCDR_SOURCE) && !defined(EPROSIMA_ALL_NO_LIB) \
    && !defined(FASTCDR_NO_LIB)

// Set properties.
#define EPROSIMA_LIB_NAME fastcdr

#if defined(EPROSIMA_ALL_DYN_LINK) || defined(FASTCDR_DYN_LINK)
#define EPROSIMA_DYN_LINK
#endif // if defined(EPROSIMA_ALL_DYN_LINK) || defined(FASTCDR_DYN_LINK)

#include "eProsima_auto_link.h"
#endif // auto-linking disabled

#endif // _FASTCDR_FASTCDR_DLL_H_
