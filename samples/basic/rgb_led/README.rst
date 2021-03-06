.. _rgb-led-sample:

PWM: RGB LED
############

Overview
********

This is a sample app which drives a RGB LED using PWM.

There are three single-color component LEDs in an RGB LED. Each component LED
is driven by a PWM port where the pulse width is changed from zero to a fusion
flicker threshold (the minimum flicker rate where the LED is perceived as being
steady), causing each component LED to step from dark to max brightness. Three
**for** loops (one for each component LED) generate a gradual range of color
changes from the RGB LED, and the sample repeats forever.

Wiring
******

Hexiwear K64
============
No special board setup is necessary because there is an on-board RGB LED
connected to the K64 PWM.

Arduino 101
===========

You will need to connect the LED pins to PWM0, PWM1 and PWM2 on Arduino 101 via
the shield. Depending on what kind of RGB LED you are using, please connect the
common cathode to the ground or the common anode to Vcc. You need current
limiting resistor for each of the single color LEDs.

Building and Running
********************

This samples does not output anything to the console.  It can be built and
flashed to a board as follows:

.. zephyr-app-commands::
   :zephyr-app: samples/basic/rgb_led
   :board: hexiwear_k64
   :goals: build flash
   :compact:
