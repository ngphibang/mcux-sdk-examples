/*
 * Copyright 2022 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pin_mux.h"
#include "clock_config.h"
#include "board.h"
#include "fsl_lcdic.h"
#include "fsl_debug_console.h"
#include "panel_func.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define APP_LCDIC LCDIC
#define APP_COLOR_RED   0xF800U
#define APP_COLOR_GREEN 0x07E0U
#define APP_COLOR_BLUE  0x001FU
#define APP_COLOR_WHITE 0xFFFFU

#define APP_MEM_WRITE_CMD 0x2CU

/*******************************************************************************
 * Prototypes
 ******************************************************************************/
static void APP_InitLcdic(void);
static void APP_FillRegionWithConstColor(
    uint16_t startX, uint16_t startY, uint16_t endX, uint16_t endY, uint16_t color);
static void APP_FillRegionWithColorArray(
    uint16_t startX, uint16_t startY, uint16_t endX, uint16_t endY, const uint16_t *color);

/*******************************************************************************
 * Variables
 ******************************************************************************/
static uint16_t s_lcdicBuffer[(APP_LCD_WIDTH / 2u) * (APP_LCD_HEIGHT / 2u)];

/*******************************************************************************
 * Code
 ******************************************************************************/

void BOARD_InitLcdicClock()
{
    /* LCDIC clock.
     * SPI baud rate is the same with LCDIC functional clock.
     */
    CLOCK_AttachClk(kMAIN_CLK_to_LCD_CLK);
    CLOCK_SetClkDiv(kCLOCK_DivLcdClk, 26);
    RESET_PeripheralReset(kLCDIC_RST_SHIFT_RSTn);
}


int main(void)
{
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitDebugConsole();
    BOARD_InitLcdicClock();

    PRINTF("LCDIC polling example start\r\n");

    APP_InitLcdic();

    APP_InitPanel();

    /*
     *   +----------------------+------------------------+
     *   |                      |                        |
     *   |     Region 0         |      Region 1          |
     *   |                      |                        |
     *   |                      |                        |
     *   |                      |                        |
     *   +----------------------+------------------------+
     *   |                      |                        |
     *   |     Region 2         |      Region 3          |
     *   |                      |                        |
     *   |                      |                        |
     *   +-----------------------------------------------+
     */

    /* Region 0 */
    APP_FillRegionWithConstColor(0, 0, APP_LCD_WIDTH / 2U - 1U, APP_LCD_HEIGHT / 2u - 1u, APP_COLOR_RED);

    /* Region 1 */
    for (uint32_t i = 0u; i < ARRAY_SIZE(s_lcdicBuffer); i++)
    {
        s_lcdicBuffer[i] = APP_COLOR_BLUE;
    }
    APP_FillRegionWithColorArray(APP_LCD_WIDTH / 2U, 0u, APP_LCD_WIDTH - 1u, APP_LCD_HEIGHT / 2u - 1u, s_lcdicBuffer);

    /* Region 2 */
    APP_FillRegionWithConstColor(0, APP_LCD_HEIGHT / 2u, APP_LCD_WIDTH / 2U - 1u, APP_LCD_HEIGHT - 1u, APP_COLOR_GREEN);

    /* Region 3 */
    for (uint32_t i = 0u; i < ARRAY_SIZE(s_lcdicBuffer); i++)
    {
        s_lcdicBuffer[i] = APP_COLOR_WHITE;
    }
    APP_FillRegionWithColorArray(APP_LCD_WIDTH / 2U, APP_LCD_HEIGHT / 2u, APP_LCD_WIDTH - 1u, APP_LCD_HEIGHT - 1u,
                                 s_lcdicBuffer);

    PRINTF("LCDIC polling example finished\r\n");

    while (1)
    {
    }
}

static void APP_InitLcdic(void)
{
    lcdic_config_t config;

    LCDIC_GetDefaultConfig(&config);
    config.mode = APP_LCDIC_MODE;
#if (APP_LCDI_ENDIAN == APP_LCD_BIG_ENDIAN)
    config.endian = kLCDIC_BigEndian;
#else
    config.endian = kLCDIC_LittleEndian;
#endif
    config.spiCtrlFlags = APP_LCDIC_SPI_FLAG;

    config.cmdShortTimeout_Timer0 = 0U; /* disable */
    config.cmdLongTimeout_Timer1  = 0U; /* disable */

    LCDIC_Init(APP_LCDIC, &config);
}

static void APP_FillRegionWithConstColor(uint16_t startX, uint16_t startY, uint16_t endX, uint16_t endY, uint16_t color)
{
    APP_PanelSelectRegion(startX, startY, endX, endY);

    lcdic_repeat_tx_xfer_t repeatTxXfer = {
        .cmd            = APP_MEM_WRITE_CMD,
        .teSyncMode     = kLCDIC_TeNoSync,
        .trxTimeoutMode = kLCDIC_LongTimeout,
        .dataFormat     = kLCDIC_DataFormatHalfWord,
        .dataLen        = (endX - startX + 1) * (endY - startY + 1) * 2U,
        .txRepeatData   = color,
    };

    LCDIC_SendRepeatDataBlocking(APP_LCDIC, &repeatTxXfer);
}

static void APP_FillRegionWithColorArray(
    uint16_t startX, uint16_t startY, uint16_t endX, uint16_t endY, const uint16_t *color)
{
    APP_PanelSelectRegion(startX, startY, endX, endY);

    lcdic_tx_xfer_t txXfer = {
        .cmd            = APP_MEM_WRITE_CMD,
        .teSyncMode     = kLCDIC_TeNoSync,
        .trxTimeoutMode = kLCDIC_LongTimeout,
        .dataFormat     = kLCDIC_DataFormatHalfWord,
        .dataLen        = (endX - startX + 1) * (endY - startY + 1) * 2U,
        .txData         = (const uint8_t *)color,
    };

    LCDIC_SendDataArrayBlocking(APP_LCDIC, &txXfer);
}
