#************************** BBIS3 board descriptor **************************
#
#        Author: ds
#         $Date: 2000/08/31 15:32:29 $
#     $Revision: 2.2 $
#
#   Description: Metadescriptor for D201
#
#****************************************************************************

D201_SW_1 {
	#------------------------------------------------------------------------
	#	general parameters (don't modify)
	#------------------------------------------------------------------------
    DESC_TYPE           = U_INT32  2		# descriptor type (2=board)
    HW_TYPE             = STRING   D201_SW	# hardware name of device

	#------------------------------------------------------------------------
	#	PCI configuration
	#------------------------------------------------------------------------

	# define device IDs of bridges to CompactPCI backplane
	# see D201/DOC/pcibuspath.txt for list

	PCI_BUS_PATH		= BINARY   0x1e		# device IDs of bridges to 
											# compact PCI bus
    PCI_BUS_SLOT        = U_INT32  2		# Compact PCI bus slot 1=CPU
    #PCI_BUS_NUMBER     = U_INT32  1		# optional overwrites PCI_BUS_PATH
    #PCI_DEVICE_ID      = U_INT32 10		# optional overwrites PCI_BUS_SLOT

    PCI_CHECK_LOCATION  = U_INT32  0		# don't check geographic location

    DEBUG_LEVEL         = U_INT32  0xc0008003	# BBIS driver
    DEBUG_LEVEL_BK      = U_INT32  0xc0008000	# BBIS kernel
    DEBUG_LEVEL_OSS     = U_INT32  0xc0008000	# OSS calls
    DEBUG_LEVEL_DESC    = U_INT32  0xc0008000	# DESC calls
}
