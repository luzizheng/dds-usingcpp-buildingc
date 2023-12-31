// Copyright (c) 2019-2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_PEGTL_INTERNAL_REMATCH_HPP
#define TAO_PEGTL_INTERNAL_REMATCH_HPP

#include <thirdparty/taocpp-pegtl/pegtl/config.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/internal/skip_control.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/apply_mode.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/memory_input.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/rewind_mode.hpp>

namespace tao
{
   namespace TAO_PEGTL_NAMESPACE
   {
      namespace internal
      {
         template< typename Head, typename... Rules >
         struct rematch;

         template< typename Head >
         struct rematch< Head >
         {
            using analyze_t = typename Head::analyze_t;

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
               return Control< Head >::template match< A, M, Action, Control >( in, st... );
            }
         };

         template< typename Head, typename Rule, typename... Rules >
         struct rematch< Head, Rule, Rules... >
         {
            using analyze_t = typename Head::analyze_t;  // NOTE: Rule and Rules are ignored for analyze().

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
               auto m = in.template mark< rewind_mode::required >();

               if( Control< Head >::template match< A, rewind_mode::active, Action, Control >( in, st... ) ) {
                  memory_input< Input::tracking_mode_v, typename Input::eol_t, typename Input::source_t > i2( m.iterator(), in.current(), in.source() );
#ifdef __cpp_fold_expressions
                  return m( ( Control< Rule >::template match< A, rewind_mode::active, Action, Control >( i2, st... ) && ... && ( i2.restart( m ), Control< Rules >::template match< A, rewind_mode::active, Action, Control >( i2, st... ) ) ) );
#else
                  bool result = Control< Rule >::template match< A, rewind_mode::active, Action, Control >( i2, st... );
                  using swallow = bool[];
                  (void)swallow{ result = result && ( i2.restart( m ), Control< Rules >::template match< A, rewind_mode::active, Action, Control >( i2, st... ) )..., true };
                  return m( result );
#endif
               }
               return false;
            }
         };

         template< typename Head, typename... Rules >
         struct skip_control< rematch< Head, Rules... > > : std::true_type
         {
         };

      }  // namespace internal

   }  // namespace TAO_PEGTL_NAMESPACE

}  // namespace tao

#endif
