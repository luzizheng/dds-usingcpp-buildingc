// Copyright (c) 2019-2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_PEGTL_DISCARD_INPUT_ON_SUCCESS_HPP
#define TAO_PEGTL_DISCARD_INPUT_ON_SUCCESS_HPP

#include <thirdparty/taocpp-pegtl/pegtl/apply_mode.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/config.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/match.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/nothing.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/rewind_mode.hpp>

namespace tao
{
   namespace TAO_PEGTL_NAMESPACE
   {
      struct discard_input_on_success
         : maybe_nothing
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
         static bool match( Input& in, States&&... st )
         {
            const bool result = TAO_PEGTL_NAMESPACE::match< Rule, A, M, Action, Control >( in, st... );
            if( result ) {
               in.discard();
            }
            return result;
         }
      };

   }  // namespace TAO_PEGTL_NAMESPACE

}  // namespace tao

#endif
