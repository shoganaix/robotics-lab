<div align="center">

# 🤖 Robotics Lab

**Portfolio de proyectos de robótica — diseño mecánico, electrónica, firmware embebido y control móvil**

[![idioma](https://img.shields.io/badge/lang-Espa%C3%B1ol-blue)](#) [![English](https://img.shields.io/badge/English-README.md-green)](README.md)

![Diseño 3D](https://img.shields.io/badge/CAD-Dise%C3%B1o%203D-orange)
![Blender](https://img.shields.io/badge/3D-Blender%20%2F%203ds%20Max-purple)
![Embebido](https://img.shields.io/badge/Embebido-Arduino%20%2F%20ESP32-teal)
![Móvil](https://img.shields.io/badge/M%C3%B3vil-MIT%20App%20Inventor-blue)
![Inalámbrico](https://img.shields.io/badge/Inal%C3%A1mbrico-Bluetooth%20%2F%20Wi--Fi-green)
![Portfolio](https://img.shields.io/badge/Objetivo-Portfolio-brightgreen)

</div>

**Laboratorio de robótica** personal: cada proyecto de este repositorio combina **diseño mecánico** (todas las estructuras 3D fueron modeladas por mí), **integración electrónica** y **programación embebida**, desde control por puertas lógicas hasta robots controlados por móvil.

> 📦 Este repo está pensado para fijarse en el perfil como escaparate de habilidades en robótica, CAD y embebido.

## Proyectos

| Proyecto | Estado | Descripción |
|---|---|---|
| [**🕷 HeXi — Robot araña con cámara y control móvil**](hexapod-hexi/) | En curso | Hexápodo impreso en 3D con cámara integrada y control mediante app móvil (MIT App Inventor). Diseño de patas propio (`STL` + fuente Blender). |
| [**🚗 Coche con control por puertas lógicas**](logic-gate-car/) | Terminado | Coche teledirigido cuya dirección se implementa con **puertas lógicas digitales**. Chasis y dirección modelados en 3D. |
| [**🤼 Robot sumo con sistema de succión**](sumo-robot/) | Terminado | Robot sumo con chasis 3D propio y **sistema de succión** al suelo para ganar tracción en competiciones. |
| [**🦾 Brazo mecánico**](robotic-arm/) | WIP — placeholder | Proyecto de brazo mecánico. Carpeta documentada y lista para recibir los archivos de diseño. |
| [**🧰 Librerías**](libraries/) | En montaje | Componentes reutilizables desarrollados entre proyectos (IK, gait, protocolos serie). |

## Estructura del repositorio

```text
.
├── README.md                     # Versión en inglés
├── README.es.md                  # Este archivo
├── hexapod-hexi/                 # Robot araña + cámara + app móvil
│   ├── firmware/                 #   Sketches Arduino/ESP32 (.ino)
│   └── hardware/                 #   Piezas 3D (STL) + fuente Blender
├── logic-gate-car/               # Coche con puertas lógicas
│   └── images/                   #   Fotos reales del montaje
├── sumo-robot/
│   └── hardware/                 #   Modelo 3D del chasis (3ds Max)
├── robotic-arm/                  # Brazo mecánico (WIP)
└── libraries/                    # Funciones reutilizables de robótica
```

## Cómo empezar

Cada carpeta de proyecto tiene su propio `README.md` (y `README.es.md`) explicando el concepto, el hardware y los resultados con imágenes cuando existen.

- **HeXi**: sube `hexapod-hexi/firmware/Hexi_sketch/Hexi_sketch.ino` a un ESP32 (o placa compatible) y controla el servo por serie. La app móvil se construye con **MIT App Inventor** (documentada en el README del proyecto; el fuente `.aia` está pendiente de añadir).
- **Archivos 3D**: los `.stl` están listos para imprimir; los `.blend` / `.max` son las fuentes editables.

## Tecnologías

- Diseño 3D y mecánico — **Blender**, **3ds Max**, preparación de **STL** para impresión 3D
- Sistemas embebidos — **Arduino** / **ESP32**, control de servos, protocolos serie
- Diseño digital — control solo por hardware (puertas lógicas)
- Desarrollo de apps móviles — **MIT App Inventor** (Bluetooth / Wi-Fi)
- Comunicación inalámbrica
- Integración de robótica y prototipado rápido

## Habilidades

- Diseño de sistemas robóticos
- Integración hardware–software
- Diseño mecánico para robótica (CAD + impresión)
- Implementación de sistemas de control
- Programación embebida
- Electrónica digital

---

*Todas las estructuras mecánicas fueron diseñadas por mí. Este repositorio no incluye código ni piezas de terceros.*