/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2020 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v7.0
processor: LPC54628J512
package_id: LPC54628J512ET180
mcu_data: ksdk2_0
processor_version: 6.0.1
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_iocon.h"
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
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: B13, peripheral: FLEXCOMM0, signal: RXD_SDA_MOSI, pin_signal: PIO0_29/FC0_RXD_SDA_MOSI/CTIMER2_MAT3/SCT0_OUT8/TRACEDATA(2), mode: inactive, invert: disabled,
    glitch_filter: disabled, slew_rate: fast, open_drain: disabled}
  - {pin_num: A2, peripheral: FLEXCOMM0, signal: TXD_SCL_MISO, pin_signal: PIO0_30/FC0_TXD_SCL_MISO/CTIMER0_MAT0/SCT0_OUT9/TRACEDATA(1), mode: inactive, invert: disabled,
    glitch_filter: disabled, slew_rate: fast, open_drain: disabled}
  - {pin_num: B14, peripheral: ENET, signal: 'ENET_TXD, 0', pin_signal: PIO4_8/ENET_TXD0/FC2_SCK/USB0_OVERCURRENTN/USB0_UP_LED/SCT0_GPI1, mode: inactive, invert: disabled,
    glitch_filter: disabled, slew_rate: standard, open_drain: disabled}
  - {pin_num: B9, peripheral: ENET, signal: ENET_RX_DV, pin_signal: PIO4_10/ENET_RX_DV/FC2_TXD_SCL_MISO/USB1_OVERCURRENTN/USB1_UP_LED/SCT0_GPI3, mode: inactive, invert: disabled,
    glitch_filter: disabled, slew_rate: standard, open_drain: disabled}
  - {pin_num: A9, peripheral: ENET, signal: 'ENET_RXD, 0', pin_signal: PIO4_11/ENET_RXD0/FC2_CTS_SDA_SSEL0/USB0_IDVALUE/SCT0_GPI4, mode: inactive, invert: disabled,
    glitch_filter: disabled, slew_rate: standard, open_drain: disabled}
  - {pin_num: A6, peripheral: ENET, signal: 'ENET_RXD, 1', pin_signal: PIO4_12/ENET_RXD1/FC2_RTS_SCL_SSEL1/SCT0_GPI5, mode: inactive, invert: disabled, glitch_filter: disabled,
    slew_rate: standard, open_drain: disabled}
  - {pin_num: B6, peripheral: ENET, signal: ENET_TX_EN, pin_signal: PIO4_13/ENET_TX_EN/CTIMER4_MAT0/SCT0_GPI6, mode: inactive, invert: disabled, glitch_filter: disabled,
    slew_rate: standard, open_drain: disabled}
  - {pin_num: B5, peripheral: ENET, signal: ENET_RX_CLK, pin_signal: PIO4_14/ENET_RX_CLK/CTIMER4_MAT1/FC9_SCK/SCT0_GPI7, mode: inactive, invert: disabled, glitch_filter: disabled,
    slew_rate: standard, open_drain: disabled}
  - {pin_num: A4, peripheral: ENET, signal: ENET_MDC, pin_signal: PIO4_15/ENET_MDC/CTIMER4_MAT2/FC9_RXD_SDA_MOSI, mode: inactive, invert: disabled, glitch_filter: disabled,
    slew_rate: standard, open_drain: disabled}
  - {pin_num: C4, peripheral: ENET, signal: ENET_MDIO, pin_signal: PIO4_16/ENET_MDIO/CTIMER4_MAT3/FC9_TXD_SCL_MISO, mode: inactive, invert: disabled, glitch_filter: disabled,
    slew_rate: standard, open_drain: disabled}
  - {pin_num: E14, peripheral: ENET, signal: 'ENET_TXD, 1', pin_signal: PIO0_17/FC4_SSEL2/SD_CARD_DET_N/SCT0_GPI7/SCT0_OUT0/EMC_OEN/ENET_TXD1, mode: inactive, invert: disabled,
    glitch_filter: disabled, slew_rate: standard, open_drain: disabled}
  - {pin_num: H11, peripheral: GPIO, signal: 'PIO2, 26', pin_signal: PIO2_26/LCD_VD(8)/FC3_SCK/CTIMER2_CAP1, mode: pullUp, invert: disabled, glitch_filter: disabled,
    slew_rate: standard, open_drain: disabled}
  - {pin_num: P2, peripheral: SWD, signal: SWO, pin_signal: PIO0_10/FC6_SCK/CTIMER2_CAP2/CTIMER2_MAT0/FC1_TXD_SCL_MISO/SWO/ADC0_0, mode: inactive, invert: disabled,
    glitch_filter: disabled, open_drain: disabled}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
