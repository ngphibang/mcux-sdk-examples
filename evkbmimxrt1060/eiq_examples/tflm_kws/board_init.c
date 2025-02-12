/*
 * Copyright 2020 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "board_init.h"
#include "pin_mux.h"
#include "fsl_debug_console.h"
#include "board.h"

void BOARD_Init()
{
    BOARD_ConfigMPU();
    BOARD_InitBootPins();
    BOARD_InitWM8960Pins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();
}
