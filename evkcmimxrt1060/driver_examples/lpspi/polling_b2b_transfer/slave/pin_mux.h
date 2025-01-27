/*
 * Copyright 2023 NXP
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/***********************************************************************************************************************
 * Definitions
 **********************************************************************************************************************/

/*! @brief Direction type  */
typedef enum _pin_mux_direction
{
  kPIN_MUX_DirectionInput = 0U,         /* Input direction */
  kPIN_MUX_DirectionOutput = 1U,        /* Output direction */
  kPIN_MUX_DirectionInputOrOutput = 2U  /* Input or output direction */
} pin_mux_direction_t;

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

/* GPIO_AD_B0_13 (coord L14), UART1_RXD/J11[2] */
/* Routed pin properties */
#define BOARD_INITPINS_UART1_RXD_PERIPHERAL                              LPUART1   /*!< Peripheral name */
#define BOARD_INITPINS_UART1_RXD_SIGNAL                                       RX   /*!< Signal name */

/* GPIO_AD_B0_12 (coord K14), UART1_TXD/J13[2] */
/* Routed pin properties */
#define BOARD_INITPINS_UART1_TXD_PERIPHERAL                              LPUART1   /*!< Peripheral name */
#define BOARD_INITPINS_UART1_TXD_SIGNAL                                       TX   /*!< Signal name */

/* GPIO_SD_B0_00 (coord J4), SD1_CMD/J22[3]/J17[6] */
/* Routed pin properties */
#define BOARD_INITPINS_SD1_CMD_PERIPHERAL                                 LPSPI1   /*!< Peripheral name */
#define BOARD_INITPINS_SD1_CMD_SIGNAL                                        SCK   /*!< Signal name */

/* GPIO_SD_B0_01 (coord J3), SD1_CLK/J22[5]/J17[3] */
/* Routed pin properties */
#define BOARD_INITPINS_SD1_CLK_PERIPHERAL                                 LPSPI1   /*!< Peripheral name */
#define BOARD_INITPINS_SD1_CLK_SIGNAL                                       PCS0   /*!< Signal name */

/* GPIO_SD_B0_02 (coord J1), SD1_D0/J22[7]/J17[4] */
/* Routed pin properties */
#define BOARD_INITPINS_SD1_D0_PERIPHERAL                                  LPSPI1   /*!< Peripheral name */
#define BOARD_INITPINS_SD1_D0_SIGNAL                                         SDO   /*!< Signal name */

/* GPIO_SD_B0_03 (coord K1), SD1_D1/J22[8]/J17[5] */
/* Routed pin properties */
#define BOARD_INITPINS_SD1_D1_PERIPHERAL                                  LPSPI1   /*!< Peripheral name */
#define BOARD_INITPINS_SD1_D1_SIGNAL                                         SDI   /*!< Signal name */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
