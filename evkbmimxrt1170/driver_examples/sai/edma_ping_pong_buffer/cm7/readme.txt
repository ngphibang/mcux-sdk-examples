Overview
========
The sai_edma_ping_pong_buffer example shows how to use sai driver with EDMA scatter gather feature to implement ping pong buffer case.

In this example, one sai instance playbacks the audio data received from external codec.

Toolchain supported
===================
- MCUXpresso  11.8.0
- GCC ARM Embedded  12.2

Hardware requirements
=====================
- Mini/micro USB cable
- MIMXRT1170-EVKB board
- Personal Computer
- Headphone(OMTP standard)
- CS42448 Audio board(Not necessary if use on board codec)

Board settings
==============
For cs42448 audio board:
1.Please mount resistors below,
R2008,R2022,R2011,R2021,R2009,R2010,R2012,R2016,R1998,R2013,R2014,
R2018,R2017,R2000

2.Remove the resistors below:
R2001,R2002,R2003,R2004,R2005,R2006 and R2007.

3.Insert AUDIO board into J76.

For on board codec:
4.Make sure J99 is installed

Prepare the Demo
================
Note: As the EVKBMIMXRT1060 support two codecs, a default on board WM8962 codec and another codec CS42448 on audio board, so to support both of the codecs, the example provide options to switch between the two codecs,
- DEMO_CODEC_WM8962, set to 1 if wm8962 used
- DEMO_CODEC_CS42448, set to 1 if cs42448 used
Please do not set above macros to 1 together, as the demo support one codec only.

1.  Connect a USB cable between the host PC and the OpenSDA USB port on the target board.
2.  Open a serial terminal with the following settings:
    - 115200 baud rate
    - 8 data bits
    - No parity
    - One stop bit
    - No flow control
3.  Download the program to the target board.
Steps for WM8962:
4. Insert the headphones into the headphone jack on MIMXRT1170-EVKB board (J101).
Steps for CS42448:
4. Insert the headphones into the headphone jack J6 and line in line into J12 on the audio board.
5. Either press the reset button on your board or launch the debugger in your IDE to begin running the demo.

Running the demo
================
Note: This demo uses both headphone mic and board main mic(P1) as input source of WM8962. The headphone mic provides left
channel data, and main mic (P1) provides right channel data. If users found there is noise while do record operation,
most probably it is the headphone standard issue (OMTP and CTIA standard difference). You should use the OMTP
standard headphone. You can disable the left channel by using an headphone without microphone feature.

When the demo runs successfully, you can hear the tone and the log would be seen on the OpenSDA terminal like:

~~~~~~~~~~~~~~~~~~~
SAI EDMA ping pong buffer example started!
~~~~~~~~~~~~~~~~~~~
