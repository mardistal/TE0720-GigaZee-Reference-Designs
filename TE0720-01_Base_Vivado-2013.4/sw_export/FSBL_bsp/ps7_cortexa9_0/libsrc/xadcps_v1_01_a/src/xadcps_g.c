/******************************************************************************
*
* (c) Copyright 2010-2013 Xilinx, Inc. All rights reserved.
*
* This file contains confidential and proprietary information of Xilinx, Inc.
* and is protected under U.S. and international copyright and other
* intellectual property laws.
*
* DISCLAIMER
* This disclaimer is not a license and does not grant any rights to the
* materials distributed herewith. Except as otherwise provided in a valid
* license issued to you by Xilinx, and to the maximum extent permitted by
* applicable law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND WITH ALL
* FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES AND CONDITIONS, EXPRESS,
* IMPLIED, OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF
* MERCHANTABILITY, NON-INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE;
* and (2) Xilinx shall not be liable (whether in contract or tort, including
* negligence, or under any other theory of liability) for any loss or damage
* of any kind or nature related to, arising under or in connection with these
* materials, including for any direct, or any indirect, special, incidental,
* or consequential loss or damage (including loss of data, profits, goodwill,
* or any type of loss or damage suffered as a result of any action brought by
* a third party) even if such damage or loss was reasonably foreseeable or
* Xilinx had been advised of the possibility of the same.
*
* CRITICAL APPLICATIONS
* Xilinx products are not designed or intended to be fail-safe, or for use in
* any application requiring fail-safe performance, such as life-support or
* safety devices or systems, Class III medical devices, nuclear facilities,
* applications related to the deployment of airbags, or any other applications
* that could lead to death, personal injury, or severe property or
* environmental damage (individually and collectively, "Critical
* Applications"). Customer assumes the sole risk and liability of any use of
* Xilinx products in Critical Applications, subject only to applicable laws
* and regulations governing limitations on product liability.
*
* THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS PART OF THIS FILE
* AT ALL TIMES.
*
******************************************************************************/
/*****************************************************************************/
/**
*
* @file xadcps_g.c
*
* This file contains a configuration table that specifies the configuration
* of XADC devices in the system when accessing through the Device Config
* interface in Zynq.
*
* See xadcps.h for more information about this driver.
*
* @note None.
*
* <pre>
*
* MODIFICATION HISTORY:
*
* Ver   Who    Date     Changes
* ----- -----  -------- -----------------------------------------------------
* 1.00a ssb    12/22/11 First release based on the XPS/AXI xadc driver
* 1.01a asa    9/16/13  Hash defines are removed and replaced with hard-coded
*					    values. This is non-standard, however is being done
*						after a new version of BSP (v3_11a) and new version of
*						xadcps driver (v1_02a) is released. If people use
*					    standalone BSP versions v3_11a onwards and xadcps
*						driver versions v1_02a onwards there will not be any
*						issues. However if someone tries with BSP versions
*						3_11a onwards with the xadcps driver v1_01a or lower
*						there will be compilation issues with the driver. The
*						macros earlier defined in this file and now being
*						removed will lead to compilation issues as the the
*						definitions for them are removed from file
*						xparameters_ps.h in BSP version v3_11a onwards. This
*						fixes the CR #737338.
* </pre>
*
******************************************************************************/

/***************************** Include Files *********************************/

#include "xadcps.h"
#include "xparameters.h"

/************************** Constant Definitions *****************************/

/**************************** Type Definitions *******************************/

/***************** Macros (Inline Functions) Definitions *********************/

/************************** Function Prototypes ******************************/

/************************** Variable Prototypes ******************************/

/**
 * This table contains configuration information for each XADC Monitor/ADC
 * device in the system.
 */
XAdcPs_Config XAdcPs_ConfigTable[1] =
{
	{
		0,				/**< Unique ID of device */
		0xF8007000		/**< Base address of device */
	}
};