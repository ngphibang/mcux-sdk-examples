/*
 * Copyright 2022 NXP
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
product: Pins v12.0
processor: MIMXRT1011xxxxx
package_id: MIMXRT1011DAE5A
mcu_data: ksdk2_0
processor_version: 12.0.0
board: MIMXRT1010-EVK
pin_labels:
- {pin_num: '3', pin_signal: GPIO_09, label: LPUART1_RXD, identifier: UART1_RXD;BORD_UART1_RXD;BOARD_UART1_RXD;LPUART1_RXD}
- {pin_num: '2', pin_signal: GPIO_10, label: LPUART1_TXD, identifier: UART1_TXD;LPUART1_TXD}
power_domains: {NVCC_GPIO: '3.3'}
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
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', prefix: BOARD_, coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '48', peripheral: ARM, signal: arm_trace_swo, pin_signal: GPIO_AD_09, slew_rate: Fast}
  - {pin_num: '70', peripheral: GPIO2, signal: 'gpio_io, 05', pin_signal: GPIO_SD_05, pull_keeper_select: Pull, pull_up_down_config: Pull_Up_100K_Ohm, hysteresis_enable: Enable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           

  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_09_ARM_TRACE_SWO, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_05_GPIO2_IO05, 0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_09_ARM_TRACE_SWO, 0x90B1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_05_GPIO2_IO05, 0x01B0A0U); 
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
