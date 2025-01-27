/* @file ncp_bridge_cmd.h
 *
 *  @brief This file contains ncp bridge command/response/event definitions
 *
 *  Copyright 2008-2023 NXP
 *
 *  Licensed under the LA_OPT_NXP_Software_License.txt (the "Agreement")
 */

#ifndef __NCP_CMD_WIFI_H__
#define __NCP_CMD_WIFI_H__

#include "ncp_cmd_common.h"

/*WLAN NCP Bridge subclass*/
#define NCP_BRIDGE_CMD_WLAN_STA         0x00000000
#define NCP_BRIDGE_CMD_WLAN_BASIC       0x00010000
#define NCP_BRIDGE_CMD_WLAN_REGULATORY  0x00020000
#define NCP_BRIDGE_CMD_WLAN_POWERMGMT   0x00030000
#define NCP_BRIDGE_CMD_WLAN_DEBUG       0x00040000
#define NCP_BRIDGE_CMD_WLAN_OTHER       0x00050000
#define NCP_BRIDGE_CMD_WLAN_MEMORY      0x00060000
#define NCP_BRIDGE_CMD_WLAN_NETWORK     0x00070000
#define NCP_BRIDGE_CMD_WLAN_OFFLOAD     0x00080000
#define NCP_BRIDGE_CMD_WLAN_SOCKET      0x00090000
#define NCP_BRIDGE_CMD_WLAN_UAP         0x000a0000
#define NCP_BRIDGE_CMD_WLAN_HTTP        0x000b0000
#define NCP_BRIDGE_CMD_WLAN_COEX        0x000c0000
#define NCP_BRIDGE_CMD_WLAN_MATTER      0x000d0000
#define NCP_BRIDGE_CMD_WLAN_EDGE_LOCK   0x000e0000
#define NCP_BRIDGE_CMD_WLAN_ASYNC_EVENT 0x000f0000


/* The max size of the network list*/
#define NCP_BRIDGE_WLAN_KNOWN_NETWORKS 5

/*NCP Bridge Command definitions*/
/*WLAN STA command*/
#define NCP_BRIDGE_CMD_WLAN_STA_SCAN    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000001) /* wlan-scan */
#define NCP_BRIDGE_CMD_WLAN_STA_CONNECT (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000002) /* wlan-connect */
#define NCP_BRIDGE_CMD_WLAN_STA_DISCONNECT \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000003) /* wlan-disconnect */
#define NCP_BRIDGE_CMD_WLAN_STA_VERSION \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000004) /* wlan-version */
#define NCP_BRIDGE_CMD_WLAN_STA_SET_MAC \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000005) /* wlan-set-mac */
#define NCP_BRIDGE_CMD_WLAN_STA_GET_MAC \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000006) /* wlan-get-mac */
#define NCP_BRIDGE_CMD_WLAN_STA_CONNECT_STAT \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000007) /* wlan-stat */
#define NCP_BRIDGE_CMD_WLAN_STA_ROAMING \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000008) /* wlan-roaming */
#define NCP_BRIDGE_CMD_WLAN_STA_ANTENNA     (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000009) /* wlan-set-antenna / wlan-get-antenna*/
#define NCP_BRIDGE_CMD_WLAN_STA_SIGNAL      (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000012) /* wlan-get-signal */
#define NCP_BRIDGE_CMD_WLAN_STA_CSI         (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000020)
#define NCP_BRIDGE_CMD_WLAN_STA_11K_CFG          (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000021)
#define NCP_BRIDGE_CMD_WLAN_STA_NEIGHBOR_REQ     (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000022)

#define NCP_BRIDGE_CMD_WLAN_MBO_ENABLE       (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000023) /*wlan-mbo-enable*/
#define NCP_BRIDGE_CMD_WLAN_MBO_NONPREFER_CH (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000024) /*wlan-mbo-nonprefer-ch*/
#define NCP_BRIDGE_CMD_WLAN_MBO_SET_CELL_CAPA (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000025)/*wlan-mbo-set-cell-capa*/
#define NCP_BRIDGE_CMD_WLAN_MBO_SET_OCE       (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000026)/*wlan-mbo-set-oce*/

#define NCP_BRIDGE_CMD_WLAN_STA_WPS_PBC      (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000031) /* wlan-start-wps-pbc */
#define NCP_BRIDGE_CMD_WLAN_STA_GEN_WPS_PIN  (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000032) /* wlan-generate-wps-pin */
#define NCP_BRIDGE_CMD_WLAN_STA_WPS_PIN      (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_STA | 0x00000033) /* wlan-start-wps-pin */

/*WLAN Basic command*/
#define NCP_BRIDGE_CMD_WLAN_BASIC_WLAN_RESET  (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_BASIC | 0x00000001)
#define NCP_BRIDGE_CMD_WLAN_BASIC_WLAN_UAP_PROV_START  (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_BASIC | 0x00000002)
#define NCP_BRIDGE_CMD_WLAN_BASIC_WLAN_UAP_PROV_RESET  (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_BASIC | 0x00000003)

/*WLAN Http command*/
#define NCP_BRIDGE_CMD_WLAN_HTTP_CON         (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_HTTP | 0x00000001)
#define NCP_BRIDGE_CMD_WLAN_HTTP_DISCON      (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_HTTP | 0x00000002)
#define NCP_BRIDGE_CMD_WLAN_HTTP_REQ         (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_HTTP | 0x00000003)
#define NCP_BRIDGE_CMD_WLAN_HTTP_RECV        (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_HTTP | 0x00000004)
#define NCP_BRIDGE_CMD_WLAN_HTTP_SETH        (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_HTTP | 0x00000005)
#define NCP_BRIDGE_CMD_WLAN_HTTP_UNSETH      (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_HTTP | 0x00000006)
#define NCP_BRIDGE_CMD_WLAN_WEBSOCKET_UPG    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_HTTP | 0x00000007)
#define NCP_BRIDGE_CMD_WLAN_WEBSOCKET_SEND   (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_HTTP | 0x00000008)
#define NCP_BRIDGE_CMD_WLAN_WEBSOCKET_RECV   (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_HTTP | 0x00000009)

/*WLAN Socket command*/
#define NCP_BRIDGE_CMD_WLAN_SOCKET_OPEN      (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_SOCKET | 0x00000001)
#define NCP_BRIDGE_CMD_WLAN_SOCKET_CON       (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_SOCKET | 0x00000002)
#define NCP_BRIDGE_CMD_WLAN_SOCKET_RECV      (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_SOCKET | 0x00000003)
#define NCP_BRIDGE_CMD_WLAN_SOCKET_SEND      (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_SOCKET | 0x00000004)
#define NCP_BRIDGE_CMD_WLAN_SOCKET_SENDTO    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_SOCKET | 0x00000005)
#define NCP_BRIDGE_CMD_WLAN_SOCKET_BIND      (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_SOCKET | 0x00000006)
#define NCP_BRIDGE_CMD_WLAN_SOCKET_LISTEN    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_SOCKET | 0x00000007)
#define NCP_BRIDGE_CMD_WLAN_SOCKET_ACCEPT    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_SOCKET | 0x00000008)
#define NCP_BRIDGE_CMD_WLAN_SOCKET_CLOSE     (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_SOCKET | 0x00000009)
#define NCP_BRIDGE_CMD_WLAN_SOCKET_RECVFROM  (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_SOCKET | 0x0000000a)

/*WLAN Debug command*/
#define  NCP_BRIDGE_CMD_WLAN_DEBUG_REGISTER_ACCESS    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_DEBUG | 0x00000001)

/*WLAN Memory command*/
#define NCP_BRIDGE_CMD_WLAN_MEMORY_HEAP_SIZE          (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_MEMORY | 0x00000001)

/*WLAN Network command*/
#define NCP_BRIDGE_CMD_WLAN_NETWORK_INFO    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_NETWORK | 0x00000001) /* wlan-info */
#define NCP_BRIDGE_CMD_WLAN_NETWORK_MONITOR     (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_NETWORK | 0x00000002) /* wlan-monitor */
#define NCP_BRIDGE_CMD_WLAN_NETWORK_ADD    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_NETWORK | 0x00000003) /* wlan-add */
#define NCP_BRIDGE_CMD_WLAN_NETWORK_START   (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_NETWORK | 0x00000004) /* wlan-start-network */
#define NCP_BRIDGE_CMD_WLAN_NETWORK_STOP    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_NETWORK | 0x00000005) /* wlan-stop-network */
#define NCP_BRIDGE_CMD_WLAN_NETWORK_GET_UAP_STA_LIST    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_NETWORK | 0x00000006) /* wlan-get-uap-sta-list */
#define NCP_BRIDGE_CMD_WLAN_NETWORK_MDNS_QUERY  (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_NETWORK | 0x00000007) /* wlan-mdns-query */
#define NCP_BRIDGE_CMD_WLAN_NETWORK_LIST  (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_NETWORK | 0x00000008) /* wlan-list */
#define NCP_BRIDGE_CMD_WLAN_NETWORK_REMOVE  (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_NETWORK | 0x00000009) /* wlan-remove */
#define NCP_BRIDGE_CMD_WLAN_NETWORK_ADDRESS    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_NETWORK | 0x0000000A) /* wlan-address */

