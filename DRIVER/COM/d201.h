/***********************  I n c l u d e  -  F i l e  ************************
 *
 *         Name: d201.h
 *
 *       Author: ds
 *
 *  Description: D201 BBIS - Common defines and prototypes
 *
 *     Switches: D201_VARIANT
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

#ifndef D201_H_
#define D201_H_

#ifdef __cplusplus
    extern "C" {
#endif

/*-----------------------------------------+
|  DEFINES (COMMON)                        |
+-----------------------------------------*/

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

/* variant specific function names */
#define Ident 			D201_GLOBNAME(D201_VARIANT,Ident)
#define PldIdent		D201_GLOBNAME(D201_VARIANT,PldIdent)
#define ttf_D201etc		D201_GLOBNAME(D201_VARIANT,ttf_D201etc)
#define ttf_F201etc		D201_GLOBNAME(D201_VARIANT,ttf_F201etc)
#define __D201_GetEntry	D201_GLOBNAME(D201_VARIANT,GetEntry)


#define D201_RES_NBR (BRD_SLOT_NBR+1)		/* number of resources			*/

/* PCI Config Space */
#define D201_PCI_VEN_ID			0x10b5		/* Vendor Id					*/
#define D201_PCI_DEV_ID			0x9050		/* Device Id					*/
#define D201_PCI_SUBVEN_ID		0x10b5		/* Subsystem Vendor Id			*/
#define D201_PCI_SUBDEV_ID		0x9050		/* Subsystem Device Id			*/
#define D201_PCI_RR_MEM			0			/* Base Addr RReg (MEM)			*/  
#define D201_PCI_RR_IO			1			/* Base Addr RReg (IO)			*/
#define D201_PCI_M_MEM(nr)		(nr+2)		/* Base Addr Module 0..3 (MEM)	*/

/* M-Module address spaces */
#define D201_M_A24				0x00		/* A24 location					*/
#define D201_M_A24_SIZE         0x00fffe00	/* A24 size						*/
#define D201_M_A08				0x00fffe00	/* A08 location					*/
#define D201_M_A08_NOA24		0x00		/* A08 location (no A24)		*/
#define D201_M_A08_SIZE         0x100		/* A08 size						*/
#define D201_M_CTRL				0x00ffff00	/* ctrl reg location            */
#define D201_M_CTRL_NOA24		0x100		/* ctrl reg location (no A24)	*/
#define D201_M_CTRL_SIZE        0x100		/* ctrl reg size                */

/* PLD loader interface */
#define D201_PLD_DATA			MISC_TX_EPR
#define D201_PLD_DCLK			MISC_CLK_EPR
#define D201_PLD_CONFIG			(MISC_IO2_DATA | MISC_IO3_DATA | MISC_CS_EPR)
#define D201_PLD_STATUS			MISC_IO0_DATA
#define D201_PLD_CFGDONE		MISC_IO1_DATA

/* EEPROM specifics */
#define D201_EE_ID				0x64        /* D201 EEPROM ID location		*/
#define D201_EE_ID_LENGTH		28          /* 28 bytes long				*/
#define D201_EE_VEN_OFFSET		2           /* offset to vendor ID			*/
#define D201_EE_VEN_LENGTH		8           /* length of vendor ID			*/
#define D201_EE_VEN_ID			"MEN GmbH"  /* Vendor Id (8 char)			*/
#define D201_EE_PROD_OFFSET		10          /* offset to product ID			*/
#define D201_EE_PROD_LENGTH		6           /* length of product ID 6 of 9	*/

/* 
 * M-Module ctrl reg (locations and bit definitions)
 */
/* --------------------- Registers ------------------ */
# if (defined(_BIG_ENDIAN_) && !defined(MAC_BYTESWAP)) || (defined(_LITTLE_ENDIAN_) && defined(MAC_BYTESWAP))
# define D201_16BITREGS_OFF	0x02 	/* address correct word */
#else
# define D201_16BITREGS_OFF	0x00
#endif

#define D201_M_MODE			(0x00+D201_16BITREGS_OFF)
#define D201_M_INT			(0x04+D201_16BITREGS_OFF)
#define D201_M_TRIGA_DIV	(0x80+D201_16BITREGS_OFF)
#define D201_M_TRIGB_DIV	(0x84+D201_16BITREGS_OFF)
#define D201_M_TRIGA_CTRL	(0x88+D201_16BITREGS_OFF)
#define D201_M_TRIGB_CTRL	(0x8c+D201_16BITREGS_OFF)
#define D201_M_GEOADDR		(0x94+D201_16BITREGS_OFF)

/* ------------------- Mode Control ----------------- */
#define D201_M_MODE_ABITS	0x03    /* addr mode bits */
#define D201_M_MODE_A08		0x00    /* A08			  */
#define D201_M_MODE_A24		0x02    /* A24			  */

#define D201_M_MODE_DBITS	0x0C    /* data mode bits */
#define D201_M_MODE_D16		0x04    /* data mode D16  */
#define D201_M_MODE_D32		0x08    /* data mode D32  */

/* ------------ Interrupt Control/Status ------------ */
#define D201_M_INT_ENABLE	0x10    /* Int_en		  */
#define D201_M_INT_TIMEOUT	0x20    /* Timeout_flag   */
#define D201_M_INT_BUSERR	0x40    /* Bus_error_flag */
#define D201_M_INT_INTFLAG	0x80    /* Int_flag       */

/* ---------------- Geographic Address -------------- */
#define D201_M_GEOADDR_MASK 0x1F	/* mask			  */

/*-----------------------------------------+
|  PROTOTYPES (COMMON)                     |
+-----------------------------------------*/
/* externals */
extern char*  Ident(void);			/* BBIS ident */
extern char*  PldIdent(void);		/* ttf data ident */
extern const u_int8 ttf_D201etc[];		/* D201 ttf data	   */  
extern const u_int8 ttf_F201etc[];		/* F201 ttf data	   */  


#ifdef __cplusplus
    }
#endif

#endif /* D201_H_ */




