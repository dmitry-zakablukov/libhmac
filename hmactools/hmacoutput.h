/*
 * Output functions
 *
 * Copyright (c) 2011-2013, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _HMACOUTPUT_H )
#define _HMACOUTPUT_H

#include <common.h>
#include <file_stream.h>
#include <types.h>

#include "hmactools_libcstring.h"

#if defined( __cplusplus )
extern "C" {
#endif

void hmacoutput_copyright_fprint(
      FILE *stream );

void hmacoutput_version_fprint(
      FILE *stream,
      const libcstring_system_character_t *program );

void hmacoutput_version_detailed_fprint(
      FILE *stream,
      const libcstring_system_character_t *program );

#if defined( __cplusplus )
}
#endif

#endif
