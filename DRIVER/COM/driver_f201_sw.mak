#***************************  M a k e f i l e  *******************************
#  
#         Author: kp
#          $Date: 2004/03/10 17:31:46 $
#      $Revision: 1.3 $
#  
#    Description: makefile descriptor for F201 Base Board Handler (swapped)
#                      
#---------------------------------[ History ]---------------------------------
#
#   $Log: driver_f201_sw.mak,v $
#   Revision 1.3  2004/03/10 17:31:46  dpfeuffer
#   id lib/include added
#
#   Revision 1.2  2000/03/13 08:18:36  kp
#   Must use pld_sw rather pld lib
#
#   Revision 1.1  2000/03/09 12:19:17  kp
#   Initial Revision
#
#-----------------------------------------------------------------------------
#   (c) Copyright 1999 by MEN mikro elektronik GmbH, Nuernberg, Germany 
#*****************************************************************************
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.


MAK_NAME=f201_sw

MAK_SWITCH=$(SW_PREFIX)MAC_MEM_MAPPED \
		   $(SW_PREFIX)MAC_BYTESWAP \
		   $(SW_PREFIX)_F201 \
		   $(SW_PREFIX)D201_VARIANT=F201_SW

MAK_LIBS=$(LIB_PREFIX)$(MEN_LIB_DIR)/desc$(LIB_SUFFIX)	\
         $(LIB_PREFIX)$(MEN_LIB_DIR)/oss$(LIB_SUFFIX)	\
         $(LIB_PREFIX)$(MEN_LIB_DIR)/pld_sw$(LIB_SUFFIX)	\
         $(LIB_PREFIX)$(MEN_LIB_DIR)/dbg$(LIB_SUFFIX)		\
         $(LIB_PREFIX)$(MEN_LIB_DIR)/id_sw$(LIB_SUFFIX)

MAK_INCL=$(MEN_MOD_DIR)/brd.h		\
         $(MEN_MOD_DIR)/bb_d201e.h	\
         $(MEN_MOD_DIR)/d201.h		\
         $(MEN_INC_DIR)/bb_defs.h	\
         $(MEN_INC_DIR)/bb_entry.h	\
         $(MEN_INC_DIR)/bb_d201.h	\
         $(MEN_INC_DIR)/dbg.h		\
         $(MEN_INC_DIR)/desc.h		\
         $(MEN_INC_DIR)/maccess.h	\
         $(MEN_INC_DIR)/mdis_api.h	\
         $(MEN_INC_DIR)/mdis_com.h	\
         $(MEN_INC_DIR)/mdis_err.h	\
         $(MEN_INC_DIR)/men_typs.h	\
         $(MEN_INC_DIR)/modcom.h	\
         $(MEN_INC_DIR)/oss.h		\
         $(MEN_INC_DIR)/pci9050.h	\
         $(MEN_INC_DIR)/pld_load.h

MAK_INP1=bb_d201$(INP_SUFFIX)
MAK_INP2=bb_d201e$(INP_SUFFIX)
MAK_INP3=f201_pld$(INP_SUFFIX)
MAK_INP4=ident$(INP_SUFFIX)

MAK_INP=$(MAK_INP1) $(MAK_INP2) $(MAK_INP3) $(MAK_INP4)


