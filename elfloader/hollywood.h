/*
	mini - a Free Software replacement for the Nintendo/BroadOn IOS.

	ELF loader: Hollywood register definitions

Copyright (C) 2008, 2009	Hector Martin "marcan" <marcan@marcansoft.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, version 2.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

*/
#ifndef __HOLLYWOOD_H__
#define __HOLLYWOOD_H__

#define		HW_REG_BASE			0xd800000
#define		HW_TIMER			(HW_REG_BASE + 0x010)
#define		HW_MEMMIRR			(HW_REG_BASE + 0x060)
#define		HW_BOOT0			(HW_REG_BASE + 0x18c)

#endif
