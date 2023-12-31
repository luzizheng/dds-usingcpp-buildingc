// Copyright (c) 2017-2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_PEGTL_INTERNAL_ALNUM_HPP
#define TAO_PEGTL_INTERNAL_ALNUM_HPP

#include <thirdparty/taocpp-pegtl/pegtl/config.hpp>

#include <thirdparty/taocpp-pegtl/pegtl/internal/peek_char.hpp>
#include <thirdparty/taocpp-pegtl/pegtl/internal/ranges.hpp>

namespace tao
{
   namespace TAO_PEGTL_NAMESPACE
   {
      namespace internal
      {
         using alnum = ranges< peek_char, 'a', 'z', 'A', 'Z', '0', '9' >;

      }  // namespace internal

   }  // namespace TAO_PEGTL_NAMESPACE

}  // namespace tao

#endif
