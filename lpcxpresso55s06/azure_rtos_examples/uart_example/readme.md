Overview
========
The example demonstrates how to use the UART driver in Azure RTOS. For i.mx RT,
it's the LPUART driver. For LPC, it's the USART driver.

The example writes the welcome message into the default UART port. Read 4 characters
for the port, then write them back.


SDK version
===========
- Version: 2.15.0

Toolchain supported
===================
- GCC ARM Embedded  12.2
- MCUXpresso  11.8.0

Hardware requirements
=====================
- Mini/micro USB cable
- LPCXpresso55s06 board
- Personal Computer
- One USB2COM Cable

Board settings
==============
Close JP9 and open JP12 to connect FC0_USART to the J3 port.

Connect a USB2COM between the PC host and the board UART pins
boards           -               USB2COM
J3-Pin1                          Tx
J3-Pin2                          Rx
J3-Pin3                          GND

Prepare the Demo
================
1. Connect a micro USB cable between the PC host and the LPC-Link USB port on the board.
2. Connect the USB2COM cable to the PC.
3. Open a serial terminal with the following settings to connect the USB2COM cable:
   - 115200 baud rate
   - 8 data bits
   - No parity
   - One stop bit
   - No flow control
4. Download the program to the target board.
5. Either press the reset button on your board or launch the debugger in your IDE to
   begin running the demo.

Running the demo
================
The welcome message will be printed out on the console:

Start the UART example...
Please input 4 characters:

Please input 4 characters, then they will be printed out.

