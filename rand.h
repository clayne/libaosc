/* libaosc, an encoding library for randomized i386 ASCII-only shellcode.
 *
 * Dedicated to Merle Planten.
 *
 * Copyright (C) 2001-2008 Ronald Huizer
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#ifndef __RAND_H
#define __RAND_H

#define BITS_IN_BYTE	(8)
#define BITS_IN_UINT	(sizeof(unsigned int) * BITS_IN_BYTE)

unsigned int xrandom_uint(void);
void xrandom_init(void);
unsigned int xrandom_range(unsigned int, unsigned int);

#endif
