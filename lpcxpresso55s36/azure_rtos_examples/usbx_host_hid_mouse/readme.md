Overview
========
This example can work with a USB HID mouse. When connecting
a USB HID mouse and pressing keys, the serial port will output
which key has been pressed.


SDK version
===========
- Version: 2.15.0

Toolchain supported
===================
- GCC ARM Embedded  12.2
- MCUXpresso  11.8.0

Hardware requirements
=====================
- Two Micro USB cables
- One USB A Female to Micro B Male cable
- One USB mouse
- Target Board
- Personal Computer(PC)

Board settings
==============
Short the JP2 jumper.

Prepare the Demo
================
1.  Connect the USB A Female to Micro B Male cable between the USB mouse and
    the on-board USB full speed port (J3).
2.  Connect a USB Micro cable between the host PC and the Debug Link USB port (J1) on the target board.
3.  Connect a USB Micro cable between the PC and the on-board USB power port (J2).
4.  Open a serial terminal on the PC with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
5.  Compile the demo.
6.  Download the program to the target board.
7.  Press the on-board RESET button to start the demo.

Running the demo
================
After writing the program to the flash of the target board,
press the reset button on your board to start the demo.
The serial port will output:

USBX host HID mouse example

Then, connect a USB mouse to the USB high speed device port of the board.
The example will print the pressed mouse movement.
