// Copyright (c) 2014-2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_PEGTL_INTERNAL_LIST_MUST_HPP
#define TAO_PEGTL_INTERNAL_LIST_MUST_HPP

#include <thirdparty/taocpp-pegtl/pegtl/config.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/internal/must.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/seq.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/star.hpp>

namespace tao
{
   namespace TAO_PEGTL_NAMESPACE
   {
      namespace internal
      {
         template< typename Rule, typename Sep >
         using list_must = seq< Rule, star< Sep, must< Rule > > >;

      }  // namespace internal

   }  // namespace TAO_PEGTL_NAMESPACE

}  // namespace tao

#endif
