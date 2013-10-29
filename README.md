Arduino IR Receiver
=

Description
-
An IR receiver designed to work with XBMC across all platforms.  It is built on the Arduino platform and translates a set of known IR codes to USB HID (Keyboard) codes that are meant to work with XBMC.

Currently a Harmony Remote 650 programmed with an RC5 compatible IR code set is being used in conjunction with OpenELEC on an AMD Fusion computer.

The project is a work in progress so some things may not work 100%.

Remote Programming
-
The `remote_setup.txt` file includes information on how to program a Harmony Remote for the code sets in use by the IR receiver.

License
-
All code is licensed under the Apache 2.0 license and all documentation, pictures schematics, etc are licensed under the Creative Commons 2.0 BY-SA license unless otherwise noted.

Building
-
This project is built using ino (https://github.com/amperka/ino).  It may or may not build correctly under the Arduino IDE / Stino / others.