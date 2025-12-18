# IoT Soil Moisture Monitoring System

## Overview
A simple IoT-based project designed to monitor soil moisture levels using a capacitive soil moisture sensor and provide visual indication using LEDs.

## Components Used
- Capacitive Soil Moisture Sensor
- Arduino (or compatible microcontroller)
- Red LED and Green LED
- Connecting wires

## Working Principle
- The soil moisture sensor continuously reads moisture levels from the soil
- Multiple readings are averaged to reduce noise
- Based on a predefined threshold:
  - Red LED turns ON when soil is dry
  - Green LED turns ON when soil has sufficient moisture

## Key Features
- Sensor value averaging for stable readings
- Threshold-based decision logic
- Serial output for debugging and monitoring

## Applications
- Smart agriculture
- Plant monitoring systems
- Basic sensor-based alert systems

## Learning Outcome
- Sensor data acquisition
- Hardware–software integration
- Embedded logic implementation using Arduino
