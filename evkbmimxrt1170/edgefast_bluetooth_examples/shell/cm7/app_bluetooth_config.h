/*
 *  Copyright 2022 NXP
 *  All rights reserved.
 *
 *  SPDX-License-Identifier: BSD-3-Clause
 */

#define USB_HOST_CONFIG_EHCI (2U)
#define CONTROLLER_ID        kUSB_ControllerEhci0

#define FLASH_ADAPTER_SIZE 0x10000

/* Controller config
 * Supported controller list,
 * WIFI_IW416_BOARD_MURATA_1XK_M2
 * WIFI_88W8987_BOARD_MURATA_1ZM_M2
 * BT_THIRD_PARTY_TRANSCEIVER
 * WIFI_IW612_BOARD_MURATA_2EL_M2
 *
 * If Murata Type 1XK module(EAR00385 M2 only) used, define macro WIFI_IW416_BOARD_MURATA_1XK_M2 in following.
 * If Murata Type 1ZM module(EAR00364 M2 only) used , define macro WIFI_88W8987_BOARD_MURATA_1ZM_M2 in following.
 * If third party controller module used, define macro BT_THIRD_PARTY_TRANSCEIVER in following.
 * If Murata Type 2EL module(M2 only) used , define macro WIFI_IW612_BOARD_MURATA_2EL_M2 in following.
 */

/* @TEST_ANCHOR */
#define WIFI_IW612_BOARD_MURATA_2EL_M2
/* @END_TEST_ANCHOR */
/*#define WIFI_IW416_BOARD_MURATA_1XK_M2*/
/*#define WIFI_88W8987_BOARD_MURATA_1ZM_M2*/
/*#define BT_THIRD_PARTY_TRANSCEIVER*/
/*#define WIFI_IW612_BOARD_MURATA_2EL_M2*/

#if ( defined(WIFI_IW416_BOARD_MURATA_1XK_M2) || defined(WIFI_88W8987_BOARD_MURATA_1ZM_M2) || \
      defined(BT_THIRD_PARTY_TRANSCEIVER) || defined(WIFI_IW612_BOARD_MURATA_2EL_M2) )
#include "wifi_bt_module_config.h"
#include "wifi_config.h"
#else
#error The transceiver module is unsupported
#endif

#if defined(WIFI_IW612_BOARD_MURATA_2EL_M2)
#undef SD_TIMING_MAX
#define SD_TIMING_MAX kSD_TimingDDR50Mode
#endif /*#define WIFI_IW612_BOARD_MURATA_2EL_M2*/

#define CONFIG_BT_PERIPHERAL           1
#define CONFIG_BT_CENTRAL              1
#define CONFIG_BT_L2CAP_IFRAME_SUPPORT 1

#define CONFIG_BT_RFCOMM                    1
#define CONFIG_BT_HFP_HF                    1
#define CONFIG_BT_A2DP                      1
#define CONFIG_BT_A2DP_SOURCE               1
#define CONFIG_BT_A2DP_SINK                 1
#define CONFIG_BT_A2DP_CP_SERVICE           1
#define CONFIG_BT_A2DP_RECOVERY_SERVICE     0
#define CONFIG_BT_A2DP_REPORTING_SERVICE    0
#define CONFIG_BT_A2DP_DR_SERVICE           1
#define CONFIG_BT_A2DP_HC_SERVICE           0
#define CONFIG_BT_A2DP_MULTIPLEXING_SERVICE 0
#define CONFIG_BT_AVRCP                     1
#define CONFIG_BT_AVRCP_CT                  1
#define CONFIG_BT_AVRCP_TG                  1
#define CONFIG_BT_AVRCP_BROWSING            1
#define CONFIG_BT_AVRCP_COVER_ART           1
#define CONFIG_BT_AVRCP_COVER_ART_INITIATOR 1
#define CONFIG_BT_AVRCP_COVER_ART_RESPONDER 1

