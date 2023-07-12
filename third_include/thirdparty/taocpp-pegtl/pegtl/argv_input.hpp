// Copyright (c) 2017-2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_PEGTL_ARGV_INPUT_HPP
#define TAO_PEGTL_ARGV_INPUT_HPP

#include <cstddef>
#include <sstream>
#include <string>
#include <utility>

#include <thirdparty/taocpp-pegtl/pegtl/config.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/eol.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/memory_input.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/tracking_mode.hpp>

namespace tao
{
   namespace TAO_PEGTL_NAMESPACE
   {
      namespace internal
      {
         inline std::string make_argv_source( const std::size_t argn )
         {
            std::ostringstream os;
            os << "argv[" << argn << ']';
            return os.str();
         }

      }  // namespace internal

      template< tracking_mode P = tracking_mode::eager, typename Eol = eol::lf_crlf >
      struct argv_input
         : public memory_input< P, Eol >
      {
         template< typename T >
         argv_input( char** argv, const std::size_t argn, T&& in_source )
            : memory_input< P, Eol >( static_cast< const char* >( argv[ argn ] ), std::forward< T >( in_source ) )
         {
         }

         argv_input( char** argv, const std::size_t argn )
            : argv_input( argv, argn, internal::make_argv_source( argn ) )
         {
         }
      };

#ifdef __cpp_deduction_guides
      template< typename... Ts >
      argv_input( Ts&&... )->argv_input<>;
#endif

   }  // namespace TAO_PEGTL_NAMESPACE

}  // namespace tao

#endif
