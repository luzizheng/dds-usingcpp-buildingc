// Copyright (c) 2014-2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_PEGTL_INTERNAL_STAR_HPP
#define TAO_PEGTL_INTERNAL_STAR_HPP

#include <type_traits>

#include <thirdparty/taocpp-pegtl/pegtl/config.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/internal/seq.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/skip_control.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/apply_mode.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/rewind_mode.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/analysis/generic.hpp>

namespace tao
{
   namespace TAO_PEGTL_NAMESPACE
   {
      namespace internal
      {
         template< typename Rule, typename... Rules >
         struct star
            : star< seq< Rule, Rules... > >
         {};

         template< typename Rule >
         struct star< Rule >
         {
            using analyze_t = analysis::generic< analysis::rule_type::opt, Rule, star >;

            template< apply_mode A,
                      rewind_mode,
                      template< typename... >
                      class Action,
                      template< typename... >
                      class Control,
                      typename Input,
                      typename... States >
            static bool match( Input& in, States&&... st )
            {
               while( Control< Rule >::template match< A, rewind_mode::required, Action, Control >( in, st... ) ) {
               }
               return true;
            }
         };

         template< typename Rule, typename... Rules >
         struct skip_control< star< Rule, Rules... > > : std::true_type
         {
         };

      }  // namespace internal

   }  // namespace TAO_PEGTL_NAMESPACE

}  // namespace tao

#endif
