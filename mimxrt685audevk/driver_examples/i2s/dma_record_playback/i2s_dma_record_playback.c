/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include "fsl_device_registers.h"
#include "fsl_debug_console.h"
#include "pin_mux.h"
#include "board.h"
#include "fsl_dma.h"
#include "fsl_i2c.h"
#include "fsl_i2s.h"
#include "fsl_i2s_dma.h"
#include "fsl_codec_common.h"
#include "music.h"

#include <stdbool.h>
#include "fsl_codec_adapter.h"
#include "fsl_cs42448.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define DEMO_I2S_MASTER_CLOCK_FREQUENCY CLOCK_GetMclkClkFreq()
#define DEMO_AUDIO_SAMPLE_RATE          (48000)
#define DEMO_AUDIO_PROTOCOL             kCODEC_BusI2S
#define DEMO_I2S_TX                     (I2S3)
#define DEMO_I2S_RX                     (I2S1)
#define DEMO_DMA                        (DMA0)
#define DEMO_I2S_TX_CHANNEL             (7)
#define DEMO_I2S_RX_CHANNEL             (2)
#define DEMO_I2S_CLOCK_DIVIDER          16
#define DEMO_I2S_TX_MODE                kI2S_MasterSlaveNormalMaster
#define DEMO_I2S_RX_MODE                kI2S_MasterSlaveNormalMaster
#define DEMO_CODEC_I2C_BASEADDR         I2C2
#define DEMO_CODEC_I2C_INSTANCE         2U
#define DEMO_CODEC_VOLUME               100U
#ifndef DEMO_CODEC_VOLUME
#define DEMO_CODEC_VOLUME 30U
#endif
/*******************************************************************************
 * Prototypes
 ******************************************************************************/

static void StartDigitalLoopback(void);

static void TxCallback(I2S_Type *base, i2s_dma_handle_t *handle, status_t completionStatus, void *userData);

static void RxCallback(I2S_Type *base, i2s_dma_handle_t *handle, status_t completionStatus, void *userData);

/*******************************************************************************
 * Variables
 ******************************************************************************/
cs42448_config_t cs42448Config = {
    .DACMode      = kCS42448_ModeSlave,
    .ADCMode      = kCS42448_ModeSlave,
    .reset        = NULL,
    .master       = false,
    .i2cConfig    = {.codecI2CInstance = BOARD_CODEC_I2C_INSTANCE},
    .format       = {.sampleRate = 48000U, .bitWidth = 16U},
    .bus          = kCS42448_BusI2S,
    .slaveAddress = CS42448_I2C_ADDR,
};

codec_config_t boardCodecConfig = {.codecDevType = kCODEC_CS42448, .codecDevConfig = &cs42448Config};

__ALIGN_BEGIN static uint8_t s_Buffer[400] __ALIGN_END; /* 100 samples => time about 2 ms */
static dma_handle_t s_DmaTxHandle;
static dma_handle_t s_DmaRxHandle;
static i2s_config_t s_TxConfig;
static i2s_config_t s_RxConfig;
static i2s_dma_handle_t s_TxHandle;
static i2s_dma_handle_t s_RxHandle;
static i2s_transfer_t s_TxTransfer;
static i2s_transfer_t s_RxTransfer;
extern codec_config_t boardCodecConfig;
codec_handle_t codecHandle;

/*******************************************************************************
 * Code
 ******************************************************************************/

/*!
 * @brief Main function
 */
