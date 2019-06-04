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
 * Copyright (c) 1998-2019, MEN Mikro Elektronik GmbH
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
	return ( 

#ifdef _D201
		"D201 - D201"
#endif
#ifdef _C203
		"C203 - C203"
#endif
#ifdef _C204
		"C204 - C204"
#endif
#ifdef _F201
		"F201 - F201"
#endif
#ifdef _F202
		"F202 - F202"
#endif
#ifdef MAC_BYTESWAP
		" Swapped"
#endif
		" Base Board Handler: %FSREV COM/DRIVERS/BBIS/d201 1.59 2014-10-30%" );
}









