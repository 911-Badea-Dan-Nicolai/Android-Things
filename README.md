# Android-Things
This is the individual project for the Android Things class, BBU, CS, Sem 6, 2024



## Overview

I have created a system that checks the soil moisture of a plant. Depending on this moisture level, the signal is interpreted as being too low or too high, displaying if the soil is wet enough or too dry.

## Schema

*I used Tinkercad for this schema and the moisture sensor is not exactly the same, but it's another variation of the same component*

## Prerequisites

- Arduino uno
- Power cable for Arduino
- Moisture sensor
- 3 mother-father cables

## Setup and Build Plan

1. First we need to install the Arduino IDE in order to send the system a program to run.
2. Regarding the system, the moisture sensor comes with 3 components (the sensor, the sensor circuit, and 2 mother-mother cables). We connect the sensor to the sensor circuit with the cables.
3. Then we will need our moisture sensor assembly, our Arduino and the 3 mother-father cables. We connect the moisture sensor circuit to the Arduino like so:
	- The AO pin from the moisture sensor circuit to the AO from the Arduino (Because we want to interpret the analog output)
	- The ground from the moisture sensor circuit to the ground of the Arduino (GND)
	- The VCC from the moisture sensor circuit to the 5V from the Arduino
4. We then connect the Arduino to the computer through the power cable having the IDE started.
5. We run the code
6. Then place the moisture sensor inside the soil of a house plant
7. Watch the results as we pour more water into the soil

