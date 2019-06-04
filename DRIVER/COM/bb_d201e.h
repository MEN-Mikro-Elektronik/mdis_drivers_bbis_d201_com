/***********************  I n c l u d e  -  F i l e  ************************
 *  
 *         Name: bb_d201e.h
 *
 *       Author: ds
 * 
 *  Description: reading words from the d201 EEPROM (NMC93CS46)
 *                      
 *     Switches: -
 *
 *	NOTE:	The most part of this code is an extract from 'PCI.C',
 *			a source file from the PLXmon Programm (see the header below). 
 *	************************************************************************
 *
 *	PCI.C
 *
 *	User application level code for showing and programming PCI devices.
 *	Emphasis on PLX devices.
 *	Designed as a component of PLX's general-purpose monitor program.
 *
 *	Copyright PLX Technology, 1996
 *
 *	Changes
 *	960521	Ryan	Genesis - PCI BIOS and PCI device interface
 *
 *	*************************************************************************
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

#ifndef _D201EEPROM_H_
#define _D201EEPROM_H_

#ifdef __cplusplus
   extern "C" {
#endif

#ifndef D201_VARIANT
# define D201_VARIANT D201
#endif

#ifndef D201_GLOBNAME
#define _D201_GLOBNAME(var,name) var##_##name
# ifndef _ONE_NAMESPACE_PER_DRIVER_
#  define D201_GLOBNAME(var,name) _D201_GLOBNAME(var,name)
# else
#  define D201_GLOBNAME(var,name) _D201_GLOBNAME(D201,name)
# endif
#endif

#define EepromReadBuf	D201_GLOBNAME(D201_VARIANT,EepromReadBuf)

/* EEPROM constant */
#define EE_ADDR_MASK	0x003f		/* for combining addresses with instructions	*/
#define EE_CMD_LEN		9			/* bits in instructions							*/
#define EE_READ			0x0180		/* 01 1000 0000 read instruction				*/
#define EE_WRITE		0x0140		/* 01 0100 0000 write instruction				*/
#define EE_WREN			0x0130		/* 01 0011 0000 write enable instruction		*/
#define EE_WDS			0x0100		/* 01 0000 0000 write disable instruction		*/
#define EE_PREN			0x0130		/* 01 0011 0000 protect enable instruction		*/
#define EE_PRCLEAR		0x0177		/* 01 1111 1111 clear protect register instr	*/

/* EEPROM Functions */
extern u_int32	EepromReadBuf(U_INT32_OR_64 MiscCtrlReg, u_int16 *dest, u_int16 offset, u_int16 wcount);

extern char* D201e_Ident( void );

#ifdef __cplusplus
	}
#endif

#endif	/* _D201EEPROM_H_ */

