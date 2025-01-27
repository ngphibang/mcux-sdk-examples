/*
 * Copyright 2023 NXP
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
product: Pins v13.1
processor: MIMX8UD5xxx08
package_id: MIMX8UD5DVK08
mcu_data: ksdk2_0
processor_version: 0.13.4
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
    BOARD_InitPins();
    BOARD_I2C_ConfigurePins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: D2, peripheral: LPUART1, signal: lpuart_tx, pin_signal: PTA10, PS: UP, PE: ENABLED}
  - {pin_num: C1, peripheral: LPUART1, signal: lpuart_rx, pin_signal: PTA11, PS: UP, PE: ENABLED}
  - {pin_num: A9, peripheral: FXIO0, signal: 'fxio_d, 16', pin_signal: PTB0, PS: UP, PE: ENABLED, SRE: SLOW, ODE: OPEN_DRAIN, DSE: HIDRIVE}
  - {pin_num: B10, peripheral: FXIO0, signal: 'fxio_d, 17', pin_signal: PTB1, PS: UP, PE: ENABLED, SRE: SLOW, ODE: OPEN_DRAIN, DSE: HIDRIVE}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {                                /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PTA10_LPUART1_TX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA10_LPUART1_TX,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTA11_LPUART1_RX, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA11_LPUART1_RX,
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTB0_FXIO0_D16, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTB0_FXIO0_D16,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_ODE_MASK |
                        IOMUXC_PCR_SRE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTB1_FXIO0_D17, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTB1_FXIO0_D17,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_ODE_MASK |
                        IOMUXC_PCR_SRE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
}


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_I2C_ConfigurePins:
- options: {callFromInitBoot: 'true', coreID: cm33}
- pin_list:
  - {pin_num: F6, peripheral: LPI2C0, signal: lpi2c_scl, pin_signal: PTA8, PS: UP, PE: ENABLED, SRE: SLOW, ODE: OPEN_DRAIN, DSE: HIDRIVE}
  - {pin_num: E5, peripheral: LPI2C0, signal: lpi2c_sda, pin_signal: PTA9, PS: UP, PE: ENABLED, SRE: SLOW, ODE: OPEN_DRAIN, DSE: HIDRIVE}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_I2C_ConfigurePins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_I2C_ConfigurePins(void) {                       /*!< Function assigned for the core: Cortex-M33[cm33] */
    IOMUXC_SetPinMux(IOMUXC_PTA8_LPI2C0_SCL, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA8_LPI2C0_SCL,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_ODE_MASK |
                        IOMUXC_PCR_SRE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
    IOMUXC_SetPinMux(IOMUXC_PTA9_LPI2C0_SDA, 0U);
    IOMUXC_SetPinConfig(IOMUXC_PTA9_LPI2C0_SDA,
                        IOMUXC_PCR_DSE_MASK |
                        IOMUXC_PCR_ODE_MASK |
                        IOMUXC_PCR_SRE_MASK |
                        IOMUXC_PCR_PE_MASK |
                        IOMUXC_PCR_PS_MASK);
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
