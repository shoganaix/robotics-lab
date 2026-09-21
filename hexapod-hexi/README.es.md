# 🕷 HeXi — Robot araña con cámara y control móvil

[![Español](README.es.md)](#) [![English](README.md)](README.md)

**Robot hexápodo** impreso en 3D con **módulo de cámara** integrado y control remoto mediante **aplicación móvil** desarrollada con **MIT App Inventor**.

## Estado

En curso. El diseño de patas propio y el firmware base están en el repositorio; el controlador completo de gait y la app móvil se están documentando/desarrollando.

## Estructura

```text
hexapod-hexi/
├── README.md            # Este archivo
├── README.es.md
├── firmware/
│   └── Hexi_sketch/     # Sketch Arduino/ESP32 (versión base)
└── hardware/            # Piezas de patas impresas en 3D (STL) + fuente Blender
```

## Firmware

`firmware/Hexi_sketch/Hexi_sketch.ino` es el sketch embebido base (ESP32):

- Control de servo con la librería `ESP32Servo`
- Protocolo serie: comandos `W` / `S` para mover el servo entre dos posiciones

```text
Serie (9600 baud): 'W' -> servo.posicion = 0;   'S' -> servo.posicion = 90;
```

Este protocolo ligero es la semilla del controlador completo dirigido por la app (cinemática inversa + streaming de cámara, pendiente de añadir).

## Hardware (diseño propio)

El conjunto de patas 3D fue diseñado íntegramente por mí en **Blender**:

- `hardware/*.stl` — piezas de pata listas para imprimir (coxa, fémur, tibia, articulaciones, soportes)
- `hardware/Leg.blend` — fuente editable de Blender

Imprime las piezas y ensámblalas con microservos. El tutorial de montaje completo y el resto del chasis se añadirán aquí.

## App móvil (MIT App Inventor)

El control maestro es una app móvil (MIT App Inventor) que:

- Se conecta al robot de forma inalámbrica (Bluetooth o Wi-Fi)
- Envía comandos de movimiento al ESP32
- Muestra el streaming de la cámara en vivo

El fuente `.aia` se subirá a esta carpeta cuando esté listo. Hasta entonces, los comandos de control están descritos en [Firmware](#firmware).

## Cómo empezar

1. Abre `firmware/Hexi_sketch/Hexi_sketch.ino` en el IDE de Arduino
2. Instala la librería `ESP32Servo`
3. Sube a un ESP32 (servo en el pin `13`)
4. Abre el monitor serie a **9600 baud** y envía `W` / `S`