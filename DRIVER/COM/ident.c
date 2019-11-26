/*********************  P r o g r a m  -  M o d u l e ***********************
 *
 *         Name: ident.c
 *      Project:
 *
 *       Author: ds
 *
 *  Description: Return D201 ident string
 *
 *     Required: -
 *     Switches: DBG	  	enable debugging
 *
 *---------------------------[ Public Functions ]----------------------------
 *
 *  D201_Ident              Return ident string
 *
 *
 *---------------------------------------------------------------------------
 * Copyright 1998-2019, MEN Mikro Elektronik GmbH
 ******************************************************************************/
/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <MEN/men_typs.h>
#include "d201.h"

#ifdef _D201
#ifndef MAC_BYTESWAP
	static const char IdentString[]="D201 - D201 " MENT_XSTR(MAK_REVISION);
#else
	static const char IdentString[]="D201 - D201 Swapped " MENT_XSTR(MAK_REVISION);
#endif
#endif
#ifdef _C203
#ifndef MAC_BYTESWAP
	static const char IdentString[]="C203 - C203 " MENT_XSTR(MAK_REVISION);
#else
	static const char IdentString[]="C203 - C203 Swapped " MENT_XSTR(MAK_REVISION);
#endif
#endif
#ifdef _C204
#ifndef MAC_BYTESWAP
	static const char IdentString[]="C204 - C204 " MENT_XSTR(MAK_REVISION);
#else
	static const char IdentString[]="C204 - C204 Swapped " MENT_XSTR(MAK_REVISION);
#endif
#endif
#ifdef _F201
#ifndef MAC_BYTESWAP
	static const char IdentString[]="F201 - F201 " MENT_XSTR(MAK_REVISION);
#else
	static const char IdentString[]="F201 - F201 Swapped " MENT_XSTR(MAK_REVISION);
#endif
#endif
#ifdef _F202
#ifndef MAC_BYTESWAP
	static const char IdentString[]="F202 - F202 " MENT_XSTR(MAK_REVISION);
#else
	static const char IdentString[]="F202 - F202 Swapped " MENT_XSTR(MAK_REVISION);
#endif
#endif

/*********************************** D201_Ident *****************************
 *
 *  Description:  Return ident string
 *
 *---------------------------------------------------------------------------
 *  Input......:  -
 *  Output.....:  return  pointer to ident string
 *  Globals....:  -
 ****************************************************************************/
char* Ident( void ) /* nodoc */
{
	return ( (char*) IdentString );
}









