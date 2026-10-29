# The-Displays

## What is this project?

The Displays is a compact, multidisplay built around a perfboard to control two different screens simultaneously using a single Raspberry Pi Pico. 

## What does it do?

This project's main purpose is to showcase small pictures. 
- 0.96" OLED Display: Used for black and white pixel art, designs, text, and names.
- 1.8" TFT LCD Display: Used for full color pictures, small animations, or videos.

## Features

- Multidisplay Operation: Running an I2C OLED and an SPI TFT display side-by-side.
  - Display 1: 0.96" Monochrome OLED 
  - Display 2: 1.8" ST7735 Color TFT
  
## Components

- Microcontroller: Raspberry Pi Pico
- Display 1: 0.96 Oled Display
- Display 2: 1.8 ST7735 Color Display
- Board/PCB: Perfboard (Designed for Pi Pico)
- Wires: Wires to connect componets on the perfboard which i cant connect only with solder.

## BOM

| Component | Description |
| :--- | :--- |
| Microcontroller | Raspberry Pi Pico |
| Display 1 | 0.96" OLED Display |
| Display 2 | 1.8" ST7735 Color Display |
| Board | Perfboard |
| Wiring | Hookup wires for connections not bridged by solder |

## Tools

- Test Firmware: Visual Studio Code (C++)
- Firmware: Arduino IDE (C++)
    - Required Libraries:
    - Adafruit GFX Library
    - Adafruit SSD1306 //= Oled Screen
    - Adafruit ST7735 and ST7789 Library //= TFT LCD Screen
- Reference assembly: KICAD

## Firmware

Display Test Firmware

<img width="298" height="449" alt="Screenshot 2026-10-28 195900" src="https://github.com/user-attachments/assets/8ef32677-2a59-49bb-8c0d-b62ecc4e45ed" />

Firmware



## KICAD Refernece

Schematic

<img width="335" height="332" alt="image" src="https://github.com/user-attachments/assets/64ca63af-1278-47d4-bc52-86ebe0a64fda" />

PCB

<img width="283" height="354" alt="Screenshot 2026-10-27 182810" src="https://github.com/user-attachments/assets/15ce21a4-8c5a-4050-af66-9f6186e934cb" />


## Extra

First for me using a perfboard and the raspberry pi`s. Pico Pico Pico Pico

## Bonus

No Bat allowed :(

Idea sketch before i made it for 2 displays.

<img width="544" height="333" alt="image" src="https://github.com/user-attachments/assets/f083dd3d-d42d-4b34-af7c-959f21b47bae" />
