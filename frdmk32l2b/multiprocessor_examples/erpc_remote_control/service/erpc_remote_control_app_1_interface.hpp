/*
 * Copyright (c) 2014-2016, Freescale Semiconductor, Inc.
 * Copyright 2016 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * Generated by erpcgen 1.12.0 on Wed Oct 25 10:00:57 2023.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if !defined(_erpc_remote_control_app_1_interface_hpp_)
#define _erpc_remote_control_app_1_interface_hpp_

#include "erpc_remote_control_app_1_common.hpp"

namespace erpcShim
{


// Abstract base class for remote_control_app_1
class remote_control_app_1_interface
{
    public:
        static const uint8_t m_serviceId = 2;
        static const uint8_t m_button_pressedId = 1;

        virtual ~remote_control_app_1_interface(void);

        //! Return which button was pressed
        virtual void button_pressed(uint32_t which) = 0;
private:
};
} // erpcShim


#endif // _erpc_remote_control_app_1_interface_hpp_
