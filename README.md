Two Motors Arduino Project

Project Description

This project uses an Arduino board to control two DC motors.

Components Required

- Arduino board
- Two DC motors
- Motor driver
- Connecting wires
- Battery

Software Used

- Arduino IDE
- GitHub

Purpose

To control the movement of two motors using an Arduino program.

...................................................**************************************...............................................................

🔥 STM32 Based Fire Alarm & Motor Control System

<p align="center">
  <b>An Embedded C Project using STM32 Microcontroller</b>
</p>---

📌 About the Project

The STM32 Based Fire Alarm System is an embedded system designed to detect fire and provide an automatic alarm indication using a sensor and lamp.

The system also includes a motor control mechanism with START and STOP buttons. A RESET button is used to reset the alarm after the fire condition is cleared.

🎯 Project Objectives

- Detect fire using a fire sensor.
- Automatically turn ON the alarm lamp.
- Reset the alarm using a reset button.
- Control two motors using START and STOP buttons.
- Understand GPIO programming in STM32.

🛠️ Technologies Used

- Programming Language: Embedded C
- Microcontroller: STM32
- IDE: STM32CubeIDE
- Library: STM32 HAL Library

🔌 GPIO Pin Configuration

GPIO Pin| Connected Component
PA0| Fire Sensor
PA1| Alarm Lamp
PA2| Reset Button
PA3| Motor Start Button
PA4| Motor Stop Button
PA5| Motor 1
PA6| Motor 2

⚙️ Working Principle

1. The fire sensor continuously monitors the surrounding conditions.
2. When fire is detected, the alarm lamp automatically turns ON.
3. After the fire condition is cleared, pressing RESET turns OFF the alarm.
4. Pressing START turns ON both motors.
5. Pressing STOP turns OFF both motors.

🔄 System Operation

       START
         |
         v
   Fire Sensor Check
         |
    Fire Detected?
      /       \
    YES        NO
     |          |
  Lamp ON     Lamp OFF
     |
  Reset Button
     |
  Fire Cleared?
     |
   Lamp OFF

Motor Control:
START Button → Motors ON
STOP Button  → Motors OFF

💻 Programming Concepts

- GPIO Input and Output
- While Loop
- If-Else Conditions
- Logical AND ("&&")
- Bitwise OR ("|")
- Comparison Operators ("==")
- STM32 HAL Functions

📂 Project Structure

STM32-Fire-Alarm-System/
│
├── Core/
│   ├── Inc/
│   │   └── main.h
│   │
│   └── Src/
│       └── main.c
│
├── README.md
│
└── LICENSE

🚀 Expected Output

Condition| Output
Fire Detected| Lamp ON
Fire Cleared + Reset| Lamp OFF
Start Button Pressed| Both Motors ON
Stop Button Pressed| Both Motors OFF

🎓 Learning Outcome

This project helps us understand the practical applications of embedded systems, STM32 GPIO configuration, sensor interfacing, and motor control using Embedded C.

👩‍💻 Project Status

Status: Coding and Development Phase.

---

<p align="center">
  🔥 <b>STM32 FIRE ALARM SYSTEM</b> 🔥
  <br>
  <i>Smart Detection • Fast Alert • Safe Control</i>
</p>
