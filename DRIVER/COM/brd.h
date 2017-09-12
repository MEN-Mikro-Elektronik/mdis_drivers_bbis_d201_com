/***********************  I n c l u d e  -  F i l e  ************************
 *
 *         Name: brd.h
 *
 *       Author: ds
 *        $Date: 2000/03/09 12:19:02 $
 *    $Revision: 1.4 $
 *
 *  Description: D201 BBIS - Board specific defines and prototypes
 *
 *     Switches: D201, F201, F202, C203, C204
 *
 *-------------------------------[ History ]---------------------------------
 *
 * $Log: brd.h,v $
 * Revision 1.4  2000/03/09 12:19:02  kp
 * use new compiler switches with _ prefix
 *
 * Revision 1.3  2000/03/01 14:56:45  kp
 * EepromReadBuf was a global symbol. Renamed this variant specific
 * Removed all global (static variables). Sustituted with defines
 * Made PLD data const array
 *
 * Revision 1.2  1999/11/03 10:13:58  Gromann
 * changed G_ttf to static for one namespace
 *
 * Revision 1.1  1999/09/08 09:30:16  Schmidt
 * Initial Revision
 *
 *---------------------------------------------------------------------------
 * (c) Copyright 1999 by MEN mikro elektronik GmbH, Nuremberg, Germany
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

#ifndef BRD_H_
#define BRD_H_

#ifdef __cplusplus
    extern "C" {
#endif

/*-----------------------------------------+
|  D201 SPECIFICS                          |
+-----------------------------------------*/
#ifdef _D201
#define BRD_NAME			"D201"			/* board name			  */
#define BRD_EE_PROD_ID		"02D201"		/* product Id (6+3 char)  */
#define BRD_SLOT_NBR		4				/* number of module slots */
#define PLD_DATA			ttf_D201etc		/* used pld data		  */ 
#endif

/*-----------------------------------------+
|  F201 SPECIFICS                          |
+-----------------------------------------*/
#ifdef _F201
#define BRD_NAME			"F201"			/* board name			  */
#define BRD_EE_PROD_ID		"02F201"		/* product Id (6+3 char)  */
#define BRD_SLOT_NBR		1				/* number of module slots */
#define PLD_DATA			ttf_F201etc		/* used pld data		  */ 
#endif

/*-----------------------------------------+
|  F202 SPECIFICS                          |
+-----------------------------------------*/
#ifdef _F202
#define BRD_NAME			"F202"			/* board name			  */
#define BRD_EE_PROD_ID		"02F202"		/* product Id (6+3 char)  */
#define BRD_SLOT_NBR		2				/* number of module slots */
#define PLD_DATA			ttf_F201etc		/* used pld data		  */ 
#endif

/*-----------------------------------------+
|  C203 SPECIFICS                          |
+-----------------------------------------*/
#ifdef _C203
#define BRD_NAME			"C203"			/* board name			  */
#define BRD_EE_PROD_ID		"03C203"		/* product Id (6+3 char)  */
#define BRD_SLOT_NBR		3				/* number of module slots */
#define PLD_DATA			ttf_D201etc		/* used pld data		  */ 
#endif

/*-----------------------------------------+
|  C204 SPECIFICS                          |
+-----------------------------------------*/
#ifdef _C204
#define BRD_NAME			"C204"			/* board name			  */
#define BRD_EE_PROD_ID		"03C204"		/* product Id (6+3 char)  */
#define BRD_SLOT_NBR		1				/* number of module slots */
#define PLD_DATA			ttf_D201etc		/* used pld data		  */ 
#endif

#ifdef __cplusplus
    }
#endif

#endif /* BRD_H_ */




