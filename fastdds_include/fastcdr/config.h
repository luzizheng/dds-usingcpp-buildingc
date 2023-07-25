

#ifndef _FASTCDR_CONFIG_H_
#define _FASTCDR_CONFIG_H_

#define FASTCDR_VERSION_MAJOR 1
#define FASTCDR_VERSION_MINOR 0
#define FASTCDR_VERSION_MICRO 27
#define FASTCDR_VERSION_STR "1.0.27"

// C++11 support defines
#ifndef HAVE_CXX11
#define HAVE_CXX11 1
#endif

// C++0x support defines
#ifndef HAVE_CXX0X
#define HAVE_CXX0X 1
#endif

// C++ constexpr support
#ifndef HAVE_CXX_CONSTEXPR
#define HAVE_CXX_CONSTEXPR 1
#endif

#if HAVE_CXX_CONSTEXPR
#define CONSTEXPR constexpr
#else
#define CONSTEXPR const
#endif

// Endianness defines
#ifndef FASTCDR_IS_BIG_ENDIAN_TARGET
#define FASTCDR_IS_BIG_ENDIAN_TARGET 0
#endif

#ifndef FASTCDR_HAVE_FLOAT128
#define FASTCDR_HAVE_FLOAT128 0
#endif

#ifndef FASTCDR_SIZEOF_LONG_DOUBLE
#define FASTCDR_SIZEOF_LONG_DOUBLE 16
#endif

#if defined(__ARM_ARCH) && __ARM_ARCH <= 7
#define FASTCDR_ARM32
#endif

#endif // _FASTCDR_CONFIG_H_
