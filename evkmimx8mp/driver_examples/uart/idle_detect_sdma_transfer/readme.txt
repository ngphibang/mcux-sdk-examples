Overview
========
The uart_idle_detect_sdma example shows how to use uart driver in sdma way:

In this example, one uart instance connect to PC through uart, the board will
send back all characters that PC send to the board.

Uart will receive 8 characters every time, but if the character is less then 8, the idle
line interrupt will generate, and abort the SDMA receive operation, and send out the received
characters.

Toolchain supported
===================
- GCC ARM Embedded  12.2

Hardware requirements
=====================
- Micro USB cable
- EVK-MIMX8M Plus board
- J-Link Debug Probe
- 12V power supply
- Personal Computer

Board settings
==============
No special settings are required.

#### Please note this application can't support booting by uboot! and accordingly it does not support Flash target! ####
This example aims to show the basic usage of the IP's function, some of the used Resources are assigned to Cortex-A core by uboot.

Prepare the Demo
================
1.  Connect 12V power supply and J-Link Debug Probe to the board, switch SW3 to power on the board
2.  Connect a USB cable between the host PC and the J23 USB port on the target board.
3.  Open a serial terminal with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
4.  Download the program to the target board.
5.  Launch the debugger in your IDE to begin running the demo.

Running the demo
================
When the demo runs successfully, the log would be seen on the debug terminal like:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
Uart sdma transfer example!
Uart will receive 8 charactes every time, if less characters were received, 
Uart will generate the idle line detect interrupt, SDMA receive operation will be aborted.
Board will send the received characters out.
Now please input:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

