// Copyright (c) 2017-2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_PEGTL_INTERNAL_HAS_APPLY_HPP
#define TAO_PEGTL_INTERNAL_HAS_APPLY_HPP

#include <type_traits>

#include <thirdparty/taocpp-pegtl/pegtl/config.hpp>

namespace tao
{
   namespace TAO_PEGTL_NAMESPACE
   {
      namespace internal
      {
         template< typename, typename, template< typename... > class, typename... >
         struct has_apply
            : std::false_type
         {};

         template< typename C, template< typename... > class Action, typename... S >
         struct has_apply< C, decltype( C::template apply< Action >( std::declval< S >()... ) ), Action, S... >
            : std::true_type
         {};

      }  // namespace internal

   }  // namespace TAO_PEGTL_NAMESPACE

}  // namespace tao

#endif