#define CONFIG_BT_DEVICE_NAME_DYNAMIC   1
#define CONFIG_BT_PHY_UPDATE            1
#define CONFIG_BT_AUTO_PHY_UPDATE       1
#define CONFIG_BT_DATA_LEN_UPDATE       1
#define CONFIG_BT_AUTO_DATA_LEN_UPDATE  1
#define CONFIG_BT_ID_MAX                4
#define CONFIG_BT_PRIVACY               1
#define CONFIG_BT_SETTINGS              1
#define CONFIG_BT_HOST_CRYPTO           1
#define CONFIG_BT_MAX_PAIRED            16
#define CONFIG_BT_KEYS_OVERWRITE_OLDEST 1
#define CONFIG_BT_SIGNING               1
#define CONFIG_BT_GATT_SERVICE_CHANGED  1
#define CONFIG_BT_GATT_CACHING          1
#define CONFIG_BT_L2CAP_TX_BUF_COUNT    12
#define CONFIG_BT_L2CAP_DYNAMIC_CHANNEL 1
#define CONFIG_BT_DATA_LEN_UPDATE       1
#define CONFIG_BT_USER_DATA_LEN_UPDATE  1
#define CONFIG_BT_FILTER_ACCEPT_LIST    1
#define CONFIG_BT_PHY_UPDATE            1
#define CONFIG_BT_USER_PHY_UPDATE       1
#define CONFIG_BT_ISO                   0 /* This part of the shell functionality is not ready and should not be enabled. */

#if CONFIG_BT_ISO
#define CONFIG_BT_EXT_ADV                        1
#define CONFIG_BT_PER_ADV                        1
#define CONFIG_BT_PER_ADV_SYNC_TRANSFER_RECEIVER 1

#define CONFIG_BT_ISO_UNICAST                    1
#define CONFIG_BT_ISO_BROADCAST                  1
#define CONFIG_BT_ISO_BROADCASTER                1
#define CONFIG_BT_ISO_SYNC_RECEIVER              1

#define CONFIG_BT_ISO_PERIPHERAL                 1
#define CONFIG_BT_ISO_CENTRAL                    1

#define CONFIG_BT_GATT_AUTO_UPDATE_MTU           1
#endif

#if 0 /* This part of the shell functionality is not ready and should not be enabled. */
#define CONFIG_BT_AUDIO                   0
#define CONFIG_BT_AUDIO_TX                0
#define CONFIG_BT_AUDIO_RX                0
#define CONFIG_BT_AICS                    0
#define CONFIG_BT_AICS_CLIENT             0
#define CONFIG_BT_BAP_UNICAST             0
#define CONFIG_BT_BAP_UNICAST_SERVER      0
#define CONFIG_BT_BAP_UNICAST_CLIENT      0
#define CONFIG_BT_BAP_BROADCAST_SOURCE    0
#define CONFIG_BT_BAP_BROADCAST_SINK      0
#define CONFIG_BT_BAP_SCAN_DELEGATOR      0
#define CONFIG_BT_BAP_BROADCAST_ASSISTANT 0
#define CONFIG_BT_CAP_ACCEPTOR            0
#define CONFIG_BT_CAP_INITIATOR           0
#define CONFIG_BT_CSIP_SET_MEMBER         0
#define CONFIG_BT_CSIP_SET_COORDINATOR    0
#define CONFIG_BT_HAS                     0
#define CONFIG_BT_HAS_CLIENT              0
#define CONFIG_BT_MCS                     0
#define CONFIG_BT_MCC                     0
#define CONFIG_BT_MCC_OTS                 0
#define CONFIG_MCTL                       0
#define CONFIG_BT_MICP_MIC_DEV            0
#define CONFIG_BT_MICP_MIC_CTLR           0
#define CONFIG_BT_MPL                     0
#define CONFIG_BT_TBS                     0
#define CONFIG_BT_TBS_CLIENT_TBS          0
#define CONFIG_BT_TBS_CLIENT_GTBS         0
#define CONFIG_BT_VCP_VOL_REND            0
#define CONFIG_BT_VCP_VOL_CTLR            0
#define CONFIG_BT_VOCS                    0
#define CONFIG_BT_VOCS_CLIENT             0
#define CONFIG_BT_OTS                     0
#define CONFIG_BT_OTS_CLIENT              0
#define CONFIG_BT_TMAP                    0
#endif

#if CONFIG_BT_BAP_BROADCAST_ASSISTANT
#define CONFIG_BT_PER_ADV_SYNC_TRANSFER_SENDER 1
#endif

#if CONFIG_BT_CAP_ACCEPTOR
#define CONFIG_BT_CAP_ACCEPTOR_SET_MEMBER 1
#endif

#if CONFIG_BT_VCP_VOL_REND
#define CONFIG_BT_VCP_VOL_REND_VOCS_INSTANCE_COUNT 1
#define CONFIG_BT_VCP_VOL_REND_AICS_INSTANCE_COUNT 1
#endif