/*WLAN Power mgmt command*/
#define NCP_BRIDGE_CMD_WLAN_POWERMGMT_MEF \
   (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_POWERMGMT | 0x00000001) /* wlan-multi-mef */
#define NCP_BRIDGE_CMD_WLAN_POWERMGMT_DEEP_SLEEP_PS \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_POWERMGMT | 0x00000002) /* wlan-deep-sleep-ps */
#define NCP_BRIDGE_CMD_WLAN_POWERMGMT_IEEE_PS \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_POWERMGMT | 0x00000003) /* wlan-ieee-ps */
#define NCP_BRIDGE_CMD_WLAN_POWERMGMT_UAPSD \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_POWERMGMT | 0x00000004) /* wlan-uapsd-enable */
#define NCP_BRIDGE_CMD_WLAN_POWERMGMT_QOSINFO \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_POWERMGMT | 0x00000005) /* wlan-uapsd-qosinfo */
#define NCP_BRIDGE_CMD_WLAN_POWERMGMT_SLEEP_PERIOD \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_POWERMGMT | 0x00000006) /* wlan-uapsd-sleep-period */
#define NCP_BRIDGE_CMD_WLAN_POWERMGMT_WAKE_MODE_CFG \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_POWERMGMT | 0x00000007) /* wlan-wake-cfg */
#define NCP_BRIDGE_CMD_WLAN_POWERMGMT_WOWLAN_CFG \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_POWERMGMT | 0x00000008) /* wlan-wowlan-cfg */
#define NCP_BRIDGE_CMD_WLAN_POWERMGMT_MCU_SLEEP \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_POWERMGMT | 0x00000009) /* wlan-mcu-sleep-mode */
#define NCP_BRIDGE_CMD_WLAN_POWERMGMT_SUSPEND \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_POWERMGMT | 0x0000000a) /* wlan-suspend */
#define NCP_BRIDGE_CMD_WLAN_POWERMGMT_WAKEUP_HOST \
    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_POWERMGMT | 0x0000000b) /* wlan-wakeup-host */

/*WLAN UAP command*/
#define NCP_BRIDGE_CMD_WLAN_UAP_MAX_CLIENT_CNT   (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_UAP | 0x00000001) /* wlan-set-max-clients-count */

/*WLAN Other command */
#define NCP_BRIDGE_CMD_11AX_CFG       (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_OTHER | 0x00000001)
#define NCP_BRIDGE_CMD_BTWT_CFG       (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_OTHER | 0x00000002)
#define NCP_BRIDGE_CMD_TWT_SETUP      (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_OTHER | 0x00000003)
#define NCP_BRIDGE_CMD_TWT_TEARDOWN   (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_OTHER | 0x00000004)
#define NCP_BRIDGE_CMD_TWT_GET_REPORT (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_OTHER | 0x00000005)
#define NCP_BRIDGE_CMD_11D_ENABLE     (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_OTHER | 0x00000006)
#define NCP_BRIDGE_CMD_REGION_CODE    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_OTHER | 0x00000007)
#define NCP_BRIDGE_CMD_DATE_TIME      (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_OTHER | 0x00000008)
#define NCP_BRIDGE_CMD_GET_TEMPERATUE (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_OTHER | 0x00000009)
#define NCP_BRIDGE_CMD_INVALID_CMD    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_OTHER | 0x0000000a)

/*WLAN Regulatory command*/
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_EU_VALIDATION  (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x00000001)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_ED_MAC_MODE    (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x00000002)
#ifdef CONFIG_NCP_RF_TEST_MODE
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_SET_RF_TEST_MODE      (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x00000003)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_SET_RF_TX_ANTENNA     (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x00000004)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_GET_RF_TX_ANTENNA     (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x00000005)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_SET_RF_RX_ANTENNA     (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x00000006)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_GET_RF_RX_ANTENNA     (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x00000007)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_SET_RF_BAND           (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x00000008)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_GET_RF_BAND           (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x00000009)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_SET_RF_BANDWIDTH      (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x0000000a)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_GET_RF_BANDWIDTH      (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x0000000b)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_SET_RF_CHANNEL        (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x0000000c)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_GET_RF_CHANNEL        (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x0000000d)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_SET_RF_RADIO_MODE     (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x0000000e)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_GET_RF_RADIO_MODE     (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x0000000f)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_SET_RF_TX_POWER       (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x00000010)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_SET_RF_TX_CONT_MODE   (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x00000011)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_SET_RF_TX_FRAME       (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x00000012)
#define NCP_BRIDGE_CMD_WLAN_REGULATORY_GET_AND_RESET_RF_PER  (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_REGULATORY | 0x00000013)
#endif

/* System Configure command */
#define NCP_BRIDGE_CMD_SYSTEM_CONFIG_SET  (NCP_BRIDGE_CMD_SYSTEM | NCP_BRIDGE_CMD_SYSTEM_CONFIG | 0x00000001) /* set-device-cfg */
#define NCP_BRIDGE_CMD_SYSTEM_CONFIG_GET  (NCP_BRIDGE_CMD_SYSTEM | NCP_BRIDGE_CMD_SYSTEM_CONFIG | 0x00000002) /* get-device-cfg */

/*WLAN events*/
#define NCP_BRIDGE_EVENT_MCU_SLEEP_ENTER (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_ASYNC_EVENT | 0x00000001)
#define NCP_BRIDGE_EVENT_MCU_SLEEP_EXIT  (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_ASYNC_EVENT | 0x00000002)
#define NCP_BRIDGE_EVENT_MDNS_QUERY_RESULT (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_ASYNC_EVENT | 0x00000003) /* mdns-query-result */
#define NCP_BRIDGE_EVENT_MDNS_RESOLVE_DOMAIN (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_ASYNC_EVENT | 0x00000004) /* mdns-resolve-domain-name */
#define NCP_BRIDGE_EVENT_CSI_DATA        (NCP_BRIDGE_CMD_WLAN | NCP_BRIDGE_CMD_WLAN_ASYNC_EVENT | 0x00000005) /* csi data */

/*NCP Bridge WLAN TLV*/
#define NCP_BRIDGE_CMD_NETWORK_SSID_TLV         0x0001
#define NCP_BRIDGE_CMD_NETWORK_BSSID_TLV        0x0002
#define NCP_BRIDGE_CMD_NETWORK_CHANNEL_TLV      0x0003
#define NCP_BRIDGE_CMD_NETWORK_IP_TLV           0x0004
#define NCP_BRIDGE_CMD_NETWORK_SECURITY_TLV     0x0005
#define NCP_BRIDGE_CMD_NETWORK_ROLE_TLV         0x0006
#define NCP_BRIDGE_CMD_NETWORK_DTIM_TLV         0x0007
#define NCP_BRIDGE_CMD_NETWORK_CAPA_TLV         0x0008
#define NCP_BRIDGE_CMD_NETWORK_ACSBAND_TLV      0x0009
#define NCP_BRIDGE_CMD_NETWORK_PMF_TLV          0x000A

#define NCP_BRIDGE_CMD_WLAN_HE_CAP_TLV 0x00FF

/* NCP Bridge MDNS Result TLV */
#define NCP_BRIDGE_CMD_NETWORK_MDNS_RESULT_PTR 0x0011
#define NCP_BRIDGE_CMD_NETWORK_MDNS_RESULT_SRV 0x0012
#define NCP_BRIDGE_CMD_NETWORK_MDNS_RESULT_TXT 0x0013
#define NCP_BRIDGE_CMD_NETWORK_MDNS_RESULT_IP_ADDR 0x0014

/*Set UAP max client count status*/
#define WLAN_SET_MAX_CLIENT_CNT_SUCCESS          0
#define WLAN_SET_MAX_CLIENT_CNT_FAIL             1
#define WLAN_SET_MAX_CLIENT_CNT_START            2
#define WLAN_SET_MAX_CLIENT_CNT_EXCEED           3

#define MODULE_NAME_MAX_LEN 16
#define VAR_NAME_MAX_LEN  32
#define CONFIG_VALUE_MAX_LEN 256

