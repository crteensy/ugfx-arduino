# ugfx-arduino
How to use ugfx in arduino. Libraries and example sketch

hackaday.io project: https://hackaday.io/project/8539-using-ugfx-in-arduino

It is assumed that you are familiar with uGFX or have some experience in the arduino environment, including writing and using custom libraries.

## Installation
Well, sort of:

- get uGFX from http://ugfx.org/ (Downloads section, I've tested 2.4 and the git repo state as of 2015-11-24) and put it into arduino's library directory. You should end up with _arduino libraries directory_/ugfx/src and other files and folders. The main include file (gfx.h) should be at _arduino libraries directory_/ugfx/gfx.h .
- Copy the libraries from this repo's library directory to arduino's library directory where all other user libraries are.
- The example sketch goes into your sketchbook, or some other place. It doesn't really matter.

## Usage
libraries/ugfx-arduino is a wrapper for the ugfx core. It is not used directly, but by a project config library (see libraries/teensy3.1-ssd1351-ugfx-config for a config library example). You need to create a config library for each of your projects that you want to use ugfx in.

libraries/ugfx-arduino-ssd1351 is an example driver library. I've tested it with the included teensy 3.1 config library and example sketch. You can use this as a template for your own drivers or come up with something smarter - I'm sure the structure can be improved.

libraries/teensy3.1-ssd1351-ugfx-config is an example config library that includes ugfx and the SSD1351 driver.

examples/teensy3.1-ssd1351-ugfx-config is an example sketch that uses the previously mentioned config library.
