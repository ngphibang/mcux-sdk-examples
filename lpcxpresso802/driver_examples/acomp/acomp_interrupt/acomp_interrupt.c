/*
 * Copyright 2017, 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "fsl_acomp.h"
#include "fsl_debug_console.h"
#include "pin_mux.h"
#include "board.h"

#include "fsl_power.h"
/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define DEMO_ACOMP                  ACOMP
#define DEMO_ACOMP_POSITIVE_INPUT   0U /* Voltage ladder output. */
#define DEMO_ACOMP_NEGATIVE_INPUT   2U /* ACMP_I2. */
#define DEMO_ACOMP_IRQ_NUMBER       CMP_IRQn
#define DEMO_ACOMP_IRQ_HANDLER_FUNC CMP_DriverIRQHandler
#define BOARD_LED_PORT              0U
#define BOARD_LED_PIN               9U

/*******************************************************************************
 * Prototypes
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/
void DEMO_ACOMP_IRQ_HANDLER_FUNC(void)
{
    ACOMP_ClearInterruptsStatusFlags(DEMO_ACOMP);
    /* Check the comparison result and sets the LED state according to the result.*/
    if (ACOMP_GetOutputStatusFlags(DEMO_ACOMP))
    {
        LED_RED_ON();
    }
    else
    {
        LED_RED_OFF();
    }
    SDK_ISR_EXIT_BARRIER;
}
/*!
 * @brief Main function
 */
int main(void)
{
    acomp_config_t acompConfigStruct;
    acomp_ladder_config_t ladderConfigStruct;

    /* Attach 12 MHz clock to USART0 (debug console) */
    CLOCK_Select(BOARD_DEBUG_USART_CLK_ATTACH);

    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitDebugConsole();

    /* Power on CMP0. */
    POWER_DisablePD(kPDRUNCFG_PD_ACMP);

    PRINTF("\r\nLPC_ACOMP Interrupt Example.\r\n");

    /* Init output LED GPIO. */
    LED_RED_INIT(LOGIC_LED_ON);

    /* Initialize ACOMP module. */
    ACOMP_GetDefaultConfig(&acompConfigStruct);
    ACOMP_Init(DEMO_ACOMP, &acompConfigStruct);

    /* Configure internal voltage ladder. */
    ladderConfigStruct.ladderValue      = 15U;                           /* Half of reference voltage. */
    ladderConfigStruct.referenceVoltage = kACOMP_LadderRefVoltagePinVDD; /* VDDA as the reference voltage. */
    ACOMP_SetLadderConfig(DEMO_ACOMP, &ladderConfigStruct);

    /* Enable interrupt. */
    ACOMP_EnableInterrupts(DEMO_ACOMP, kACOMP_InterruptsBothEdgesEnable);
    NVIC_EnableIRQ(DEMO_ACOMP_IRQ_NUMBER);
    /* Configure ACOMP negative and positive input channels. */
    ACOMP_SetInputChannel(DEMO_ACOMP, DEMO_ACOMP_POSITIVE_INPUT, DEMO_ACOMP_NEGATIVE_INPUT);

    PRINTF("The example compares analog input to the voltage ladder output(ACOMP negative port).\r\n");
    PRINTF("The LED will be turned ON/OFF when the analog input is LOWER/HIGHER than the ladder's output.\r\n");
    PRINTF("Change the analog input voltage to see the LED status.\r\n");

    while (1)
    {
    }
}