#define MDNS_PROTO_UDP "_udp"
#define MDNS_PROTO_TCP "_tcp"

#define MDNS_RRTYPE_A   "A"
#define MDNS_RRTYPE_PTR "PTR"

/** Scan Result */
typedef NCP_TLV_PACK_START struct _wlan_bridge_scan_result
{
    /** The network SSID, represented as a NULL-terminated C string of 0 to 32
     *  characters.  If the network has a hidden SSID, this will be the empty
     *  string.
     */
    char ssid[33];
    /** SSID length */
    unsigned int ssid_len;
    /** The network BSSID, represented as a 6-byte array. */
    char bssid[6];
    /** The network channel. */
    unsigned int channel;

    /* network features */

    /** The network supports WMM.  This is set to 0 if the network does not
     *  support WMM or if the system does not have WMM support enabled. */
    unsigned wmm : 1;
#ifdef CONFIG_NCP_SUPP_WPS
    /** The network supports WPS.  This is set to 0 if the network does not
     *  support WPS or if the system does not have WPS support enabled. */
    unsigned wps : 1;
    /** WPS Type PBC/PIN */
    unsigned int wps_session;
#endif
    /** WPA2 Enterprise security */
    unsigned wpa2_entp : 1;
    /** The network uses WEP security. */
    unsigned wep : 1;
    /** The network uses WPA security. */
    unsigned wpa : 1;
    /** The network uses WPA2 security */
    unsigned wpa2 : 1;
    /** The network uses WPA3 SAE security */
    unsigned wpa3_sae : 1;

    /** The signal strength of the beacon */
    unsigned char rssi;
    /** The network SSID, represented as a NULL-terminated C string of 0 to 32
     *  characters.  If the network has a hidden SSID, this will be the empty
     *  string.
     */
    char trans_ssid[33];
    /** SSID length */
    unsigned int trans_ssid_len;
    /** The network BSSID, represented as a 6-byte array. */
    char trans_bssid[6];

    /** Beacon Period */
    uint16_t beacon_period;

    /** DTIM Period */
    uint8_t dtim_period;
} NCP_TLV_PACK_END wlan_bridge_scan_result;

/*Bridge response: scan result*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_SCAN_NETWORK_INFO
{
    uint32_t res_cnt;
    wlan_bridge_scan_result res[CONFIG_MAX_AP_ENTRIES];
} NCP_TLV_PACK_END NCP_CMD_SCAN_NETWORK_INFO;

/*Bridge response: firmware version*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_FW_VERSION
{
    /** Driver version string */
    char driver_ver_str[16];
    /** Firmware version string */
    char fw_ver_str[MLAN_MAX_VER_STR_LEN];
} NCP_TLV_PACK_END NCP_CMD_FW_VERSION;

/*Bridge response: mac address*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_GET_MAC_ADDRESS
{
    uint8_t uap_mac[MLAN_MAC_ADDR_LENGTH];
    uint8_t sta_mac[MLAN_MAC_ADDR_LENGTH];
} NCP_TLV_PACK_END NCP_CMD_GET_MAC_ADDRESS;

/*Bridge response: wlan connection state*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_CONNECT_STAT
{
    uint8_t ps_mode;
    uint8_t uap_conn_stat;
    uint8_t sta_conn_stat;
} NCP_TLV_PACK_END NCP_CMD_CONNECT_STAT;

#ifdef CONFIG_NCP_IPV6
/** This data structure represents an IPv6 address */
typedef NCP_TLV_PACK_START struct _wlan_bridge_ipv6_config
{
    /** The system's IPv6 address in network order. */
    unsigned address[4];
    /** The address type string: linklocal, site-local or global. */
    unsigned char addr_type_str[16];
    /** The state string of IPv6 address (Tentative, Preferred, etc). */
    unsigned char addr_state_str[32];
} NCP_TLV_PACK_END wlan_bridge_ipv6_config;
#endif

/** This data structure represents an IPv4 address */
typedef NCP_TLV_PACK_START struct _wlan_bridge_ipv4_config
{
    /** Set to \ref ADDR_TYPE_DHCP to use DHCP to obtain the IP address or
     *  \ref ADDR_TYPE_STATIC to use a static IP. In case of static IP
     *  address ip, gw, netmask and dns members must be specified.  When
     *  using DHCP, the ip, gw, netmask and dns are overwritten by the
     *  values obtained from the DHCP server. They should be zeroed out if
     *  not used. */
    uint32_t addr_type : 2;
    /** The system's IP address in network order. */
    uint32_t address;
    /** The system's default gateway in network order. */
    uint32_t gw;
    /** The system's subnet mask in network order. */
    uint32_t netmask;
    /** The system's primary dns server in network order. */
    uint32_t dns1;
    /** The system's secondary dns server in network order. */
    uint32_t dns2;
} NCP_TLV_PACK_END wlan_bridge_ipv4_config;

/** WLAN Network Profile
 *  This data structure represents a WLAN network profile. It consists of an
 *  arbitrary name, WiFi configuration, and IP address configuration.
 */
typedef NCP_TLV_PACK_START struct _wlan_bridge_network
{
    /** The name of this network profile. */
    char name[WLAN_NETWORK_NAME_MAX_LENGTH + 1];
    /** The network SSID, represented as a C string of up to 32 characters
     *  in length.
     *  If this profile is used in the micro-AP mode, this field is
     *  used as the SSID of the network.
     *  If this profile is used in the station mode, this field is
     *  used to identify the network. Set the first byte of the SSID to NULL
     *  (a 0-length string) to use only the BSSID to find the network.
     */
    char ssid[IEEEtypes_SSID_SIZE + 1];
    /** The network BSSID, represented as a 6-byte array.
     *  If this profile is used in the micro-AP mode, this field is
     *  ignored.
     *  If this profile is used in the station mode, this field is
     *  used to identify the network. Set all 6 bytes to 0 to use any BSSID,
     *  in which case only the SSID will be used to find the network.
     */
    char bssid[IEEEtypes_ADDRESS_SIZE];
    /** The channel for this network.
     *  If this profile is used in micro-AP mode, this field
     *  specifies the channel to start the micro-AP interface on. Set this
     *  to 0 for auto channel selection.
     *  If this profile is used in the station mode, this constrains the
     *  channel on which the network to connect should be present. Set this
     *  to 0 to allow the network to be found on any channel. */
    unsigned int channel;
    /** The ACS band if set channel to 0. **/
    uint16_t acs_band;
    /** Rssi threshold */
    short rssi_threshold;
    /** BSS type */
    uint8_t type;
    /** The network wireless mode enum wlan_bss_role. Set this
     *  to specify what type of wireless network mode to use.
     *  This can either be \ref WLAN_BSS_ROLE_STA for use in
     *  the station mode, or it can be \ref WLAN_BSS_ROLE_UAP
     *  for use in the micro-AP mode.
     */
    uint8_t role;

    /** Type of network security to use specified by enum
     * wlan_security_type. */
    uint8_t security_type;

    uint8_t enable_11ax : 1;
    uint8_t enable_11ac : 1;
    uint8_t enable_11n : 1;

    /** The network IP address configuration. */
    /** The network IPv6 address configuration */
    wlan_bridge_ipv6_config ipv6[CONFIG_MAX_IPV6_ADDRESSES];
    /** The network IPv4 address configuration */
    wlan_bridge_ipv4_config ipv4;

    uint8_t is_sta_ipv4_connected;

    char identity[IDENTITY_MAX_LENGTH];

    /* Private Fields */
    /** If set to 1, the ssid field contains the specific SSID for this
     * network.*/
    unsigned ssid_specific : 1;
    /** If set to 1, the bssid field contains the specific BSSID for this
     *  network. */
    unsigned bssid_specific : 1;
    /** If set to 1, the channel field contains the specific channel for this
     * network. */
    unsigned channel_specific : 1;
    /** If set to 0, any security that matches is used. */
    unsigned security_specific : 1;
    /** This indicates this network is used as an internal network for
     * WPS */
    unsigned wps_specific : 1;
    /** Beacon period of associated BSS */
    uint16_t beacon_period;
    /** DTIM period of associated BSS */
    uint8_t dtim_period;
    uint8_t wlan_capa;
} NCP_TLV_PACK_END wlan_bridge_network;

