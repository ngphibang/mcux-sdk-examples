/*
 * Copyright 2020 NXP.
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v8.0
processor: MCIMX7U5xxxxx
package_id: MCIMX7U5DVP07
mcu_data: ksdk2_0
processor_version: 8.0.1
board: MCIMX7ULP-EVK-REV-B
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'false', prefix: BOARD_, coreID: cm4}
- pin_list:
  - {pin_num: AB19, peripheral: LPUART0, signal: lpuart_rx, pin_signal: PTA19, PE: PE_1_pull_enabled, PS: PS_1_pull_up}
  - {pin_num: AC19, peripheral: LPUART0, signal: lpuart_tx, pin_signal: PTA18, PE: PE_1_pull_enabled, PS: PS_1_pull_up}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-M4[cm4] */
    IOMUXC_SetPinMux(BOARD_UART0_TX_PIN_FUNCTION_ID, 0U);
    IOMUXC_SetPinConfig(BOARD_UART0_TX_PIN_FUNCTION_ID,
                        IOMUXC0_SW_MUX_CTL_PAD_PE_MASK |
                        IOMUXC0_SW_MUX_CTL_PAD_PS_MASK);
    IOMUXC_SetPinMux(BOARD_UART0_RX_PIN_FUNCTION_ID, 0U);
    IOMUXC_SetPinConfig(BOARD_UART0_RX_PIN_FUNCTION_ID,
                        IOMUXC0_SW_MUX_CTL_PAD_PE_MASK |
                        IOMUXC0_SW_MUX_CTL_PAD_PS_MASK);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
LPSPI1_InitPins:
- options: {callFromInitBoot: 'false', prefix: BOARD_, coreID: cm4}
- pin_list:
  - {pin_num: AF18, peripheral: LPSPI1, signal: 'lpspi_pcs, 0', pin_signal: PTA15, identifier: ''}
  - {pin_num: AF17, peripheral: LPSPI1, signal: lpspi_sck, pin_signal: PTA14, identifier: ''}
  - {pin_num: AG16, peripheral: LPSPI1, signal: lpspi_sin, pin_signal: PTA12, identifier: ''}
  - {pin_num: AF16, peripheral: LPSPI1, signal: lpspi_sout, pin_signal: PTA13, identifier: ''}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : LPSPI1_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void LPSPI1_InitPins(void) {                               /*!< Function assigned for the core: Cortex-M4[cm4] */
    IOMUXC_SetPinMux(IOMUXC_PTA12_LPSPI1_SIN, 0U);
    IOMUXC_SetPinMux(IOMUXC_PTA13_LPSPI1_SOUT, 0U);
    IOMUXC_SetPinMux(IOMUXC_PTA14_LPSPI1_SCK, 0U);
    IOMUXC_SetPinMux(IOMUXC_PTA15_LPSPI1_PCS0, 0U);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
LPSPI1_DeinitPins:
- options: {callFromInitBoot: 'false', prefix: BOARD_, coreID: cm4}
- pin_list:
  - {pin_num: AF18, peripheral: PTA, signal: 'port, 15', pin_signal: PTA15, identifier: ''}
  - {pin_num: AF17, peripheral: PTA, signal: 'port, 14', pin_signal: PTA14, identifier: ''}
  - {pin_num: AG16, peripheral: PTA, signal: 'port, 12', pin_signal: PTA12, identifier: ''}
  - {pin_num: AF16, peripheral: PTA, signal: 'port, 13', pin_signal: PTA13, identifier: ''}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : LPSPI1_DeinitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void LPSPI1_DeinitPins(void) {                             /*!< Function assigned for the core: Cortex-M4[cm4] */
    IOMUXC_SetPinMux(IOMUXC_PTA12_PTA12, 0U);
    IOMUXC_SetPinMux(IOMUXC_PTA13_PTA13, 0U);
    IOMUXC_SetPinMux(IOMUXC_PTA14_PTA14, 0U);
    IOMUXC_SetPinMux(IOMUXC_PTA15_PTA15, 0U);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
