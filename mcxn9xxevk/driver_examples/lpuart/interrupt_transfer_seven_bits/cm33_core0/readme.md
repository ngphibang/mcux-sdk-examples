Overview
========
The lpuart_interrupt_transfer_seven_bits Example project is to demonstrate usage of the KSDK lpuart driver with seven data bits feature enabled.
In the example, you can send characters to the console back and they will be printed out onto console
 in a group of 8 characters.
NOTE: Please set com port format to "7 data bits without parity bit" in PC's com port tool

SDK version
===========
- Version: 2.14.0

Toolchain supported
===================
- GCC ARM Embedded  12.2
- MCUXpresso  11.9.0

Hardware requirements
=====================
- Mini/micro USB cable
- MCX-N9XX-EVK board
- Personal Computer
- USB to TTL converter

Board settings
==============
Connect the USB to TTL converter to MCX-N9XX-EVK board.
MCX-N9XX-EVK UART pins:
- TX of USB2COM to J20-9(P0_12)
- RX of USB2COM to J20-12(P0_13)

Prepare the Demo
================
Note: MCUXpresso IDE project default debug console is semihost
1. Connect a micro USB cable between the PC host and the MCU-Link USB port (J5) on the board
2.  Open a serial terminal with the following settings:
    - 115200 baud rate
    - 7 data bits
    - No parity
    - One stop bit
    - No flow control
3. Download the program to the target board.
4. Either press the reset button on your board or launch the debugger in your IDE to begin running the demo.

Running the demo
================
When the demo runs successfully, the log would be seen on the MCU-Link terminal like:
~~~~~~~~~~~~~~~~~~~~~
Lpuart interrupt example with seven data bits
Board receives 8 characters then sends them out
Now please input:
~~~~~~~~~~~~~~~~~~~~~

