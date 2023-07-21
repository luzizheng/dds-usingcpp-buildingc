// Copyright (c) 2014-2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_PEGTL_INTERNAL_RAISE_HPP
#define TAO_PEGTL_INTERNAL_RAISE_HPP

#include <cstdlib>
#include <stdexcept>
#include <type_traits>

#include <thirdparty/taocpp-pegtl/pegtl/config.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/internal/skip_control.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/analysis/generic.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/apply_mode.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/rewind_mode.hpp>

namespace tao
{
   namespace TAO_PEGTL_NAMESPACE
   {
      namespace internal
      {
         template< typename T >
         struct raise
         {
            using analyze_t = analysis::generic< analysis::rule_type::any >;

#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable : 4702 )
#endif
            template< apply_mode,
                      rewind_mode,
                      template< typename... >
                      class Action,
                      template< typename... >
                      class Control,
                      typename Input,
                      typename... States >
            static bool match( Input& in, States&&... st )
            {
               Control< T >::raise( static_cast< const Input& >( in ), st... );
               throw std::logic_error( "code should be unreachable: Control< T >::raise() did not throw an exception" );  // NOLINT, LCOV_EXCL_LINE
#ifdef _MSC_VER
#pragma warning( pop )
#endif
            }
         };

         template< typename T >
         struct skip_control< raise< T > > : std::true_type
         {
         };

      }  // namespace internal

   }  // namespace TAO_PEGTL_NAMESPACE

}  // namespace tao

#endif
