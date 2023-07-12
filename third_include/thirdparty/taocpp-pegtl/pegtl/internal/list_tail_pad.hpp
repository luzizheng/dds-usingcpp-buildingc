// Copyright (c) 2014-2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_PEGTL_INTERNAL_LIST_TAIL_PAD_HPP
#define TAO_PEGTL_INTERNAL_LIST_TAIL_PAD_HPP

#include <thirdparty/taocpp-pegtl/pegtl/config.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/internal/list.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/opt.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/pad.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/seq.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/star.hpp>

namespace tao
{
   namespace TAO_PEGTL_NAMESPACE
   {
      namespace internal
      {
         template< typename Rule, typename Sep, typename Pad >
         using list_tail_pad = seq< list< Rule, pad< Sep, Pad > >, opt< star< Pad >, Sep > >;

      }  // namespace internal

   }  // namespace TAO_PEGTL_NAMESPACE

}  // namespace tao

#endif
