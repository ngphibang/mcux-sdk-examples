Overview
========
The WWDT Example project is to demonstrate usage of the KSDK wdog driver.
In this example,quick test to show user how to feed watch dog.
User need to feed the watch dog in time before it warning or timeout interrupt.
The WINDOW register determines the highest TV value allowed when a watchdog feed is
performed. 

Toolchain supported
===================
- GCC ARM Embedded  12.2
- MCUXpresso  11.8.0

Hardware requirements
=====================
- Micro USB cable
- LPCXpresso55S16 board
- Personal Computer

Board settings
==============
The jumper setting:
    Default jumpers configuration does not work,  you will need to add JP20 and JP21 (JP22 optional for ADC use)

Please note that, if you run the demo with the J10 unconnected, download maybe failed in the second time, please
connect the J10 while debugging, then the CPU can be booted from ROM, otherwise, with the WWDT running, downloading 
maybe failed.

Prepare the Demo
================
1.  Connect a micro USB cable between the host PC and the LPC-Link USB port (J1) on the target board.
2.  Open a serial terminal with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
3.  Download the program to the target board.
4.  Either press the reset button on your board or launch the debugger in your IDE to begin running the demo.

Running the demo
================
If the demo run successfully, you will see the red LED blink every two seconds.
The log below shows example output of the WWDT driver demo in the terminal window:

--- Time out reset test start ---
Watchdog reset occurred

--- Window mode refresh test start---
 WDOG has be refreshed!
 WDOG has be refreshed!
 WDOG has be refreshed!
 WDOG has be refreshed!
 WDOG has be refreshed!
 WDOG has be refreshed!
 WDOG has be refreshed!
 WDOG has be refreshed!
 WDOG has be refreshed!
 WDOG has be refreshed!
 WDOG has be refreshed!
 WDOG has be refreshed!
 WDOG has be refreshed!
 WDOG has be refreshed!

