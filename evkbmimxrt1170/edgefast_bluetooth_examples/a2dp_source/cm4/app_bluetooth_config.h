/*
 *  Copyright 2022 NXP
 *  All rights reserved.
 *
 *  SPDX-License-Identifier: BSD-3-Clause
 */

#define USB_HOST_CONFIG_EHCI (2U)
#define CONTROLLER_ID        kUSB_ControllerEhci0

#define FLASH_ADAPTER_SIZE    0x10000
#define APP_FLEXSPI_AMBA_BASE FlexSPI1_ALIAS_BASE
/* Controller config
 * Supported controller list,
 * WIFI_IW416_BOARD_MURATA_1XK_M2
 * WIFI_88W8987_BOARD_MURATA_1ZM_M2
 * WIFI_IW612_BOARD_MURATA_2EL_M2
 *
 * If Murata Type 1XK module(EAR00385 M2 only) used , define macro WIFI_IW416_BOARD_MURATA_1XK_M2 in following.
 * If Murata Type 1ZM module(EAR00364 M2 only) used , define macro WIFI_88W8987_BOARD_MURATA_1ZM_M2 in following.
 * If Murata Type 2EL module(Rev-A1 M2 only) used , define macro WIFI_IW612_BOARD_MURATA_2EL_M2 in following.
 */

/* @TEST_ANCHOR */
#define WIFI_IW612_BOARD_MURATA_2EL_M2
/* @END_TEST_ANCHOR */
/*#define WIFI_IW416_BOARD_MURATA_1XK_M2*/
/*#define WIFI_88W8987_BOARD_MURATA_1ZM_M2*/
/*#define WIFI_IW612_BOARD_MURATA_2EL_M2*/

#if (defined(WIFI_IW416_BOARD_MURATA_1XK_M2) || defined(WIFI_88W8987_BOARD_MURATA_1ZM_M2) || \
     defined(WIFI_IW612_BOARD_MURATA_2EL_M2))
#include "wifi_bt_module_config.h"
#include "wifi_config.h"
#else
#error The transceiver module is unsupported
#endif

#if defined(WIFI_IW612_BOARD_MURATA_2EL_M2)
#undef SD_TIMING_MAX
#define SD_TIMING_MAX kSD_TimingDDR50Mode
#endif /*#define WIFI_IW612_BOARD_MURATA_2EL_M2*/

#define CONFIG_BT_A2DP                  1
#define CONFIG_BT_A2DP_SOURCE           1
#define CONFIG_BT_SETTINGS              1
#define CONFIG_BT_KEYS_OVERWRITE_OLDEST 1


#if (defined(CONFIG_BT_SMP) && (CONFIG_BT_SMP > 0U))
    #define CONFIG_BT_RX_STACK_SIZE 2500
#else
    #define CONFIG_BT_RX_STACK_SIZE 1024
#endif

#define CONFIG_BT_BLE_DISABLE 1
#include "edgefast_bluetooth_config.h"
#include "edgefast_bluetooth_debug_config.h"