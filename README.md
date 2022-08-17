# Recycling Pad

This repository contains all required files to build a `Recycling Pad` which is a plugin extension for the [Keygem Switch Tester](https://keygem.store/collections/switch-testers/products/switch-tester-3x3).

It features 3x3 keys, whereby any of the upper three once can be replaced by EC11 encoder(s).

## Gallery

[Fancy Images by @Xibaris](https://imgur.com/a/etkFRNU)

![v0.1 revision Board](https://i.imgur.com/gCJmDmQ.jpeg)
![v0.1 revision PCB rear](https://i.imgur.com/9wbCSJ9.jpeg)
![v0.1 revision PCB front](https://i.imgur.com/PYV6cwx.jpeg)
![v0.1 revision Side](https://i.imgur.com/57ipPn1.jpeg)

## Required Parts

* 1x PCB
* 1x Pro Micro Controller
* 9x 1n4148 Diode (thru hole)
* 1x 6mm tactile switch (to reset MCU)
* up to 3 EC11 Encoders
* up to 9 Cherry-style mechanical switches
* up to 18 Millmax Sockets 3305 / 7305 (recommended, for hotswap)
* 4x 3.5mm Spacer (3d Print file available) => [Spacer 3.5mm](./Case/Recycling_Pad-Spacer_3,5mm.stl)
* 4x 6mm Spacer (3d Print file available) => [Spacer 6mm](./Case/Recycling_Pad-Spacer_9mm.stl)

Depending on your setup, you can replace any number of the upper switches with EC11 rotary encoders.

## Assembly

As the whole PCB is quite tight packed, you need to keep an eye on the soldering order. If you use Millmax Sockets, it's getting easier as you can remove the switches if required.

1. First solder in all the diodes and the reset switch
2. Then add the MillMax Sockets
3. Solder in the center EC11 encoder (if used)
3. Solder in the Pro Micro Headers (NOT THE Controler)
4. Solder in the the remaining EC11 Encoder (use plate as guide to keep the encoder aligned)
5. If not using Millmax: Add all switches to the plate and solder in the switches
5. Add the controller to the Headers

Depending on the length of your Headers, you might want to cut them after soldering. Otherwise they might touch the PCB and shortcircuit a switch.


## QMK

The `qmk` folder contains some base configurations for the Pad.

Note: rows and columns are switched, therefor your configuration needs to be rotated 90° (see example configs).

## Acknowledgements

Cherry Switch 3d Model: https://3dwarehouse.sketchup.com/model/81cf92a3e03098a5cc90be332989df6e/Key-switch-Cherry

Kicad Schematics / Footprints: https://github.com/imchipwood/dumbpad/tree/master/combo_oled

Schematics for embedded version: https://github.com/kb-elmo/QEZ

