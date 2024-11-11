# SafeSleep
> SafeSleep continuously monitors bedroom humidity using an Arduino Uno with a humidity sensor. If humidity levels go beyond a safe range, it triggers both sound and light alerts, ensuring accessibility for users with hearing or visual impairments and enhancing nighttime safety.

## Table of Contents
* [General Info](#general-information)
* [Technologies Used](#technologies-used)
* [Features](#features)
* [Screenshots](#screenshots)
* [Setup](#setup)
* [Project Status](#project-status)
* [Room for Improvement](#room-for-improvement)
* [Acknowledgements](#acknowledgements)


## General Information
SafeSleep is a device designed to help individuals with respiratory issues, such as those affected by lupus, maintain a safe sleep environment. It uses an Arduino Uno microcontroller and a humidity sensor to monitor bedroom humidity levels in real-time. If levels fall outside a safe range, it triggers multisensory alerts using a buzzer and an LED light to ensure the user is promptly notified. 

By providing real-time monitoring and immediate alerts, it helps users maintain an environment that supports respiratory health and prevents potential health triggers during sleep.

The project’s purpose is to create an accessible and affordable system to help individuals monitor and control their sleep environment’s humidity, ensuring it stays within a safe range.

I undertook this project because it addresses a personal need: my mother, who has lupus, struggles with sleep due to respiratory issues and anxiety. SafeSleep is designed to provide her—and others facing similar challenges—with peace of mind by maintaining a safe sleep environment.

## Technologies Used
- [Arduino Uno WiFi R4 Development Board](https://www.jaycar.com.au/arduino-uno-wifi-r4-development-board/p/XC9211)
- [Arduino Compatible Temperature and Humidity Sensor Module](https://www.jaycar.com.au/arduino-compatible-temperature-and-humidity-sensor-module/p/XC4520)
- [Duinotech Arduino Compatible Active Buzzer Module](https://www.jaycar.com.au/duinotech-arduino-compatible-active-buzzer-module/p/XC4424)
- [LED Traffic Light Module for Arduino](https://www.jaycar.com.au/led-traffic-light-module-for-arduino/p/XC3720)



## Features
- Automatic ambient humidity notification for the user through Serial Monitor.
- Automatic sound notification using active transducer when ambient humidity reaches dangerous/critical levels.
- User-friendly Traffic Light LED configuration to help easy identification of current humidity status (Safe -> Caution -> Dangerous).


## Screenshots
![Picture of Wokwi Configuration](https://github.com/user-attachments/assets/bc85a9af-b4e5-4ef7-9810-f4234de16815)
![Picture of Physical Configuration](https://github.com/user-attachments/assets/68d025e6-f6b0-427d-beaa-a9b055ee3960)
![Picture of Red LED active on the Traffic Light Module](![RedLEDActive](https://github.com/user-attachments/assets/c89317c8-deb3-4ace-985b-78b57318ce8a)
![Picture of Green LED active on the Traffic Light Module]([./img/screenshot.png](https://github.com/user-attachments/assets/8d01f5e5-32f9-4235-b15b-44411610aa0b))


## Setup
Requirements:
- [Arduino IDE](https://www.arduino.cc/en/software)
- [DHT11 Library Module](https://docs.arduino.cc/libraries/dht11/#Releases)
- Arduino R4 Board Manager via 'Board Manager' through the IDE.

Steps:
1. Install the Arduino IDE through your operating system.
2. Install the Ardiuno R4 Board data through the 'Board Manager' settings (Tools -> Boards -> Board Manager -> Search for 'R4').
3. Install the 'DHT11 Library' Module through the 'Library Manager' settings of Arduino IDE.
4. Upload the 'safesleep.ino' onto your Arduino Uno R4 WiFi.
5. Enjoy a good-night's rest knowing that you now know the ambient humidity in your bedroom!

## Room for Improvement
- Integrating a more sophisticated, customizable alarm that could adjust its intensity based on user preference - e.g., different alarm sounds/different volume levels.
- Creating a low-power sleep mode to optimise energy efficiency. 
  
To do:
- Smart Integration: Add functionality to connect SafeSleep with smart home devices, such as controlling a dehumidifier or fan, for automated humidity adjustments.
- User Interface: Develop a mobile app or digital interface that displays real-time humidity data, alert history, and allows users to customize alert settings.
- Data Logging: Include a data logging feature to track historical humidity levels.

## Acknowledgements
- This project was inspired by my mother, Rosa. 
- This project's code had been based on the documentation given through the [Wokwi Documentation](https://docs.wokwi.com/) website in regards to the Arduino Code.
