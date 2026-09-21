<div align="center">

# 🤖 Robotics Lab

**Portfolio of robotics projects — mechanical design, electronics, embedded firmware and mobile control**

[![language](https://img.shields.io/badge/lang-English-blue)](#) [![Español](https://img.shields.io/badge/Espa%C3%B1ol-README.es.md-green)](README.es.md)

![3D Modeling](https://img.shields.io/badge/CAD-3D%20Modeling-orange)
![Blender](https://img.shields.io/badge/3D-Blender%20%2F%203ds%20Max-purple)
![Embedded](https://img.shields.io/badge/Embedded-Arduino%20%2F%20ESP32-teal)
![Mobile](https://img.shields.io/badge/Mobile-MIT%20App%20Inventor-blue)
![Wireless](https://img.shields.io/badge/Wireless-Bluetooth%20%2F%20Wi--Fi-green)
![Educational](https://img.shields.io/badge/Purpose-Portfolio-brightgreen)

</div>

Personal **robotics laboratory**: every project in this repository combines **mechanical design** (all the 3D structures were modeled by me), **electronics integration** and **embedded programming**, from logic-gate hardware control to mobile-controlled robots.

> 📦 This repo is meant to be pinned as a profile showcase of robotics, CAD and embedded skills.

## Projects

| Project | Status | Description |
|---|---|---|
| [**🕷 HeXi — Spider Robot with Camera & Mobile Control**](hexapod-hexi/) | In progress | 3D-printed hexapod with integrated camera and control via a mobile app (MIT App Inventor). Custom leg design (`STL` + Blender source). |
| [**🚗 Logic-Gate Controlled Car**](logic-gate-car/) | Done | Remote-controlled car whose direction/steering is implemented with **digital logic gates**. Chassis and steering mechanism modeled in 3D. |
| [**🤼 Sumo Robot with Suction System**](sumo-robot/) | Done | Sumo robot with custom 3D chassis and a ground **suction system** for extra traction during competitions. |
| [**🦾 Robotic Arm**](robotic-arm/) | WIP — placeholder | Mechanical arm project. Folder documented and ready to receive the design files. |
| [**🧰 Libraries**](libraries/) | Scaffolding | Reusable components developed across projects (IK, gait, serial protocols). |

## Repository Structure

```text
.
├── README.md                     # This file
├── README.es.md                  # Spanish version
├── hexapod-hexi/                 # Spider robot + camera + mobile app
│   ├── firmware/                 #   Arduino/ESP32 sketches (.ino)
│   └── hardware/                 #   3D parts (STL) + Blender source
├── logic-gate-car/               # Logic-gate controlled car
│   └── images/                   #   Real photos of the build
├── sumo-robot/
│   └── hardware/                 #   Chassis 3D model (3ds Max)
├── robotic-arm/                  # Robotic arm (WIP)
└── libraries/                    # Reusable robotics functions
```

## Getting Started

Each project folder contains its own `README.md` (and `README.es.md`) explaining the concept, the hardware, and the results with images where available.

- **HeXi**: flash `hexapod-hexi/firmware/Hexi_sketch/Hexi_sketch.ino` on an ESP32 (or compatible board) and control the servo over serial. The mobile app is built with **MIT App Inventor** (documented in the project's README; source `.aia` to be added).
- **3D files**: `.stl` files are ready to print; `.blend` / `.max` are the editable sources.

## Technologies

- 3D Modeling & Mechanical Design — **Blender**, **3ds Max**, **STL** preparation for 3D printing
- Embedded Systems — **Arduino** / **ESP32**, servo control, serial protocols
- Digital Logic Design — hardware-only control (gates)
- Mobile App Development — **MIT App Inventor** (Bluetooth / Wi-Fi)
- Wireless Communication Systems
- Robotics Integration & Rapid Prototyping

## Skills

- Robotics system design
- Hardware–software integration
- Mechanical design for robotics (CAD + printing)
- Control systems implementation
- Embedded programming
- Digital electronics

---

*All mechanical structures were designed by me. No third-party source code or parts are included in this repository.*