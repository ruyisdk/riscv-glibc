/* Using math gcc builtins instead of generic implementation.  aarch64 version.
   Copyright (C) 2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef MATH_USE_BUILTINS_H
#define MATH_USE_BUILTINS_H	1

#include <features.h> /* For __GNUC_PREREQ.  */

/* Define these macros to 1 to use __builtin_xyz instead of the
   generic implementation.  */
#define USE_NEARBYINT_BUILTIN 1
#define USE_NEARBYINTF_BUILTIN 1
#define USE_NEARBYINTL_BUILTIN 0
#define USE_NEARBYINTF128_BUILTIN 0

#define USE_RINT_BUILTIN 1
#define USE_RINTF_BUILTIN 1
#define USE_RINTL_BUILTIN 0
#define USE_RINTF128_BUILTIN 0

#define USE_FLOOR_BUILTIN 1
#define USE_FLOORF_BUILTIN 1
#define USE_FLOORL_BUILTIN 0
#define USE_FLOORF128_BUILTIN 0

#define USE_CEIL_BUILTIN 1
#define USE_CEILF_BUILTIN 1
#define USE_CEILL_BUILTIN 0
#define USE_CEILF128_BUILTIN 0

#define USE_TRUNC_BUILTIN 1
#define USE_TRUNCF_BUILTIN 1
#define USE_TRUNCL_BUILTIN 0
#define USE_TRUNCF128_BUILTIN 0

#define USE_ROUND_BUILTIN 1
#define USE_ROUNDF_BUILTIN 1
#define USE_ROUNDL_BUILTIN 0
#define USE_ROUNDF128_BUILTIN 0

#define USE_COPYSIGNL_BUILTIN 1
#if __GNUC_PREREQ (7, 0)
# define USE_COPYSIGNF128_BUILTIN 1
#else
# define USE_COPYSIGNF128_BUILTIN 0
#endif

#define USE_SQRT_BUILTIN 1
#define USE_SQRTF_BUILTIN 1

#define USE_FMA_BUILTIN 1
#define USE_FMAF_BUILTIN 1
#define USE_FMAL_BUILTIN 0
#define USE_FMAF128_BUILTIN 0

#endif