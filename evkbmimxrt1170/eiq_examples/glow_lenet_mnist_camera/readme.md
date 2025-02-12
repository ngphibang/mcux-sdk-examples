Overview
========
Demonstrates inference for models compiled using the GLOW AOT tool and uses
a camera to generate data for inferencing.

This example project provides an inference example using the Lenet model
compiled with the Glow AOT software tools. The model is capable to perform
hand-written digit classification. The model is using 28 x 28 grayscale
input images and provides the confidence scores for the 10 output classes:
digits "0" to "9". The application will run the inference on data captured by 
a connected camera and display the top1 classification results and the inference time. 
The Glow bundle is the same as the "glow_lenet_mnist" MCUXpresso SDK example in the RT1060 SDK.

A PDF with example numbers for the camera to look at is included in the /doc folder.

 If you want a step-by-step example of running the Glow AOT tool for a given model 
 take a look at the LeNet MNIST Glow MCUXpresso SDK example and the Glow Getting Started Lab:
 https://community.nxp.com/t5/eIQ-Machine-Learning-Software/eIQ-Glow-Lab-for-i-MX-RT/ta-p/1123119


Toolchains supported
- MCUXpresso IDE
- IAR Embedded Workbench for ARM
- Keil uVision MDK
- ArmGCC - GNU Tools ARM Embedded



SDK version
===========
- Version: 2.15.0

Toolchain supported
===================
- MCUXpresso  11.8.0
- GCC ARM Embedded  12.2

Hardware requirements
=====================
- Mini/micro USB cable
- EVKB-MIMXRT1170 board
- Personal computer
- RK055AHD091 or RK055MHD091 display (optional)
- OV5640 camera (optional)

Board settings
==============
Connect the display to J48 (optional)
Connect the camera to J2 (optional)
Connect external 5V power to J43, set J38 to 1-2

Prepare the Demo
================
1. Connect a USB cable between the host PC and the OpenSDA USB port on the target board. 
2. Open a serial terminal with the following settings:
   - 115200 baud rate
   - 8 data bits
   - No parity
   - One stop bit
   - No flow control
3. Build the project. (The project expects the RK055MHD091 panel by default. To use the RK055AHD091 panel,
    change #define DEMO_PANEL DEMO_PANEL_RK055MHD091 to #define DEMO_PANEL MIPI_PANEL_RK055AHD091
    in eiq_display_conf.h.)
4. Download the program to the target board.
5. Either press the reset button on your board or launch the debugger in your IDE to begin running the demo.

Running the demo
================
Use the LCD screen to point the camera at handwritten digits. Some images will work better than others, and a few example
digits have been provided in the PDF in the /doc folder. Thicker font works better than thin font and the demo expects 
black ink/marker on a white background.  For best results, the selection rectangle should be centered on the image 
and nearly (but not completely) fill up the whole rectangle. The camera should be stabilized with your finger or by some other means to prevent 
shaking. Also ensure the camera lens has been focused as described in the instructions when connecting the camera and LCD 
(https://community.nxp.com/t5/i-MX-RT-Knowledge-Base/Connecting-camera-and-LCD-to-i-MX-RT-EVKs/tac-p/1122184). 

You will see the result of the inference on the LCD screen as well as the serial terminal. The result printed
on the LCD screen has a minimum threshold applied to it. 
  Top1 class = 4 (4)
  Confidence = 0.999
  Inference time = 10 (ms)

Your own handwritten digits can also be used. It's recommended to use a thick black marker with white paper for best results. 
