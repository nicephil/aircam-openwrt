/*
 *  arch/arm/mach-faraday/include/mach/platform-a369/system.h
 *  
 *  Faraday Platform Dependent System Definitions
 *  
 *  Copyright (C) 2005 Faraday Corp. (http://www.faraday-tech.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Description
 *
 *  This file is an example for all Faraday platforms that how to define
 *  a non-macro inline function while still be able to be checked by
 *  '#ifdef' or '#ifndef' preprocessor compilation directives.
 */

#ifndef __FARADAY_PLATFORM_DEPENDENT_SYSTEM_HEADER__
#define __FARADAY_PLATFORM_DEPENDENT_SYSTEM_HEADER__

/*
 * Define the macro name exactly the same as the function name,
 * so that it can be checked by '#ifdef'. When this macro is
 * expanded, it is expanded to itself.
 */
#define arch_reset arch_reset
extern inline void arch_reset(char mode)
{
	/* TODO: software reset */
}

#endif /* __FARADAY_PLATFORM_DEPENDENT_SYSTEM_HEADER__ */