int main(void)
{
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitDebugConsole();

    CLOCK_EnableClock(kCLOCK_InputMux);

    /* I2C */
    CLOCK_AttachClk(kFFRO_to_FLEXCOMM2);

    /* attach AUDIO PLL clock to FLEXCOMM1 (I2S1) */
    CLOCK_AttachClk(kAUDIO_PLL_to_FLEXCOMM1);
    /* attach AUDIO PLL clock to FLEXCOMM3 (I2S3) */
    CLOCK_AttachClk(kAUDIO_PLL_to_FLEXCOMM3);

    /* attach AUDIO PLL clock to MCLK */
    CLOCK_AttachClk(kAUDIO_PLL_to_MCLK_CLK);
    CLOCK_SetClkDiv(kCLOCK_DivMclkClk, 1);
    SYSCTL1->MCLKPINDIR = SYSCTL1_MCLKPINDIR_MCLKPINDIR_MASK;

    cs42448Config.i2cConfig.codecI2CSourceClock = CLOCK_GetFlexCommClkFreq(2);
    cs42448Config.format.mclk_HZ                = CLOCK_GetMclkClkFreq();

    PRINTF("Configure codec\r\n");

    /* protocol: i2s
     * sampleRate: 48K
     * bitwidth:16
     */
    if (CODEC_Init(&codecHandle, &boardCodecConfig) != kStatus_Success)
    {
        PRINTF("codec_Init failed!\r\n");
        assert(false);
    }
    /* Initial volume kept low for hearing safety.
     * Adjust it to your needs, 0-100, 0 for mute, 100 for maximum volume.
     */
    if (CODEC_SetVolume(&codecHandle, kCODEC_PlayChannelHeadphoneLeft | kCODEC_PlayChannelHeadphoneRight,
                        DEMO_CODEC_VOLUME) != kStatus_Success)
    {
        assert(false);
    }

    PRINTF("Configure I2S\r\n");

    /*
     * masterSlave = kI2S_MasterSlaveNormalMaster;
     * mode = kI2S_ModeI2sClassic;
     * rightLow = false;
     * leftJust = false;
     * pdmData = false;
     * sckPol = false;
     * wsPol = false;
     * divider = 1;
     * oneChannel = false;
     * dataLength = 16;
     * frameLength = 32;
     * position = 0;
     * watermark = 4;
     * txEmptyZero = true;
     * pack48 = false;
     */
    I2S_TxGetDefaultConfig(&s_TxConfig);
    s_TxConfig.divider     = DEMO_I2S_CLOCK_DIVIDER;
    s_TxConfig.masterSlave = DEMO_I2S_TX_MODE;

    /*
     * masterSlave = kI2S_MasterSlaveNormalSlave;
     * mode = kI2S_ModeI2sClassic;
     * rightLow = false;
     * leftJust = false;
     * pdmData = false;
     * sckPol = false;
     * wsPol = false;
     * divider = 1;
     * oneChannel = false;
     * dataLength = 16;
     * frameLength = 32;
     * position = 0;
     * watermark = 4;
     * txEmptyZero = false;
     * pack48 = true;
     */
    I2S_RxGetDefaultConfig(&s_RxConfig);
    s_RxConfig.divider     = DEMO_I2S_CLOCK_DIVIDER;
    s_RxConfig.masterSlave = DEMO_I2S_RX_MODE;

    I2S_TxInit(DEMO_I2S_TX, &s_TxConfig);
    I2S_RxInit(DEMO_I2S_RX, &s_RxConfig);

    DMA_Init(DEMO_DMA);

    DMA_EnableChannel(DEMO_DMA, DEMO_I2S_TX_CHANNEL);
    DMA_EnableChannel(DEMO_DMA, DEMO_I2S_RX_CHANNEL);
    DMA_SetChannelPriority(DEMO_DMA, DEMO_I2S_TX_CHANNEL, kDMA_ChannelPriority3);
    DMA_SetChannelPriority(DEMO_DMA, DEMO_I2S_RX_CHANNEL, kDMA_ChannelPriority2);
    DMA_CreateHandle(&s_DmaTxHandle, DEMO_DMA, DEMO_I2S_TX_CHANNEL);
    DMA_CreateHandle(&s_DmaRxHandle, DEMO_DMA, DEMO_I2S_RX_CHANNEL);

    StartDigitalLoopback();

    while (1)
    {
    }
}

static void StartDigitalLoopback(void)
{
    PRINTF("Setup digital loopback\r\n");

    s_TxTransfer.data     = &s_Buffer[0];
    s_TxTransfer.dataSize = sizeof(s_Buffer);

    s_RxTransfer.data     = &s_Buffer[0];
    s_RxTransfer.dataSize = sizeof(s_Buffer);

    I2S_TxTransferCreateHandleDMA(DEMO_I2S_TX, &s_TxHandle, &s_DmaTxHandle, TxCallback, (void *)&s_TxTransfer);
    I2S_RxTransferCreateHandleDMA(DEMO_I2S_RX, &s_RxHandle, &s_DmaRxHandle, RxCallback, (void *)&s_RxTransfer);

    /* need to queue two receive buffers so when the first one is filled,
     * the other is immediatelly starts to be filled */
    I2S_RxTransferReceiveDMA(DEMO_I2S_RX, &s_RxHandle, s_RxTransfer);
    I2S_RxTransferReceiveDMA(DEMO_I2S_RX, &s_RxHandle, s_RxTransfer);

    /* need to queue two transmit buffers so when the first one
     * finishes transfer, the other immediatelly starts */
    I2S_TxTransferSendDMA(DEMO_I2S_TX, &s_TxHandle, s_TxTransfer);
    I2S_TxTransferSendDMA(DEMO_I2S_TX, &s_TxHandle, s_TxTransfer);
}

static void TxCallback(I2S_Type *base, i2s_dma_handle_t *handle, status_t completionStatus, void *userData)
{
    /* Enqueue the same original buffer all over again */
    i2s_transfer_t *transfer = (i2s_transfer_t *)userData;
    I2S_TxTransferSendDMA(base, handle, *transfer);
}

static void RxCallback(I2S_Type *base, i2s_dma_handle_t *handle, status_t completionStatus, void *userData)
{
    /* Enqueue the same original buffer all over again */
    i2s_transfer_t *transfer = (i2s_transfer_t *)userData;
    I2S_RxTransferReceiveDMA(base, handle, *transfer);
}
