# Microcontroller based Washing Machine using PICSIM LAB

##  Table of Contents

- [Features](#features)
- [Project Screens](#project-screens)
- [Architecture](#architecture)
- [Technologies Used](#technologies-used)
- [How to Build and Run](#how-to-build-and-run)
- [Functional Requirements](#functional-requirements)
- [Learning Outcomes](#learning-outcomes)

-   ## 🛠️ Installation
[MPLAB X IDE](https://www.microchip.com/en-us/tools-resources/develop/mplab-x-ide#tabs)

[PICSIMLAB](https://sourceforge.net/projects/picsim/)

[MPLAB XC8 COMPILER](https://www.microchip.com/en-us/tools-resources/develop/mplab-xc-compilers)

## 🚀 Features

✅ **Power-On Sequence** — Simulates initial boot-up of the machine and user confirmation to power on.  
✅ **Washing Program Selection** — Choose from multiple washing modes, scroll and select using keypad inputs.  
✅ **Water Level Control** — Select from multiple water levels depending on laundry load.  
✅ **Cycle Control (Start/Stop)** — User can start, pause, or stop the washing cycle.  
✅ **Status Display** — Shows the current function (Wash, Rinse, Spin) and remaining time on the CLCD.  
✅ **Door Status Monitoring** — Ensures door is closed before operation, buzzer alerts if the door is open.  
✅ **Program Completion Notification** — Clearly informs the user when the program is complete.


**Washing Program Menu** — shows:  
  - Daily  
  - Heavy  
  - Delicates  
  - Whites  
  - Stain Wash  
  - Eco Cottons  
  - Woolens  
  - Bed Sheets  
  - Rinse + Dry  
  - Dry Only  
  - Wash Only  
  - Aqua Store

- **Water Level Menu** — with options:  
  - Auto  
  - Low  
  - Medium  
  - High  
  - Max

- **Start/Stop Screen** — allows the cycle to be started or stopped.  
- **Function Display Screen** — shows current operation and timer countdown.  
- **Door Status Screen** — alerts if the door is open.  
- **Completion Screen** — “Program completed, remove clothes”



## 🏗️ Architecture

The simulated washing machine consists of:

**Inputs**  
- SW1: Door sensor  
- SW4: Navigation/selection  
- SW5: Power on/start  
- SW6: Stop/pause

**Outputs**  
- CLCD: Program and status messages  
- Buzzer: Alerts on error conditions (like door open)  
- Motor: Simulated motor for wash/rinse/spin

  ## 🖼️ Project Screens(Screenshots):

Here are the simulated screens implemented:

- **Power On Screen** — “Press key5 to Power ON Washing machine”  
  ![image](https://github.com/user-attachments/assets/7b57459d-292f-4865-b944-6b5668cdd56f)

  **water level_screen 1**  
  ![image](https://github.com/user-attachments/assets/a3e7659b-2fd3-4139-a7fd-dc59c0a5e46e)

  **water level_screen 2**
  ![image](https://github.com/user-attachments/assets/8ea522a2-a00b-4bb6-9fdc-6c8fc9118271)
  
  **Start_Stop_Screen**
  ![image](https://github.com/user-attachments/assets/e1b32249-4379-4981-ae08-9ffd3b89c541)

  **Program completed 
  Remove clothes**
  ![Screenshot 2025-06-30 010313](https://github.com/user-attachments/assets/5b051551-0350-4c7f-a048-78e3f3f1bd3d)

 **DOOR_OPEN**
 ![image](https://github.com/user-attachments/assets/400e57a1-e041-484e-adb6-c3e8301b4c1b)


- ## 🎓 Learning Outcomes

- Practical exposure to finite state machines in embedded design  
- Hands-on skills in embedded C programming  
- Knowledge of peripheral interfacing (LCD, keypad, buzzer)  
- Introduction to appliance control systems  
- Embedded simulation workflows with PicsimLab