/*Bridge response: wlan network info*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_NETWORK_INFO
{
    uint8_t uap_conn_stat;
    uint8_t sta_conn_stat;
    wlan_bridge_network uap_network;
    wlan_bridge_network sta_network;
} NCP_TLV_PACK_END NCP_CMD_NETWORK_INFO;
    
/*Bridge response: wlan network address*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_NETWORK_ADDRESS
{
    uint8_t sta_conn_stat;
    wlan_bridge_network sta_network;
} NCP_TLV_PACK_END NCP_CMD_NETWORK_ADDRESS;

/*Bridge response: wlan network list info*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_NETWORK_LIST
{
    uint8_t count;
    wlan_bridge_network net_list[NCP_BRIDGE_WLAN_KNOWN_NETWORKS];
} NCP_TLV_PACK_END NCP_CMD_NETWORK_LIST;

/*Bridge response: wlan remove network*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_NETWORK_REMOVE
{
    char name[WLAN_NETWORK_NAME_MAX_LENGTH + 1];
    int8_t remove_state;
} NCP_TLV_PACK_END NCP_CMD_NETWORK_REMOVE;

/*NCP Bridge mac address*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_MAC_ADDRESS
{
    uint8_t mac_addr[MLAN_MAC_ADDR_LENGTH];
} NCP_TLV_PACK_END NCP_CMD_MAC_ADDRESS;

/*NCP Bridge SSID tlv*/
typedef NCP_TLV_PACK_START struct _SSID_ParamSet_t
{
    TypeHeader_t header;
    char ssid[IEEEtypes_SSID_SIZE+1];
} NCP_TLV_PACK_END SSID_ParamSet_t;

/*NCP Bridge BSSID tlv*/
typedef NCP_TLV_PACK_START struct _BSSID_ParamSet_t
{
    TypeHeader_t header;
    char bssid[IEEEtypes_ADDRESS_SIZE];
} NCP_TLV_PACK_END BSSID_ParamSet_t;

/*NCP Bridge bss role tlv*/
typedef NCP_TLV_PACK_START struct _BSSRole_ParamSet_t
{
    TypeHeader_t header;
    uint8_t role;
} NCP_TLV_PACK_END BSSRole_ParamSet_t;

/*NCP Bridge channel tlv*/
typedef NCP_TLV_PACK_START struct _Channel_ParamSet_t
{
    TypeHeader_t header;
    uint8_t channel;
} NCP_TLV_PACK_END Channel_ParamSet_t;

/*NCP Bridge acs_band tlv*/
typedef NCP_TLV_PACK_START struct _ACSBand_ParamSet_t
{
    TypeHeader_t header;
    uint16_t acs_band;
} NCP_TLV_PACK_END ACSBand_ParamSet_t;

/*NCP Bridge IP address tlv*/
typedef NCP_TLV_PACK_START struct _IP_ParamSet_t
{
    TypeHeader_t header;
    uint8_t is_autoip;
    uint32_t address;
    uint32_t gateway;
    uint32_t netmask;
    uint32_t dns1;
    uint32_t dns2;
} NCP_TLV_PACK_END IP_ParamSet_t;

/*NCP Bridge security tlv*/
typedef NCP_TLV_PACK_START struct _Security_ParamSet_t
{
    TypeHeader_t header;
    uint8_t type;
    uint8_t password_len;
    char password[1];
} NCP_TLV_PACK_END Security_ParamSet_t;

/*NCP Bridge PMF tlv*/
typedef NCP_TLV_PACK_START struct _PMF_ParamSet_t
{
    TypeHeader_t header;
    uint8_t mfpc;
    uint8_t mfpr;
} NCP_TLV_PACK_END PMF_ParamSet_t;

#ifdef CONFIG_NCP_WIFI_DTIM_PERIOD
/*NCP Bridge DTIM tlv*/
typedef NCP_TLV_PACK_START struct _DTIM_ParamSet_t
{
    TypeHeader_t header;
    uint8_t dtim_period;
} NCP_TLV_PACK_END DTIM_ParamSet_t;
#endif

#ifdef CONFIG_NCP_WIFI_CAPA
/*NCP Bridge CAPA tlv*/
typedef NCP_TLV_PACK_START struct _CAPA_ParamSet_t
{
    TypeHeader_t header;
    uint8_t capa;
} NCP_TLV_PACK_END CAPA_ParamSet_t;
#endif

/*NCP Bridge wlan add network*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_NETWORK_ADD
{
    char name[WLAN_NETWORK_NAME_MAX_LENGTH];
    /** Length of TLVs sent in command starting at tlvBuffer */
    uint32_t tlv_buf_len;
    /**
     * SSID TLV, SSID_ParamSet_t
     * BSSID TLV, BSSID_ParamSet_t
     * BSS role TLV, BSSRole_ParamSet_t
     * Channel TLV, Channel_ParamSet_t
     * ACS band TLV, ACSBand_ParamSet_t
     * IP address TLV, IP_ParamSet_t
     * Security TLV, Security_ParamSet_t
     * DTIM period TLV, DTIM_ParamSet_t
     * CAPA TLV, CAPA_ParamSet_t
     * PMF TLV, PMF_ParamSet_t
     */
    uint8_t tlv_buf[1];
} NCP_TLV_PACK_END NCP_CMD_NETWORK_ADD;

typedef NCP_TLV_PACK_START struct _NCP_CMD_NETWORK_START
{
    char name[32];
    char ssid[32 + 1];
} NCP_TLV_PACK_END NCP_CMD_NETWORK_START;

typedef NCP_TLV_PACK_START struct _NCP_CMD_NETWORK_UAP_STA_LIST
{
    /** station count */
    uint16_t sta_count;
    /** station list */
    wifi_sta_info_t info[MAX_NUM_CLIENTS];
} NCP_TLV_PACK_END NCP_CMD_NETWORK_UAP_STA_LIST;

/*NCP Bridge roaming tlv*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_ROAMING
{
    uint32_t enable;
    uint8_t rssi_threshold;
} NCP_TLV_PACK_END NCP_CMD_ROAMING;

/*Bridge Wlan Reset Data*/
typedef NCP_TLV_PACK_START struct WLAN_RESET_ParaSet
{
    uint8_t option;
} NCP_TLV_PACK_END WLAN_RESET_data;

/*BRIDGE WLAN SOCKET*/
/*Bridge Wlan Socket Open*/
#define HTTP_PARA_LEN 16
typedef NCP_TLV_PACK_START struct _NCP_CMD_SOCKET_OPEN_CFG
{
    char socket_type[HTTP_PARA_LEN];
    char domain_type[HTTP_PARA_LEN];
    char protocol[HTTP_PARA_LEN];
    uint32_t  opened_handle;
} NCP_TLV_PACK_END NCP_CMD_SOCKET_OPEN_CFG;

/*Bridge Wlan Socket Connect*/
#define IP_ADDR_LEN 16
typedef NCP_TLV_PACK_START struct _NCP_CMD_SOCKET_CON_CFGN
{
    uint32_t handle;
    uint32_t port;
    char ip_addr[IP_ADDR_LEN];
} NCP_TLV_PACK_END NCP_CMD_SOCKET_CON_CFG;

/*Bridge Wlan Socket bind*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_SOCKET_BIND_CFG
{
    uint32_t handle;
    uint32_t port;
    char ip_addr[IP_ADDR_LEN];
} NCP_TLV_PACK_END NCP_CMD_SOCKET_BIND_CFG;

/*Bridge Wlan Socket Close*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_SOCKET_CLOSE_CFG
{
    uint32_t handle;
} NCP_TLV_PACK_END NCP_CMD_SOCKET_CLOSE_CFG;

/*Bridge Wlan Socket Listen*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_SOCKET_LISTEN_CFG
{
    uint32_t handle;
    uint32_t number;
} NCP_TLV_PACK_END NCP_CMD_SOCKET_LISTEN_CFG;

/*Bridge Wlan Socket Accept*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_SOCKET_ACCEPT_CFG
{
    uint32_t handle;
    int  accepted_handle;
} NCP_TLV_PACK_END NCP_CMD_SOCKET_ACCEPT_CFG;

/*Bridge Wlan Socket Send*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_SOCKET_SEND_CFG
{
    uint32_t handle;
    uint32_t size;
    char send_data[1];
} NCP_TLV_PACK_END NCP_CMD_SOCKET_SEND_CFG;

/*Bridge Wlan Socket Sendto*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_SOCKET_SENDTO_CFG
{
    uint32_t handle;
    uint32_t size;
    char ip_addr[IP_ADDR_LEN];
    uint32_t port;
    char send_data[1];
} NCP_TLV_PACK_END NCP_CMD_SOCKET_SENDTO_CFG;

/*Bridge Wlan Socket Receive*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_SOCKET_RECEIVE_CFG
{
    uint32_t handle;
    uint32_t recv_size;
    uint32_t timeout;
    char recv_data[1];
} NCP_TLV_PACK_END NCP_CMD_SOCKET_RECEIVE_CFG;

/*Bridge Wlan Socket Recvfrom*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_SOCKET_RECVFROM_CFG
{
    uint32_t handle;
    uint32_t recv_size;
    uint32_t timeout;
    char peer_ip[IP_ADDR_LEN];
    uint32_t peer_port;
    char recv_data[1];
} NCP_TLV_PACK_END NCP_CMD_SOCKET_RECVFROM_CFG;

/*Bridge Wlan Http Connect*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_HTTP_CONNECT_CFG
{
    int opened_handle;
    char host[1];
} NCP_TLV_PACK_END  NCP_CMD_HTTP_CON_CFG;

/*Bridge Wlan Http Disconnect*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_HTTP_DISCONNECT_CFG
{
    uint32_t handle;
} NCP_TLV_PACK_END  NCP_CMD_HTTP_DISCON_CFG;

/*Bridge Wlan Http Seth*/
#define SETH_NAME_LENGTH  64
#define SETH_VALUE_LENGTH 128
typedef NCP_TLV_PACK_START struct _NCP_CMD_HTTP_SETH_CFG
{
    char name[SETH_NAME_LENGTH];
    char value[SETH_VALUE_LENGTH];
} NCP_TLV_PACK_END NCP_CMD_HTTP_SETH_CFG;

