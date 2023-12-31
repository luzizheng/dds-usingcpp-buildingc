// Copyright (c) 2019-2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_PEGTL_MATCH_HPP
#define TAO_PEGTL_MATCH_HPP

#include <type_traits>

#include <thirdparty/taocpp-pegtl/pegtl/apply_mode.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/config.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/nothing.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/require_apply.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/require_apply0.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/rewind_mode.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/internal/dusel_mode.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/duseltronik.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/has_apply.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/has_apply0.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/if_missing.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/skip_control.hpp>

namespace tao
{
   namespace TAO_PEGTL_NAMESPACE
   {
      template< typename Rule,
                apply_mode A,
                rewind_mode M,
                template< typename... >
                class Action,
                template< typename... >
                class Control,
                typename Input,
                typename... States >
      bool match( Input& in, States&&... st )
      {
         constexpr bool enable_control = !internal::skip_control< Rule >::value;
         constexpr bool enable_action = enable_control && ( A == apply_mode::action );

         using iterator_t = typename Input::iterator_t;
         constexpr bool has_apply_void = enable_action && internal::has_apply< Control< Rule >, void, Action, const iterator_t&, const Input&, States... >::value;
         constexpr bool has_apply_bool = enable_action && internal::has_apply< Control< Rule >, bool, Action, const iterator_t&, const Input&, States... >::value;
         constexpr bool has_apply = has_apply_void || has_apply_bool;

         constexpr bool has_apply0_void = enable_action && internal::has_apply0< Control< Rule >, void, Action, const Input&, States... >::value;
         constexpr bool has_apply0_bool = enable_action && internal::has_apply0< Control< Rule >, bool, Action, const Input&, States... >::value;
         constexpr bool has_apply0 = has_apply0_void || has_apply0_bool;

         static_assert( !( has_apply && has_apply0 ), "both apply() and apply0() defined" );

         constexpr bool is_nothing = std::is_base_of< nothing< Rule >, Action< Rule > >::value;
         static_assert( !( has_apply && is_nothing ), "unexpected apply() defined" );
         static_assert( !( has_apply0 && is_nothing ), "unexpected apply0() defined" );

         internal::if_missing< !has_apply && std::is_base_of< require_apply, Action< Rule > >::value >::template apply< Control< Rule >, Action >( in, st... );
         internal::if_missing< !has_apply0 && std::is_base_of< require_apply0, Action< Rule > >::value >::template apply0< Control< Rule >, Action >( in, st... );

         constexpr bool validate_nothing = std::is_base_of< maybe_nothing, Action< void > >::value;
         constexpr bool is_maybe_nothing = std::is_base_of< maybe_nothing, Action< Rule > >::value;
         static_assert( !enable_action || !validate_nothing || is_nothing || is_maybe_nothing || has_apply || has_apply0, "either apply() or apply0() must be defined" );

         constexpr auto mode = static_cast< internal::dusel_mode >( enable_control + has_apply_void + 2 * has_apply_bool + 3 * has_apply0_void + 4 * has_apply0_bool );
         return internal::duseltronik< Rule, A, M, Action, Control, mode >::match( in, st... );
      }

   }  // namespace TAO_PEGTL_NAMESPACE

}  // namespace tao

#endif
