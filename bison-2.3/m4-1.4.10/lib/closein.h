/* Close standard input, rewinding seekable stdin if necessary.

   Copyright (C) 2007 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.  */

#ifndef _GL_CLOSEIN_H
# define _GL_CLOSEIN_H 1

# ifdef __cplusplus
extern "C" {
# endif

void close_stdin_set_file_name (const char *file);
void close_stdin (void);

# ifdef __cplusplus
}
# endif

#endif