/*Bridge Wlan Http Seth*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_HTTP_UNSETH_CFG
{
    char name[SETH_NAME_LENGTH];
} NCP_TLV_PACK_END NCP_CMD_HTTP_UNSETH_CFG;

/*Bridge Wlan Http Request*/
#define HTTP_URI_LEN 512
typedef NCP_TLV_PACK_START struct _NCP_CMD_HTTP_REQ_CFG
{
    uint32_t handle;
    char     method[HTTP_PARA_LEN];
    char uri[HTTP_URI_LEN];
    uint32_t req_size;
    char req_data[1];
} NCP_TLV_PACK_END NCP_CMD_HTTP_REQ_CFG;

/*Bridge Wlan Http Request Response*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_HTTP_REQ_RESP_CFG
{
    uint32_t header_size;
    char recv_header[1];
} NCP_TLV_PACK_END NCP_CMD_HTTP_REQ_RESP_CFG;

/*Bridge Wlan Http Receive*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_HTTP_RECV_CFG
{
    uint32_t handle;
    uint32_t recv_size;
    uint32_t timeout;
    char recv_data[1];
} NCP_TLV_PACK_END NCP_CMD_HTTP_RECV_CFG;

/*Bridge Wlan Http Upgrade*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_HTTP_UPG_CFG
{
    uint32_t handle;
    char     uri[HTTP_URI_LEN];
    char     protocol[HTTP_PARA_LEN];
} NCP_TLV_PACK_END NCP_CMD_HTTP_UPG_CFG;

/*Bridge Wlan Websocket Send*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_WEBSOCKET_SEND_CFG
{
    uint32_t handle;
    char     type[HTTP_PARA_LEN];
    uint32_t size;
    char send_data[1];
} NCP_TLV_PACK_END NCP_CMD_WEBSOCKET_SEND_CFG;

/*Bridge Wlan Websocket Receive*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_WEBSOCKET_RECV_CFG
{
    uint32_t handle;
    uint32_t recv_size;
    uint32_t timeout;
    uint32_t fin;
    char recv_data[1];
} NCP_TLV_PACK_END NCP_CMD_WEBSOCKET_RECV_CFG;

typedef NCP_TLV_PACK_START struct _NCP_CMD_WPS_GEN_PIN
{
    uint32_t pin;
} NCP_TLV_PACK_END NCP_CMD_WPS_GEN_PIN;

typedef NCP_TLV_PACK_START struct _NCP_CMD_WPS_PIN
{
    uint32_t pin;
} NCP_TLV_PACK_END NCP_CMD_WPS_PIN;

/** Network monitor structure */
typedef NCP_TLV_PACK_START struct
{
    /** Action */
    uint16_t action;
    /** Monitor activity */
    uint16_t monitor_activity;
    /** Filter flags */
    uint16_t filter_flags;
    /** Channel scan parameter : Radio type */
    uint8_t radio_type;
    /** Channel number */
    uint8_t chan_number;
    /** mac num of filter*/
    uint8_t filter_num;
    /** Source address of the packet to receive */
    uint8_t mac_addr[MAX_MONIT_MAC_FILTER_NUM][MLAN_MAC_ADDR_LENGTH];
} NCP_TLV_PACK_START wlan_bridge_net_monitor_para;

typedef NCP_TLV_PACK_START struct _NCP_CMD_NET_MONITOR
{
    wlan_bridge_net_monitor_para monitor_para;
} NCP_TLV_PACK_END NCP_CMD_NET_MONITOR;

typedef NCP_TLV_PACK_START struct _NCP_CMD_REGISTER_ACCESS
{
    uint8_t action;
    uint8_t type;
    uint32_t offset;
    uint32_t value;
} NCP_TLV_PACK_END NCP_CMD_REGISTER_ACCESS;

typedef NCP_TLV_PACK_START struct _NCP_CMD_MEM_STAT
{
    uint32_t free_heap_size;
    uint32_t minimun_ever_free_heap_size;
} NCP_TLV_PACK_END NCP_CMD_MEM_STAT;

typedef NCP_TLV_PACK_START struct _NCP_CMD_CSI
{
    wlan_csi_config_params_t csi_para;
} NCP_TLV_PACK_END NCP_CMD_CSI;

typedef NCP_TLV_PACK_START struct _NCP_CMD_11K_CFG
{
    int enable;
} NCP_TLV_PACK_END NCP_CMD_11K_CFG;

typedef NCP_TLV_PACK_START struct _NCP_CMD_NEIGHBOR_REQ
{
    SSID_ParamSet_t ssid_tlv;
} NCP_TLV_PACK_END NCP_CMD_NEIGHBOR_REQ;

typedef NCP_TLV_PACK_START struct _NCP_CMD_MBO_ENABLE
{
    int enable;
} NCP_TLV_PACK_END NCP_CMD_MBO_ENABLE;

typedef NCP_TLV_PACK_START struct _MBO_NONPREFER_CH
{
    uint8_t ch0;
    uint8_t ch1;
    uint8_t preference0;
    uint8_t preference1;
} NCP_TLV_PACK_END MBO_NONPREFER_CH;

typedef NCP_TLV_PACK_START struct _MBO_NONPREFER_CH_SUPP
{
    char mbo_nonprefer_ch_params[32];
} NCP_TLV_PACK_END MBO_NONPREFER_CH_SUPP;

typedef NCP_TLV_PACK_START struct _NCP_CMD_MBO_NONPREFER_CH
{
    union{
        MBO_NONPREFER_CH mbo_nonprefer_ch_cfg;
        MBO_NONPREFER_CH_SUPP mbo_nonprefer_ch_supp_cfg;
    } NONPREFER_CH_CFG;
} NCP_TLV_PACK_END NCP_CMD_MBO_NONPREFER_CH;

typedef NCP_TLV_PACK_START struct _NCP_CMD_MBO_SET_CELL_CAPA
{
    uint8_t cell_capa;
} NCP_TLV_PACK_END NCP_CMD_MBO_SET_CELL_CAPA;

typedef NCP_TLV_PACK_START struct _NCP_CMD_MBO_SET_OCE
{
    uint8_t oce;
} NCP_TLV_PACK_END NCP_CMD_MBO_SET_OCE;

/** RSSI information */
typedef NCP_TLV_PACK_START struct
{
    /** Data RSSI last */
    int16_t data_rssi_last;
    /** Data nf last */
    int16_t data_nf_last;
    /** Data RSSI average */
    int16_t data_rssi_avg;
    /** Data nf average */
    int16_t data_nf_avg;
    /** BCN SNR */
    int16_t bcn_snr_last;
    /** BCN SNR average */
    int16_t bcn_snr_avg;
    /** Data SNR last */
    int16_t data_snr_last;
    /** Data SNR average */
    int16_t data_snr_avg;
    /** BCN RSSI */
    int16_t bcn_rssi_last;
    /** BCN nf */
    int16_t bcn_nf_last;
    /** BCN RSSI average */
    int16_t bcn_rssi_avg;
    /** BCN nf average */
    int16_t bcn_nf_avg;
} NCP_TLV_PACK_END wlan_bridge_rssi_info_t;

typedef NCP_TLV_PACK_START struct _NCP_CMD_RSSI
{
    wlan_bridge_rssi_info_t rssi_info;
} NCP_TLV_PACK_END NCP_CMD_RSSI;

