#Q-Bot
A LEGO Mindstorms Rubik's Cube Solver using ROBOTC
Welcome to the GitHub to Derran, Anmeet, Souren and Brandon's Rubik's cube solver, an advanced LEGO Mindstorms project that automates the solving of a Rubik's Cube using the power of ROBOTC and the TwoPhaseSolver algorithm.
We're all Waterloo students taking Mechatronics Engineering and this is our 1A (First Term) culminating project. 

Project Overview
Q-Bot is designed to handle the physical and computational challenges of solving a Rubik's Cube. It uses a customized setup of LEGO Mindstorms to scan, analyze, and manipulate the cube. This project leverages the TwoPhaseSolver algorithm, a robust solution developed by Herbert Kociemba, to determine the optimal sequence of moves required to solve the cube.

Key Features
Cube Scanning: Q-Bot scans all six faces of the Rubik's Cube and converts this visual input into a 54-character string representation required by the TwoPhaseSolver algorithm.
Solution Conversion: After obtaining the solving sequence from the TwoPhaseSolver, Q-Bot uses a specially developed ROBOTC algorithm to translate these moves into precise mechanical actions executed by the Mindstorms setup.
Real-time Monitoring: An ultrasonic sensor is integrated to detect if the cube is removed during the solving process, which automatically halts the program to prevent errors.
Performance Metrics: Upon completing the solve, Q-Bot displays the total number of turns and the time taken to solve the cube, allowing users to track efficiency and performance.
Getting Started
To get started with Q-Bot, you'll need the following:

LEGO Mindstorms kit
ROBOTC development environment set up on your computer
Access to the TwoPhaseSolver algorithm (already integrated into this project)
Setup Instructions
Build the Q-Bot using LEGO Mindstorms: Refer to the Q-Bot_build_instructions.pdf in the repository for detailed assembly instructions. 
Program Setup: Load the provided ROBOTC program onto your Mindstorms controller.
Calibration: Follow the calibration steps described in calibration_instructions.md to ensure accurate color detection and cube manipulation.
Run: Place a scrambled cube in the designated holder and start the program to watch Q-Bot in action.
Contributing
Contributions to Q-Bot are welcome! Please read CONTRIBUTING.md for details on our code of conduct, and the process for submitting pull requests to us.

License
This project is licensed under the MIT License - see the LICENSE.md file for details.

Acknowledgments
Thanks to Herbert Kociemba for the TwoPhaseSolver, which is integral to the functioning of Q-Bot.
