# ConnectDemo01

## Before You Begin ##

### About These Lab ###
These labs are an introduction to JFrog Connect, the Internet of Things (IoT), and edge computing. They are part of a Connect 101 workshop. It's introductory/beginner-friendly.

### About JFrog Connect ###
JFrog Connect is a modern Linux-first IoT platform designed to efficiently monitor, manage and update edge and IoT devices at scale. This is performed over a network connection, also known as over the air (OTA). The combined integration of JFrog Connect, with the JFrog Platform, allows automate software deployment from developer to device and avoid security vulnerabilities reaching production devices. Use-cases include manufacturing, automotive, security cameras, kiosks, and robots.

### Target Audience ###
Technical people developing (or curious about) IoT and edge solutions, software engineer, DevOps engineers and architects, early stage startups making IoT applications, R&D, IT architects and managers.

### Contents ###
- The `code` directory contains source code you will need for these labs.
- The `img` directory stores images used in the lab instructions
- Lab: [Readying a Raspberry Pi](/Ready-RPi.md)
- Lab: [Readying a Demo Device](/Ready-demo-device.md)
- Lab: [Push Files to a Device, Compile, and Run](/Initial-files.md)
- Lab: [Update a Device While its Program Runs](/Update-device.md)

## Instructions ##
It's recommended that you have a Raspberry Pi (RPi) for these labs. If you don't have one, Connect can create a demo device.
- [Start here if you have a RPi](/Ready-RPi.md).
- [Start here if you don't have a RPi](/Ready-demo-device.md).

## Workshop Abstract ##
**IoT Management 101 with JFrog Connect - Workshop**

There’s an estimated 12 billion+ IoT devices in the world and IDC estimates over 41 billion by 2025. Internet of Things (IoT) includes smart devices such as industrial robots, retail kiosks, smart cars, security cameras and maker devices that run off a Raspberry Pi (RPi).  For developers, managing an IoT proof-of-concept project is straight forward. Where it gets more interesting and challenging is deploying, updating and managing hundreds to thousands of devices in real-world production environments, distributed globally. JFrog Connect is designed as a comprehensive platform for updating, managing and monitoring Linux based edge and IoT devices for this very purpose. You can register new devices in seconds, monitor thousands from one dashboard, update thousands of devices with a click of a button, and remote troubleshoot anywhere in the world, even when devices reside behind firewalls. This is where DevOps meets IoT. This workshop offers several labs with step-by-step instructions. Bring an RPi or create a virtual demo device in Connect. If you don’t already have Connect, we’ll show you how to access a free-tier instance. Lab files are available through GitHub. We’ll cover these topics:
- The Story of Chips, Sensors, and Devices
  - What are IoT and edge computing?
  - Industry use-cases, potentials, and risks
- Lab 1: Readying a RPi or Virtual Demo Device
  - Required RPi hardware and setup
  - Access a free-tier instance of Connect
  - Register a device using Connect and the Connect Agent
  - What is the Connect Agent?
- OTA Updates
  - Lab 2: Push files to a device, compile, and run
  - Lab 3: Update a device while its program runs
- At Scale
  - Tips and good practices
  - Security considerations