/*NCP Bridge multi MEF tlv*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_POWERMGMT_MEF
{
    int type;
    uint8_t action;
} NCP_TLV_PACK_END NCP_CMD_POWERMGMT_MEF;

/*NCP Bridge UAPSD tlv*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_POWERMGMT_UAPSD
{
    int enable;
} NCP_TLV_PACK_END NCP_CMD_POWERMGMT_UAPSD;

/*NCP Bridge qosinfo tlv*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_POWERMGMT_QOSINFO
{
    uint8_t qos_info;
    /* 0 - get, 1 - set */
    uint8_t action;
} NCP_TLV_PACK_END NCP_CMD_POWERMGMT_QOSINFO;

/*NCP Bridge sleep period tlv*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_POWERMGMT_SLEEP_PERIOD
{
    uint32_t period;
    /* 0 - get, 1 - set */
    uint8_t action;
} NCP_TLV_PACK_END NCP_CMD_POWERMGMT_SLEEP_PERIOD;

typedef NCP_TLV_PACK_START struct _power_cfg_t
{
    uint8_t enable;
    uint8_t wake_mode;
    uint8_t subscribe_evt;
    uint32_t wake_duration;
    uint8_t is_mef;
    uint32_t wake_up_conds;
    uint8_t is_manual;
    uint32_t rtc_timeout;
    uint8_t wakeup_host;
} NCP_TLV_PACK_END power_cfg_t;

/* Host wakes up MCU through interface */
#define WAKE_MODE_UART 0x1
/* Host wakes up MCU through GPIO */
#define WAKE_MODE_GPIO 0x2

typedef NCP_TLV_PACK_START struct _NCP_CMD_POWERMGMT_WAKE_CFG
{
    uint8_t wake_mode;
    uint8_t subscribe_evt;
    uint32_t wake_duration;
} NCP_TLV_PACK_END NCP_CMD_POWERMGMT_WAKE_CFG;

typedef NCP_TLV_PACK_START struct _NCP_CMD_POWERMGMT_WOWLAN_CFG
{
    uint8_t is_mef;
    uint8_t wake_up_conds;
} NCP_TLV_PACK_END NCP_CMD_POWERMGMT_WOWLAN_CFG;

typedef NCP_TLV_PACK_START struct _NCP_CMD_POWERMGMT_MCU_SLEEP
{
    uint8_t enable;
    uint8_t is_manual;
    int rtc_timeout;
} NCP_TLV_PACK_END NCP_CMD_POWERMGMT_MCU_SLEEP;

typedef NCP_TLV_PACK_START struct _NCP_CMD_POWERMGMT_SUSPEND
{
    int mode;
} NCP_TLV_PACK_END NCP_CMD_POWERMGMT_SUSPEND;

typedef NCP_TLV_PACK_START struct _NCP_CMD_POWERMGMT_WAKEUP_HOST
{
    uint8_t enable;
} NCP_TLV_PACK_END NCP_CMD_POWERMGMT_WAKEUP_HOST;

/*NCP Bridge HE CAPA tlv*/
typedef NCP_TLV_PACK_START struct _HE_CAP_ParamSet_t
{
    /** 0xff: Extension Capability IE */
    TypeHeader_t header;
    /** 35: HE capability */
    uint8_t ext_id;
    /** he mac capability info */
    uint8_t he_mac_cap[6];
    /** he phy capability info */
    uint8_t he_phy_cap[11];
    /** he txrx mcs support for 80MHz */
    uint8_t he_txrx_mcs_support[4];
    /** val for txrx mcs 160Mhz or 80+80, and PPE thresholds */
    uint8_t val[28];
} NCP_TLV_PACK_END HE_CAP_ParamSet_t;

typedef NCP_TLV_PACK_START struct _NCP_CMD_11AX_CFG
{
    /** band, BIT0:2.4G, BIT1:5G, both set for 2.4G and 5G*/
    uint8_t band;
    HE_CAP_ParamSet_t he_cap_tlv;
} NCP_TLV_PACK_END NCP_CMD_11AX_CFG;

typedef NCP_TLV_PACK_START struct _NCP_CMD_BTWT_CFG
{
    /** only support 1: Set */
    uint16_t action;
    /** 0x125: Broadcast TWT AP config */
    uint16_t sub_id;
    /** range 64-255 */
    uint8_t nominal_wake;
    /** Max STA Support */
    uint8_t max_sta_support;
    uint16_t twt_mantissa;
    uint16_t twt_offset;
    uint8_t twt_exponent;
    uint8_t sp_gap;
} NCP_TLV_PACK_END NCP_CMD_BTWT_CFG;

typedef NCP_TLV_PACK_START struct _NCP_CMD_TWT_SETUP
{
    /** Implicit, 0: TWT session is explicit, 1: Session is implicit */
    uint8_t implicit;
    /** Announced, 0: Unannounced, 1: Announced TWT */
    uint8_t announced;
    /** Trigger Enabled, 0: Non-Trigger enabled, 1: Trigger enabled TWT */
    uint8_t trigger_enabled;
    /** TWT Information Disabled, 0: TWT info enabled, 1: TWT info disabled */
    uint8_t twt_info_disabled;
    /** Negotiation Type, 0: Individual TWT, 3: Broadcast TWT */
    uint8_t negotiation_type;
    /** TWT Wakeup Duration, time after which the TWT requesting STA can
     * transition to doze state */
    uint8_t twt_wakeup_duration;
    /** Flow Identifier. Range: [0-7]*/
    uint8_t flow_identifier;
    /** Hard Constraint, 0: FW can tweak the TWT setup parameters if it is
     *rejected by AP.
     ** 1: Firmware should not tweak any parameters. */
    uint8_t hard_constraint;
    /** TWT Exponent, Range: [0-63] */
    uint8_t twt_exponent;
    /** TWT Mantissa Range: [0-sizeof(UINT16)] */
    uint16_t twt_mantissa;
    /** TWT Request Type, 0: REQUEST_TWT, 1: SUGGEST_TWT*/
    uint8_t twt_request;
} NCP_TLV_PACK_END NCP_CMD_TWT_SETUP;

typedef NCP_TLV_PACK_START struct _NCP_CMD_TWT_TEARDOWN
{
    /** TWT Flow Identifier. Range: [0-7] */
    uint8_t flow_identifier;
    /** Negotiation Type. 0: Future Individual TWT SP start time, 1: Next
     * Wake TBTT time */
    uint8_t negotiation_type;
    /** Tear down all TWT. 1: To teardown all TWT, 0 otherwise */
    uint8_t teardown_all_twt;
} NCP_TLV_PACK_END NCP_CMD_TWT_TEARDOWN;

typedef NCP_TLV_PACK_START struct _IEEE_BTWT_ParamSet_t
{
    /*
     *  [Bit 0]     request
     *  [Bit 1-3]   setup_cmd
     *  [Bit 4]     trigger
     *  [Bit 5]     last_broadcast_parameter_set
     *  [Bit 6]     flow_type
     *  [Bit 7-9]   btwt_recommendation
     *  [Bit 10-14] wake_interval_exponent
     *  [Bit 15]    reserved
     */
    uint16_t request_type;
    uint16_t target_wake_time;
    uint8_t nominal_min_wake_duration;
    uint16_t wake_interval_mantissa;
    /*
     *  [Bit 0-2]   reserved
     *  [Bit 3-7]   btwt_id
     *  [Bit 8-15]  btwt_persistence
     */
    uint16_t twt_info;
} NCP_TLV_PACK_END IEEE_BTWT_ParamSet_t;

typedef NCP_TLV_PACK_START struct _NCP_CMD_TWT_REPORT
{
    /** TWT report type, 0: BTWT id */
    uint8_t type;
    /** TWT report length of value in data */
    uint8_t length;
    uint8_t reserve[2];
    /** TWT report payload for FW response to fill, 4 * 9bytes */
    IEEE_BTWT_ParamSet_t info[4];
} NCP_TLV_PACK_END NCP_CMD_TWT_REPORT;

typedef NCP_TLV_PACK_START struct _NCP_CMD_11D_ENABLE
{
    /** 0 - STA, 1 - UAP */
    uint32_t role;
    /** 0 - disable, 1 - enable */
    uint32_t state;
} NCP_TLV_PACK_END NCP_CMD_11D_ENABLE;

typedef NCP_TLV_PACK_START struct _NCP_CMD_REGION_CODE
{
    /** 0 - get, 1 - set */
    uint32_t action;
    /** region code, 0xaa for world wide safe, 0x10 for US FCC, etc */
    uint32_t region_code;
} NCP_TLV_PACK_END NCP_CMD_REGION_CODE;

