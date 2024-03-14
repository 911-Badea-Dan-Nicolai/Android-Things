
## Overview

I have created a system that checks the soil moisture of a plant. Depending on this moisture level, the signal is interpreted as being too low or too high, displaying if the soil is wet enough or too dry. The project is good for monitoring house plant soil levels and notifying if the plants need more watering.

## Schema
![image](https://github.com/911-Badea-Dan-Nicolai/Android-Things/assets/61412576/e27a7e37-2fd2-4a66-9fde-5628125b0637)
*I used Tinkercad for this schema and the moisture sensor is not exactly the same, but it's another variation of the same component*

## Pre-requisites

- ARDUINO UNO R3 ATMEGA328P (https://cleste.ro/arduino-uno-r3-atmega328p.html)
- USB A-B 0.3M CABLE (https://cleste.ro/cablu-usb-a-b-05m.html)
- MOISTURE SENSOR MODULE (https://cleste.ro/modul-cu-senzor-umiditate-sol.html)
- 3 DUPONT WIRES 20CM (https://cleste.ro/10xfire-dupont-mama-tata-20cm.html)
- ARDUINO IDE (https://www.arduino.cc/en/software)

## Setup and Build Plan

1. First we need to install the Arduino IDE in order to send the system a program to run.
2. Regarding the system, the moisture sensor comes with 3 components (the sensor, the sensor circuit, and 2 mother-mother cables). We connect the sensor to the sensor circuit with the cables.
3. Then we will need our moisture sensor assembly, our Arduino and the 3 mother-father cables. We connect the moisture sensor circuit to the Arduino like so:
	- The AO pin from the moisture sensor circuit to the AO from the Arduino (Because we want to interpret the analog output)
	- The ground from the moisture sensor circuit to the ground of the Arduino (GND)
	- The VCC from the moisture sensor circuit to the 5V from the Arduino
4. We then connect the Arduino to the computer through the power cable having the IDE started.

## Running

1. We run the code
2. Then place the moisture sensor inside the soil of a house plant
3. Watch the results as we pour more water into the soil