/* Function assigned for the Cortex-M4F */
void BOARD_InitPins(void)
{
    /* Enables the clock for the IOCON block. 0 = Disable; 1 = Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);

    const uint32_t port0_pin10_config = (/* Pin is configured as SWO */
                                         IOCON_PIO_FUNC6 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN10 (coords: P2) is configured as SWO */
    IOCON_PinMuxSet(IOCON, 0U, 10U, port0_pin10_config);

    const uint32_t port0_pin17_config = (/* Pin is configured as ENET_TXD1 */
                                         IOCON_PIO_FUNC7 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN17 (coords: E14) is configured as ENET_TXD1 */
    IOCON_PinMuxSet(IOCON, 0U, 17U, port0_pin17_config);

    const uint32_t port0_pin29_config = (/* Pin is configured as FC0_RXD_SDA_MOSI */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Fast mode, slew rate control is disabled */
                                         IOCON_PIO_SLEW_FAST |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN29 (coords: B13) is configured as FC0_RXD_SDA_MOSI */
    IOCON_PinMuxSet(IOCON, 0U, 29U, port0_pin29_config);

    const uint32_t port0_pin30_config = (/* Pin is configured as FC0_TXD_SCL_MISO */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Fast mode, slew rate control is disabled */
                                         IOCON_PIO_SLEW_FAST |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN30 (coords: A2) is configured as FC0_TXD_SCL_MISO */
    IOCON_PinMuxSet(IOCON, 0U, 30U, port0_pin30_config);

    const uint32_t port2_pin26_config = (/* Pin is configured as PIO2_26 */
                                         IOCON_PIO_FUNC0 |
                                         /* Selects pull-up function */
                                         IOCON_PIO_MODE_PULLUP |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT2 PIN26 (coords: H11) is configured as PIO2_26 */
    IOCON_PinMuxSet(IOCON, 2U, 26U, port2_pin26_config);

    const uint32_t port4_pin10_config = (/* Pin is configured as ENET_RX_DV */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT4 PIN10 (coords: B9) is configured as ENET_RX_DV */
    IOCON_PinMuxSet(IOCON, 4U, 10U, port4_pin10_config);

    const uint32_t port4_pin11_config = (/* Pin is configured as ENET_RXD0 */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT4 PIN11 (coords: A9) is configured as ENET_RXD0 */
    IOCON_PinMuxSet(IOCON, 4U, 11U, port4_pin11_config);

    const uint32_t port4_pin12_config = (/* Pin is configured as ENET_RXD1 */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT4 PIN12 (coords: A6) is configured as ENET_RXD1 */
    IOCON_PinMuxSet(IOCON, 4U, 12U, port4_pin12_config);

    const uint32_t port4_pin13_config = (/* Pin is configured as ENET_TX_EN */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT4 PIN13 (coords: B6) is configured as ENET_TX_EN */
    IOCON_PinMuxSet(IOCON, 4U, 13U, port4_pin13_config);

    const uint32_t port4_pin14_config = (/* Pin is configured as ENET_RX_CLK */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT4 PIN14 (coords: B5) is configured as ENET_RX_CLK */
    IOCON_PinMuxSet(IOCON, 4U, 14U, port4_pin14_config);

    const uint32_t port4_pin15_config = (/* Pin is configured as ENET_MDC */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT4 PIN15 (coords: A4) is configured as ENET_MDC */
    IOCON_PinMuxSet(IOCON, 4U, 15U, port4_pin15_config);

    const uint32_t port4_pin16_config = (/* Pin is configured as ENET_MDIO */
                                         IOCON_PIO_FUNC1 |
                                         /* No addition pin function */
                                         IOCON_PIO_MODE_INACT |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT4 PIN16 (coords: C4) is configured as ENET_MDIO */
    IOCON_PinMuxSet(IOCON, 4U, 16U, port4_pin16_config);

    const uint32_t port4_pin8_config = (/* Pin is configured as ENET_TXD0 */
                                        IOCON_PIO_FUNC1 |
                                        /* No addition pin function */
                                        IOCON_PIO_MODE_INACT |
                                        /* Input function is not inverted */
                                        IOCON_PIO_INV_DI |
                                        /* Enables digital function */
                                        IOCON_PIO_DIGITAL_EN |
                                        /* Input filter disabled */
                                        IOCON_PIO_INPFILT_OFF |
                                        /* Standard mode, output slew rate control is enabled */
                                        IOCON_PIO_SLEW_STANDARD |
                                        /* Open drain is disabled */
                                        IOCON_PIO_OPENDRAIN_DI);
    /* PORT4 PIN8 (coords: B14) is configured as ENET_TXD0 */
    IOCON_PinMuxSet(IOCON, 4U, 8U, port4_pin8_config);
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