/*NCP Bridge system configuration*/
typedef NCP_TLV_PACK_START struct _NCP_CMD_SYSTEM_CFG
{
    /* the name of system config file: sys, prov, wlan */
    char module_name[MODULE_NAME_MAX_LEN];
    /* the name of entry */
    char variable_name[VAR_NAME_MAX_LEN];
    /* set value/returned result */
    char value[CONFIG_VALUE_MAX_LEN];
} NCP_TLV_PACK_END NCP_CMD_SYSTEM_CFG;

typedef NCP_TLV_PACK_START struct _NCP_CMD_CLIENT_CNT
{
    uint16_t max_sta_count;
    uint8_t set_status;
    uint8_t support_count;
} NCP_TLV_PACK_END NCP_CMD_CLIENT_CNT;

typedef NCP_TLV_PACK_START struct _NCP_CMD_ANTENNA_CFG
{
    uint8_t action;
    uint32_t antenna_mode;
    uint16_t evaluate_time;
    uint8_t evaluate_mode;
    uint16_t current_antenna;
} NCP_TLV_PACK_END NCP_CMD_ANTENNA_CFG;

typedef NCP_TLV_PACK_START struct _NCP_CMD_DEEP_SLEEP_PS
{
    int enable;
} NCP_TLV_PACK_END NCP_CMD_DEEP_SLEEP_PS;

typedef NCP_TLV_PACK_START struct _NCP_CMD_IEEE_PS
{
    int enable;
} NCP_TLV_PACK_END NCP_CMD_IEEE_PS;

typedef NCP_TLV_PACK_START struct _NCP_CMD_EU_VALIDATION
{
    uint8_t option;
    uint8_t res_buf[4];
} NCP_TLV_PACK_END NCP_CMD_EU_VALIDATION;

typedef NCP_TLV_PACK_START struct _NCP_CMD_ED_MAC
{
    uint8_t action;
    uint16_t ed_ctrl_2g;
    uint16_t ed_offset_2g;
#ifdef CONFIG_NCP_5GHz_SUPPORT
    uint16_t ed_ctrl_5g;
    uint16_t ed_offset_5g;
#endif
} NCP_TLV_PACK_END NCP_CMD_ED_MAC;

#ifdef CONFIG_NCP_RF_TEST_MODE
typedef NCP_TLV_PACK_START struct _NCP_CMD_RF_TX_ANTENNA
{
    uint8_t ant;
} NCP_TLV_PACK_END NCP_CMD_RF_TX_ANTENNA;

typedef NCP_TLV_PACK_START struct _NCP_CMD_RF_RX_ANTENNA
{
    uint8_t ant;
} NCP_TLV_PACK_END NCP_CMD_RF_RX_ANTENNA;

typedef NCP_TLV_PACK_START struct _NCP_CMD_RF_BAND
{
    uint8_t band;
} NCP_TLV_PACK_END NCP_CMD_RF_BAND;

typedef NCP_TLV_PACK_START struct _NCP_CMD_RF_BANDWIDTH
{
    uint8_t bandwidth;
} NCP_TLV_PACK_END NCP_CMD_RF_BANDWIDTH;

typedef NCP_TLV_PACK_START struct _NCP_CMD_RF_CHANNEL
{
    uint8_t channel;
} NCP_TLV_PACK_END NCP_CMD_RF_CHANNEL;

typedef NCP_TLV_PACK_START struct _NCP_CMD_RF_RADIO_MODE
{
    uint8_t radio_mode;
} NCP_TLV_PACK_END NCP_CMD_RF_RADIO_MODE;

typedef NCP_TLV_PACK_START struct _NCP_CMD_RF_TX_POWER
{
    uint8_t power;
    uint8_t mod;
    uint8_t path_id;
} NCP_TLV_PACK_END NCP_CMD_RF_TX_POWER;

typedef NCP_TLV_PACK_START struct _NCP_CMD_RF_TX_CONT_MODE
{
    uint32_t enable_tx;
    uint32_t cw_mode;
    uint32_t payload_pattern;
    uint32_t cs_mode;
    uint32_t act_sub_ch;
    uint32_t tx_rate;
} NCP_TLV_PACK_END NCP_CMD_RF_TX_CONT_MODE;

typedef NCP_TLV_PACK_START struct _NCP_CMD_RF_TX_FRAME
{
    uint32_t enable;
    uint32_t data_rate;
    uint32_t frame_pattern;
    uint32_t frame_length;
    uint32_t adjust_burst_sifs;
    uint32_t burst_sifs_in_us;
    uint32_t short_preamble;
    uint32_t act_sub_ch;
    uint32_t short_gi;
    uint32_t adv_coding;
    uint32_t tx_bf;
    uint32_t gf_mode;
    uint32_t stbc;
    uint8_t bssid[MLAN_MAC_ADDR_LENGTH];
} NCP_TLV_PACK_END NCP_CMD_RF_TX_FRAME;

typedef NCP_TLV_PACK_START struct _NCP_CMD_RF_PER
{
    uint32_t rx_tot_pkt_count;
    uint32_t rx_mcast_bcast_count;
    uint32_t rx_pkt_fcs_error;
} NCP_TLV_PACK_END NCP_CMD_RF_PER;
#endif

typedef NCP_TLV_PACK_START struct _wlan_date_time_t
{
    uint32_t action;
    uint16_t year;  /*!< Range from 1970 to 2099.*/
    uint8_t month;  /*!< Range from 1 to 12.*/
    uint8_t day;    /*!< Range from 1 to 31 (depending on month).*/
    uint8_t hour;   /*!< Range from 0 to 23.*/
    uint8_t minute; /*!< Range from 0 to 59.*/
    uint8_t second; /*!< Range from 0 to 59.*/
} NCP_TLV_PACK_END wlan_date_time_t;

typedef NCP_TLV_PACK_START struct _NCP_CMD_DATE_TIME
{
    uint32_t action;
    wlan_date_time_t date_time;
} NCP_TLV_PACK_END NCP_CMD_DATE_TIME;

typedef NCP_TLV_PACK_START struct _NCP_CMD_TEMPERATURE
{
    uint32_t temp;
} NCP_TLV_PACK_END NCP_CMD_TEMPERATURE;

typedef NCP_TLV_PACK_START struct _NCP_CMD_WLAN_CONN
{
    char name[WLAN_NETWORK_NAME_MAX_LENGTH];
    uint32_t ip;
    char ssid[IEEEtypes_SSID_SIZE + 1];
} NCP_TLV_PACK_END NCP_CMD_WLAN_CONN;

typedef NCP_TLV_PACK_START struct _QUERY_PTR_CFG
{
    /** Type of service, like '_http' */
    char service[63 + 1];
    /** Protocol, TCP or UDP */
    uint16_t proto;
} NCP_TLV_PACK_END QUERY_PTR_CFG;

typedef NCP_TLV_PACK_START struct _QUERY_A_CFG
{
    /** Domain name, like 'wifi-http.local' */
    char name[63 + 1];
} NCP_TLV_PACK_END QUERY_A_CFG;

typedef NCP_TLV_PACK_START struct _NCP_CMD_MDNS_QUERY
{
    /** Query type (PTR, SRV, A, AAAA...) */
    uint8_t qtype;
    union
    {
        QUERY_PTR_CFG ptr_cfg;
        QUERY_A_CFG a_cfg;
    } Q;
} NCP_TLV_PACK_END NCP_CMD_MDNS_QUERY;

/*NCP Bridge PTR RR tlv*/
typedef NCP_TLV_PACK_START struct _PTR_ParamSet_t
{
    TypeHeader_t header;
    /* instance name */
    char instance_name[63 + 1];
    /* service type */
    char service_type[63 + 1];
    /* srevice protocol */
    char proto[8];
} NCP_TLV_PACK_END PTR_ParamSet_t;

/*NCP Bridge SRV RR tlv*/
typedef NCP_TLV_PACK_START struct _SRV_ParamSet_t
{
    TypeHeader_t header;
    /* host name */
    char host_name[63 + 1];
    /* service port */
    uint16_t port;
    /* target name */
    char target[63 + 1];
} NCP_TLV_PACK_END SRV_ParamSet_t;

/*NCP Bridge TXT RR tlv*/
typedef NCP_TLV_PACK_START struct _TXT_ParamSet_t
{
    TypeHeader_t header;
    /* txt value len */
    uint8_t txt_len;
    /* txt string */
    char txt[63 + 1];
} NCP_TLV_PACK_END TXT_ParamSet_t;

/*NCP Bridge A&AAAA RR tlv*/
typedef NCP_TLV_PACK_START struct _IP_ADDR_ParamSet_t
{
    TypeHeader_t header;
    uint8_t addr_type;
    /* ip address */
    union {
        uint32_t ip_v4;
        uint32_t ip_v6[4];
    } ip;
} NCP_TLV_PACK_END IP_ADDR_ParamSet_t;

