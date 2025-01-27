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

#define BOARD_INITPINS_IOMUXC_GPR_GPR26_GPIO_MUX1_GPIO_SEL_MASK 0x20U /*!< GPIO1 and GPIO6 share same IO MUX function, GPIO_MUX1 selects one GPIO function: affected bits mask */
#define BOARD_INITPINS_IOMUXC_GPR_GPR27_GPIO_MUX2_GPIO_SEL_MASK 0x10000000U /*!< GPIO2 and GPIO7 share same IO MUX function, GPIO_MUX2 selects one GPIO function: affected bits mask */

/* GPIO_AD_B0_05 (coord G14), CAN_STBY/U23[8]/Flash_RST/U20[A4]/DC_I2S2_TX_BCLK/J19[3]/BOOT_MODE[1] */
/* Routed pin properties */
#define BOARD_CAN_STBY_PERIPHERAL                                          GPIO1   /*!< Peripheral name */
#define BOARD_CAN_STBY_SIGNAL                                            gpio_io   /*!< Signal name */
#define BOARD_CAN_STBY_CHANNEL                                                5U   /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_CAN_STBY_GPIO                                                GPIO1   /*!< GPIO peripheral base pointer */
#define BOARD_CAN_STBY_GPIO_PIN                                               5U   /*!< GPIO pin number */
#define BOARD_CAN_STBY_GPIO_PIN_MASK                                  (1U << 5U)   /*!< GPIO pin mask */
#define BOARD_CAN_STBY_PORT                                                GPIO1   /*!< PORT peripheral base pointer */
#define BOARD_CAN_STBY_PIN                                                    5U   /*!< PORT pin number */
#define BOARD_CAN_STBY_PIN_MASK                                       (1U << 5U)   /*!< PORT pin mask */

/* GPIO_B1_12 (coord D13), SD_CD_SW/J22[9] */
/* Routed pin properties */
#define BOARD_SD_CD_SW_PERIPHERAL                                          GPIO2   /*!< Peripheral name */
#define BOARD_SD_CD_SW_SIGNAL                                            gpio_io   /*!< Signal name */
#define BOARD_SD_CD_SW_CHANNEL                                               28U   /*!< Signal channel */

/* Symbols to be used with GPIO driver */
#define BOARD_SD_CD_SW_GPIO                                                GPIO2   /*!< GPIO peripheral base pointer */
#define BOARD_SD_CD_SW_GPIO_PIN                                              28U   /*!< GPIO pin number */
#define BOARD_SD_CD_SW_GPIO_PIN_MASK                                 (1U << 28U)   /*!< GPIO pin mask */
#define BOARD_SD_CD_SW_PORT                                                GPIO2   /*!< PORT peripheral base pointer */
#define BOARD_SD_CD_SW_PIN                                                   28U   /*!< PORT pin number */
#define BOARD_SD_CD_SW_PIN_MASK                                      (1U << 28U)   /*!< PORT pin mask */

/* GPIO_AD_B0_13 (coord L14), UART1_RXD/J11[2] */
/* Routed pin properties */
#define BOARD_UART1_RXD_PERIPHERAL                                       LPUART1   /*!< Peripheral name */
#define BOARD_UART1_RXD_SIGNAL                                                RX   /*!< Signal name */

/* GPIO_AD_B0_12 (coord K14), UART1_TXD/J13[2] */
/* Routed pin properties */
#define BOARD_UART1_TXD_PERIPHERAL                                       LPUART1   /*!< Peripheral name */
#define BOARD_UART1_TXD_SIGNAL                                                TX   /*!< Signal name */

/* GPIO_SD_B0_01 (coord J3), SD1_CLK/J22[5]/J17[3] */
/* Routed pin properties */
#define BOARD_SD1_CLK_PERIPHERAL                                          USDHC1   /*!< Peripheral name */
#define BOARD_SD1_CLK_SIGNAL                                           usdhc_clk   /*!< Signal name */

/* GPIO_SD_B0_00 (coord J4), SD1_CMD/J22[3]/J17[6] */
/* Routed pin properties */
#define BOARD_SD1_CMD_PERIPHERAL                                          USDHC1   /*!< Peripheral name */
#define BOARD_SD1_CMD_SIGNAL                                           usdhc_cmd   /*!< Signal name */

/* GPIO_SD_B0_02 (coord J1), SD1_D0/J22[7]/J17[4] */
/* Routed pin properties */
#define BOARD_SD1_D0_PERIPHERAL                                           USDHC1   /*!< Peripheral name */
#define BOARD_SD1_D0_SIGNAL                                           usdhc_data   /*!< Signal name */
#define BOARD_SD1_D0_CHANNEL                                                  0U   /*!< Signal channel */

/* GPIO_SD_B0_03 (coord K1), SD1_D1/J22[8]/J17[5] */
/* Routed pin properties */
#define BOARD_SD1_D1_PERIPHERAL                                           USDHC1   /*!< Peripheral name */
#define BOARD_SD1_D1_SIGNAL                                           usdhc_data   /*!< Signal name */
#define BOARD_SD1_D1_CHANNEL                                                  1U   /*!< Signal channel */

/* GPIO_SD_B0_04 (coord H2), SD1_D2/J22[1] */
/* Routed pin properties */
#define BOARD_SD1_D2_PERIPHERAL                                           USDHC1   /*!< Peripheral name */
#define BOARD_SD1_D2_SIGNAL                                           usdhc_data   /*!< Signal name */
#define BOARD_SD1_D2_CHANNEL                                                  2U   /*!< Signal channel */

/* GPIO_SD_B0_05 (coord J2), SD1_D3/J22[2] */
/* Routed pin properties */
#define BOARD_SD1_D3_PERIPHERAL                                           USDHC1   /*!< Peripheral name */
#define BOARD_SD1_D3_SIGNAL                                           usdhc_data   /*!< Signal name */
#define BOARD_SD1_D3_CHANNEL                                                  3U   /*!< Signal channel */

/* GPIO_B1_14 (coord C14), SD0_VSELECT */
/* Routed pin properties */
#define BOARD_SD0_VSELECT_PERIPHERAL                                      USDHC1   /*!< Peripheral name */
#define BOARD_SD0_VSELECT_SIGNAL                                   usdhc_vselect   /*!< Signal name */

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
