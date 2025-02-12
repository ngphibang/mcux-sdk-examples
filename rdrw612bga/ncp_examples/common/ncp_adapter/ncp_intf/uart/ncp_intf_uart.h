/*
 * Copyright 2022-2024 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __NCP_INTF_UART_H__
#define __NCP_INTF_UART_H__

#include "ncp_tlv_adapter.h"

int ncp_uart_init(void *argv);
int ncp_uart_deinit(void *argv);
int ncp_uart_send(uint8_t *tlv_buf, size_t tlv_sz, tlv_send_callback_t cb);
int ncp_uart_recv(uint8_t *tlv_buf, size_t *tlv_sz);

#endif /* __NCP_INTF_UART_H__ */