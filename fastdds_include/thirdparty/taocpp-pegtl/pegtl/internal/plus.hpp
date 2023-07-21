// Copyright (c) 2014-2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_PEGTL_INTERNAL_PLUS_HPP
#define TAO_PEGTL_INTERNAL_PLUS_HPP

#include <type_traits>

#include <thirdparty/taocpp-pegtl/pegtl/config.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/internal/opt.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/seq.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/skip_control.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/star.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/apply_mode.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/rewind_mode.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/analysis/generic.hpp>

namespace tao
{
   namespace TAO_PEGTL_NAMESPACE
   {
      namespace internal
      {
         // While plus<> could easily be implemented with
         // seq< Rule, Rules ..., star< Rule, Rules ... > > we
         // provide an explicit implementation to optimise away
         // the otherwise created input mark.

         template< typename Rule, typename... Rules >
         struct plus
            : plus< seq< Rule, Rules... > >
         {
         };

         template< typename Rule >
         struct plus< Rule >
         {
            using analyze_t = analysis::generic< analysis::rule_type::seq, Rule, opt< plus > >;

            template< apply_mode A,
                      rewind_mode M,
                      template< typename... >
                      class Action,
                      template< typename... >
                      class Control,
                      typename Input,
                      typename... States >
            static bool match( Input& in, States&&... st )
            {
               return Control< Rule >::template match< A, M, Action, Control >( in, st... ) && Control< star< Rule > >::template match< A, M, Action, Control >( in, st... );
            }
         };

         template< typename Rule, typename... Rules >
         struct skip_control< plus< Rule, Rules... > > : std::true_type
         {
         };

      }  // namespace internal

   }  // namespace TAO_PEGTL_NAMESPACE

}  // namespace tao

#endif
