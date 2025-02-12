/*
 * Copyright 2021 NXP.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_common.h"
#include "pin_mux.h"
#include "fsl_io_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-M33[cm33] */
   IO_MUX_SetPinMux(IO_MUX_FC3_USART_DATA);

}

void BOARD_InitPsRamPins(void) {
    /* FLEXSPI psram: GPIO35-41 */
    IO_MUX_SetPinMux(IO_MUX_QUAD_SPI_PSRAM);
    /* GPIO37 is for external DQS pin */
    IO_MUX_SetPinConfig(37, IO_MUX_PinConfigPullDown);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