#define PTR_TLV_LEN (sizeof(PTR_ParamSet_t))
#define SRV_TLV_LEN (sizeof(SRV_ParamSet_t))
#define TXT_TLV_LEN (sizeof(TXT_ParamSet_t))
#define IP_ADDR_TLV_LEN (sizeof(IP_ADDR_ParamSet_t))

typedef NCP_TLV_PACK_START struct _NCP_EVT_MDNS_RESULT
{
    /* time to live */
    uint32_t ttl;
    /** Length of TLVs sent in command starting at tlvBuffer */
    uint32_t tlv_buf_len;
    /**
     *  PTR, PTR_ParamSet_t
     *  SRV, SRV_ParamSet_t
     *  TXT, TXT_ParamSet_t
     *  A&AAAA, IP_ADDR_ParamSet_t
     */
    uint8_t tlv_buf[1];
} NCP_TLV_PACK_END NCP_EVT_MDNS_RESULT;

typedef MLAN_PACK_START struct _NCP_EVT_CSI_DATA
{
    /** Length in DWORDS, including header */
    uint16_t Len;
    /** CSI signature. 0xABCD fixed */
    uint16_t CSI_Sign;
    /** User defined HeaderID  */
    uint32_t CSI_HeaderID;
    /** Packet info field */
    uint16_t PKT_info;
    /** Frame control field for the received packet*/
    uint16_t FCF;
    /** Timestamp when packet received */
    uint64_t TSF;
    /** Received Packet Destination MAC Address */
    uint8_t Dst_MAC[6];
    /** Received Packet Source MAC Address */
    uint8_t Src_MAC[6];
    /** RSSI for antenna A */
    uint8_t Rx_RSSI_A;
    /** RSSI for antenna B */
    uint8_t Rx_RSSI_B;
    /** Noise floor for antenna A */
    uint8_t Rx_NF_A;
    /** Noise floor for antenna A */
    uint8_t Rx_NF_B;
    /** Rx signal strength above noise floor */
    uint8_t Rx_SINR;
    /** Channel */
    uint8_t channel;
    /** user defined Chip ID */
    uint16_t chip_id;
    /** Reserved */
    uint32_t rsvd;
    /** CSI data length in DWORDs */
    uint32_t CSI_Data_Length;
    /** Start of CSI data */
    uint8_t CSI_Data[0];
    /** At the end of CSI raw data, user defined TailID of 4 bytes*/
} MLAN_PACK_END NCP_EVT_CSI_DATA;

typedef NCP_TLV_PACK_START struct _NCP_EVT_MDNS_RESOLVE
{
    uint8_t ip_type;
    union {
      uint32_t ip6_addr[4];
      uint32_t ip4_addr;
    } u_addr;
} NCP_TLV_PACK_END NCP_EVT_MDNS_RESOLVE;

typedef NCP_TLV_PACK_START struct _NCPCmd_DS_COMMAND
{
    /** Command Header : Command */
    NCP_BRIDGE_COMMAND header;
    /** Command Body */
    union
    {
        /** Scan result*/
        NCP_CMD_SCAN_NETWORK_INFO scan_network_info;
        /** Firmware version*/
        NCP_CMD_FW_VERSION fw_version;
        /** MAC address */
        NCP_CMD_MAC_ADDRESS mac_addr;
        /** Get MAC address */
        NCP_CMD_GET_MAC_ADDRESS get_mac_addr;
        /** wlan connnection state */
        NCP_CMD_CONNECT_STAT conn_stat;
        /** wlan network info*/
        NCP_CMD_NETWORK_INFO network_info;
        /** wlan network address*/
        NCP_CMD_NETWORK_ADDRESS network_address;
        NCP_CMD_NET_MONITOR monitor_cfg;
        /** wlan add network */
        NCP_CMD_NETWORK_ADD network_add;
        /** wlan start network*/
        NCP_CMD_NETWORK_START network_start;
        /** wlan uap sta list */
        NCP_CMD_NETWORK_UAP_STA_LIST uap_sta_list;
        NCP_CMD_CSI csi_cfg;
        NCP_CMD_11K_CFG wlan_11K_cfg;
        NCP_CMD_NEIGHBOR_REQ neighbor_req;

        NCP_CMD_MBO_ENABLE wlan_mbo_enable;
        NCP_CMD_MBO_NONPREFER_CH mbo_nonprefer_ch;
        NCP_CMD_MBO_SET_CELL_CAPA wlan_mbo_set_cell_capa;
        NCP_CMD_MBO_SET_OCE wlan_mbo_set_oce;

        /** RSSI information*/
        NCP_CMD_RSSI signal_rssi;
        /** Roaming configurations */
        NCP_CMD_ROAMING roaming_cfg;
        /** MAX client count*/
        NCP_CMD_CLIENT_CNT max_client_count;
        /** Antenna config*/
        NCP_CMD_ANTENNA_CFG antenna_cfg;
        NCP_CMD_WPS_GEN_PIN wps_gen_pin_info;
        NCP_CMD_WPS_PIN wps_pin_cfg;

        NCP_CMD_SOCKET_OPEN_CFG socket_open;
        NCP_CMD_SOCKET_ACCEPT_CFG socket_accept;
        NCP_CMD_SOCKET_RECEIVE_CFG socket_receive;
        NCP_CMD_SOCKET_RECVFROM_CFG socket_recvfrom;
        NCP_CMD_HTTP_CON_CFG http_connect;
        NCP_CMD_HTTP_RECV_CFG http_receive;
        NCP_CMD_HTTP_REQ_RESP_CFG http_req;
        NCP_CMD_WEBSOCKET_RECV_CFG websocket_receive;

        /** MEF configurations */
        NCP_CMD_POWERMGMT_MEF mef_config;
        /** wlan deep sleep ps*/
        NCP_CMD_DEEP_SLEEP_PS wlan_deep_sleep_ps;
        /** wlan ieee ps*/
        NCP_CMD_IEEE_PS wlan_ieee_ps;
        NCP_CMD_POWERMGMT_UAPSD uapsd_cfg;
        NCP_CMD_POWERMGMT_QOSINFO qosinfo_cfg;
        NCP_CMD_POWERMGMT_SLEEP_PERIOD sleep_period_cfg;
        NCP_CMD_POWERMGMT_WAKE_CFG wake_config;
        NCP_CMD_POWERMGMT_WOWLAN_CFG wowlan_config;
        NCP_CMD_POWERMGMT_MCU_SLEEP mcu_sleep_config;
        NCP_CMD_POWERMGMT_SUSPEND suspend_config;

        NCP_CMD_TWT_REPORT twt_report;
        NCP_CMD_REGION_CODE region_cfg;

        /*regulatory commands*/
        NCP_CMD_EU_VALIDATION eu_validation;
        NCP_CMD_ED_MAC ed_mac_mode;
#ifdef CONFIG_NCP_RF_TEST_MODE
        NCP_CMD_RF_TX_ANTENNA rf_tx_antenna;
        NCP_CMD_RF_RX_ANTENNA rf_rx_antenna;
        NCP_CMD_RF_BAND rf_band;
        NCP_CMD_RF_BANDWIDTH rf_bandwidth;
        NCP_CMD_RF_CHANNEL rf_channel;
        NCP_CMD_RF_RADIO_MODE rf_radio_mode;
        NCP_CMD_RF_TX_POWER rf_tx_power;
        NCP_CMD_RF_TX_CONT_MODE rf_tx_cont_mode;
        NCP_CMD_RF_TX_FRAME rf_tx_frame;
        NCP_CMD_RF_PER rf_per;
#endif

        /*Debug commands*/
        NCP_CMD_REGISTER_ACCESS register_access;
        /*Memory commands*/
        NCP_CMD_MEM_STAT mem_stat;

        /** System configuration */
        NCP_CMD_SYSTEM_CFG system_cfg;

        NCP_CMD_DATE_TIME date_time;
        NCP_CMD_TEMPERATURE temperature;

        /** wlan connect*/
        NCP_CMD_WLAN_CONN wlan_connect;
        /** mdns query*/
        NCP_CMD_MDNS_QUERY mdns_query;
        /** mdns reuslt*/
        NCP_EVT_MDNS_RESULT mdns_result;
        /** mdns resolve*/
        NCP_EVT_MDNS_RESOLVE mdns_resolve;

        /** added network list*/
        NCP_CMD_NETWORK_LIST network_list;
        /** remove network*/
        NCP_CMD_NETWORK_REMOVE network_remove;
    } params;
} NCP_TLV_PACK_END NCPCmd_DS_COMMAND;

#endif /* __NCP_CMD_WIFI_H__ */
