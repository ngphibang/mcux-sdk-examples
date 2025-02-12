Overview
========
Application demonstrating very basic BLE Central role functionality by scanning for
other BLE devices and establishing a connection with the first scanned Time Server.


Toolchain supported
===================
- MCUXpresso  11.7.0
- GCC ARM Embedded  10.3.1

Hardware requirements
=====================
- Micro USB cable
- rdrw610 board
- Personal Computer

Board settings
==============

Prepare the Demo
================

1.  Open example's project and build it.

2.  Connect a USB cable between the PC host and the OpenSDA USB port on the target board.

3.  Open a serial terminal on PC for OpenSDA serial device with these settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control

4.  Download the program to the target board.

5.  Either press the reset button on your board or launch the debugger in
    your IDE to begin running the example.

Running the demo
================
The demo does not require user interaction.
The application will automatically start scanning and will connect to the first
advertiser who is advertising the Current Time Service.
If the connection is successful, the application performs service discovery to find the
characteristics of the Current Time Service. If discovery is successful,
the application will subscribe to receive time notifications from the peer.
The application will display the received notifications in the console.
