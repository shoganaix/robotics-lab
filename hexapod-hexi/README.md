# 🕷 HeXi — Spider Robot with Camera & Mobile Control

[![English](README.md)](#) [![Español](README.es.md)](README.es.md)

3D-printed **hexapod robot** with an integrated **camera module** and remote control through a **mobile application** built with **MIT App Inventor**.

## Status

In progress. The custom leg design and the base firmware are in the repository; the full gait controller and the mobile app are being documented/developed.

## Repository Layout

```text
hexapod-hexi/
├── README.md            # This file
├── firmware/
│   └── Hexi_sketch/     # Arduino/ESP32 sketch (base version)
└── hardware/            # 3D-printed leg parts (STL) + Blender source
```

## Firmware

`firmware/Hexi_sketch/Hexi_sketch.ino` is the base embedded sketch (ESP32):

- Servo control with the `ESP32Servo` library
- Serial command protocol: `W` / `S` to move the servo between two positions

```text
Serial (9600 baud): 'W' -> servo.position = 0;   'S' -> servo.position = 90;
```

The light protocol is the seed for the full mobile-driven gait controller (inverse kinematics + camera streaming to be added).

## Hardware (custom design)

The 3D leg assembly was designed entirely by me in **Blender**:

- `hardware/*.stl` — ready-to-print leg parts (coxa, femur, tibia, joints, handles)
- `hardware/Leg.blend` — editable Blender source

Print them and assemble with micro servos. The complete assembly tutorial and the rest of the chassis will be added here.

## Mobile App (MIT App Inventor)

The master control is a mobile app (MIT App Inventor) that:

- Connects to the robot wirelessly (Bluetooth or Wi-Fi)
- Sends movement commands to the ESP32
- Displays the live camera stream

The `.aia` source will be uploaded to this folder when ready. Until then, the control commands are described in [Firmware](#firmware).

## Getting Started

1. Open `firmware/Hexi_sketch/Hexi_sketch.ino` in the Arduino IDE
2. Install the `ESP32Servo` library
3. Upload to an ESP32 (servo on pin `13`)
4. Open the serial monitor at **9600 baud** and send `W` / `S`