#if CONFIG_BT_VCP_VOL_CTLR
#ifndef CONFIG_BT_GATT_AUTO_DISCOVER_CCC
#define CONFIG_BT_GATT_AUTO_DISCOVER_CCC 1
#endif
#define CONFIG_BT_VCP_VOL_CTLR_MAX_VOCS_INST 1
#define CONFIG_BT_VCP_VOL_CTLR_MAX_AICS_INST 0
#endif

#if CONFIG_BT_VOCS
#define CONFIG_BT_VOCS_MAX_INSTANCE_COUNT 1
#endif

#if CONFIG_BT_VOCS_CLIENT
#define CONFIG_BT_VOCS_CLIENT_MAX_INSTANCE_COUNT 1
#endif

#if CONFIG_BT_AICS
#define CONFIG_BT_AICS_MAX_INSTANCE_COUNT 1
#endif

#if CONFIG_BT_AICS_CLIENT
#define CONFIG_BT_AICS_CLIENT_MAX_INSTANCE_COUNT 1
#endif

#if CONFIG_BT_BAP_UNICAST_SERVER
#define CONFIG_BT_ATT_PREPARE_COUNT 5
#define CONFIG_BT_ASCS 1
#define CONFIG_BT_PAC_SNK 1
#define CONFIG_BT_PAC_SRC 1
#endif

#if CONFIG_BT_HAS
#define CONFIG_UTF8 1
#define CONFIG_BT_HAS_FEATURES_NOTIFIABLE 1
#endif

#if CONFIG_BT_MCS
#define CONFIG_MCTL_LOCAL_PLAYER_REMOTE_CONTROL 1
#define CONFIG_BT_CCID 1
#endif

#if CONFIG_BT_MCC
#define CONFIG_BT_MCC_SHELL 1
#endif

#if CONFIG_BT_MCC_OTS
#define CONFIG_BT_OTS_CLIENT 1
#endif

#if CONFIG_MCTL
#define CONFIG_MCTL_LOCAL_PLAYER_CONTROL 1
#endif

#if CONFIG_BT_MPL
#define CONFIG_BT_DEBUG_MPL 1
#define CONFIG_BT_TESTING   1
#define CONFIG_BT_MPL_OBJECTS 1
#endif

#if CONFIG_BT_TBS_CLIENT_TBS || CONFIG_BT_TBS_CLIENT_GTBS
#define CONFIG_BT_TBS_CLIENT_ACCEPT_CALL 1
#define CONFIG_BT_TBS_CLIENT_TERMINATE_CALL 1
#define CONFIG_BT_TBS_CLIENT_HOLD_CALL 1
#define CONFIG_BT_TBS_CLIENT_RETRIEVE_CALL 1
#define CONFIG_BT_TBS_CLIENT_ORIGINATE_CALL 1
#define CONFIG_BT_TBS_CLIENT_JOIN_CALLS 1
#define CONFIG_BT_TBS_CLIENT_MAX_CALLS 2
#endif

#if CONFIG_BT_OTS
#define CONFIG_BT_OTS_SECONDARY_SVC 1
#endif

#if 0
#define CONFIG_BT_EXT_ADV 1
#define CONFIG_BT_PER_ADV 1
#endif

#define CONFIG_BT_SNOOP        1
#define CONFIG_BT_RF_TEST_MODE 1
#if 0
#define CONFIG_BT_SMP_SELFTEST 1

#define CONFIG_BT_DEBUG 1

#define CONFIG_NET_BUF_LOG        1
#define CONFIG_NET_BUF_POOL_USAGE 1
#endif

#ifdef K32W061_TRANSCEIVER
#undef CONFIG_BT_BREDR
#endif
#define CONFIG_WORK_QUEUE_TASK_STACK_SIZE 4096

#define SHELL_BUFFER_SIZE 512
#define SHELL_MAX_ARGS    20

#if (defined(CONFIG_BT_SMP) && (CONFIG_BT_SMP > 0U))
    #define CONFIG_BT_RX_STACK_SIZE 3000
#else
    #define CONFIG_BT_RX_STACK_SIZE 1024
#endif

#include "edgefast_bluetooth_config.h"
#include "edgefast_bluetooth_audio_config.h"
#include "edgefast_bluetooth_debug_config.h"

