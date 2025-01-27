/*
 * Copyright 2021-2023 NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/


#include "modelrunner.h"

#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "timer.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/
int64_t os_clock_now(){
    return TIMER_GetTimeInUS();
}

/*!
 * @brief Main function.
 */
int main(void)
{
    RESET_PeripheralReset(kHSGPIO2_RST_SHIFT_RSTn);
	/*  Config OTP SHADOW register to enable ROM code QSPI reset function. (Reset PIN is P2_12)*/
    OCOTP->OTP_SHADOW[97] = (uint32_t)((1 << 14) | (2 << 15) | (12 << 18));
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitDebugConsole();
	/* Switch flexspi clock to FFRO*/
	IAP_FlexspiSetClockSource(3);
  TIMER_Init();

    PRINTF("\r\n*************************************************");
    PRINTF("\r\n               TFLite Modelrunner");
    PRINTF("\r\n*************************************************\r\n");

    modelrunner();

}
