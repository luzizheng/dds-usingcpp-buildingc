// Copyright (c) 2019-2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_PEGTL_CHANGE_STATES_HPP
#define TAO_PEGTL_CHANGE_STATES_HPP

#include <tuple>

#include <thirdparty/taocpp-pegtl/pegtl/apply_mode.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/config.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/match.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/nothing.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/rewind_mode.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/internal/integer_sequence.hpp>

namespace tao
{
   namespace TAO_PEGTL_NAMESPACE
   {
      template< typename... NewStates >
      struct change_states
         : maybe_nothing
      {
         template< typename Rule,
                   apply_mode A,
                   rewind_mode M,
                   template< typename... >
                   class Action,
                   template< typename... >
                   class Control,
                   std::size_t... Ns,
                   typename Input,
                   typename... States >
         static bool match( TAO_PEGTL_NAMESPACE::internal::index_sequence< Ns... >, Input& in, States&&... st )
         {
            auto t = std::tie( st... );
            if( TAO_PEGTL_NAMESPACE::match< Rule, A, M, Action, Control >( in, std::get< Ns >( t )... ) ) {
               Action< Rule >::success( static_cast< const Input& >( in ), st... );
               return true;
            }
            return false;
         }

         template< typename Rule,
                   apply_mode A,
                   rewind_mode M,
                   template< typename... >
                   class Action,
                   template< typename... >
                   class Control,
                   typename Input,
                   typename... States >
         static auto match( Input& in, States&&... st )
            -> typename std::enable_if< ( A == apply_mode::action ), bool >::type
         {
            return match< Rule, A, M, Action, Control >( TAO_PEGTL_NAMESPACE::internal::index_sequence_for< NewStates... >(), in, NewStates()..., st... );
         }

         template< typename Rule,
                   apply_mode A,
                   rewind_mode M,
                   template< typename... >
                   class Action,
                   template< typename... >
                   class Control,
                   typename Input,
                   typename... States,
                   int = 1 >
         static auto match( Input& in, States&&... /*unused*/ )
            -> typename std::enable_if< ( A == apply_mode::nothing ), bool >::type
         {
            return TAO_PEGTL_NAMESPACE::match< Rule, A, M, Action, Control >( in, NewStates()... );
         }
      };

   }  // namespace TAO_PEGTL_NAMESPACE

}  // namespace tao

#endif
