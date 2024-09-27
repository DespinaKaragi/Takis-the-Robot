# Takis-the-Robot
A simple C++ robot simulation program where 'Takis the Robot' performs various actions like moving, turning, greeting, and recharging, all while managing battery consumption. The robot’s callsign is initialized by the user, and actions are restricted if battery levels are low, triggering automatic recharging.

## Features
- **Customizable Callsign:** The robot's nickname is input by the user during initialization.
- **Battery Management:** The robot has a starting battery of 500 units. Each action consumes battery, and the robot will recharge automatically when the battery drops below 50 units.
- **Movement and Actions:** 
  - Move forward (cost: 100 units)
  - Turn left (cost: 50 units)
  - Turn right (cost: 50 units)
  - Say hello with the robot's callsign (cost: 75 units)
  - Recharge (+300 units)

## Technologies Used
- **C++:** The program is implemented in C++.
- **Standard Input/Output:** User interaction via console.
