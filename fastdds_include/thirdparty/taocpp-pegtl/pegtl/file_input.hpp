// Copyright (c) 2015-2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_PEGTL_FILE_INPUT_HPP
#define TAO_PEGTL_FILE_INPUT_HPP

#include <thirdparty/taocpp-pegtl/pegtl/config.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/eol.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/tracking_mode.hpp>

#if defined( __unix__ ) || ( defined( __APPLE__ ) && defined( __MACH__ ) )
#include <unistd.h>  // Required for _POSIX_MAPPED_FILES
#endif

#if defined( _POSIX_MAPPED_FILES ) || defined( _WIN32 )
#include <thirdparty/taocpp-pegtl/pegtl/mmap_input.hpp>
#else
#include <thirdparty/taocpp-pegtl/pegtl/read_input.hpp>
#endif

namespace tao
{
   namespace TAO_PEGTL_NAMESPACE
   {
#if defined( _POSIX_MAPPED_FILES ) || defined( _WIN32 )
      template< tracking_mode P = tracking_mode::eager, typename Eol = eol::lf_crlf >
      struct file_input
         : mmap_input< P, Eol >
      {
         using mmap_input< P, Eol >::mmap_input;
      };
#else
      template< tracking_mode P = tracking_mode::eager, typename Eol = eol::lf_crlf >
      struct file_input
         : read_input< P, Eol >
      {
         using read_input< P, Eol >::read_input;
      };
#endif

#ifdef __cpp_deduction_guides
      template< typename... Ts >
      explicit file_input( Ts&&... )->file_input<>;
#endif

   }  // namespace TAO_PEGTL_NAMESPACE

}  // namespace tao

#endif
