<!DOCTYPE html>
<html lang="en">
<body>
    <h1>Q-Bot</h1>
    <h2>A LEGO Mindstorms Rubik's Cube Solver using ROBOTC</h2>
    <p>Welcome to the GitHub of the Q-Bot which is Derran, Anmeet, Souren, and Brandon's Rubik's cube solver, an advanced LEGO Mindstorms project that automates the solving of a Rubik's Cube using the power of ROBOTC and the TwoPhaseSolver algorithm. We're all Waterloo students taking Mechatronics   Engineering and this is our 1A (First Term) culminating project.
    </p>

 <h2>Project Overview</h2>
    <p>Q-Bot is designed to handle the physical and computational challenges of solving a Rubik's Cube. It uses a customized setup of LEGO Mindstorms to scan, analyze, and manipulate the cube. This project leverages the TwoPhaseSolver algorithm, a robust solution developed by Herbert Kociemba, to determine the optimal sequence of moves required to solve the cube.</p>

  <h2>Key Features</h2>
    <ul>
        <li><strong>Cube Scanning:</strong> Q-Bot scans all six faces of the Rubik's Cube and converts this visual input into a 54-character string representation required by the TwoPhaseSolver algorithm.</li>
        <li><strong>Solution Conversion:</strong> After obtaining the solving sequence from the TwoPhaseSolver, Q-Bot uses a specially developed ROBOTC algorithm to translate these moves into precise mechanical actions executed by the Mindstorms setup.</li>
        <li><strong>Real-time Monitoring:</strong> An ultrasonic sensor is integrated to detect if the cube is removed during the solving process, which automatically halts the program to prevent errors.</li>
        <li><strong>Performance Metrics:</strong> Upon completing the solve, Q-Bot displays the total number of turns and the time taken to solve the cube, allowing users to track efficiency and performance.</li>
    </ul>

  <h2>Getting Started</h2>
    <p>To get started with Q-Bot, you'll need the following:</p>
    <ul>
        <li>LEGO Mindstorms kit</li>
        <li>ROBOTC development environment set up on your computer</li>
        <li>Access to the TwoPhaseSolver algorithm (already integrated into this project)</li>
    </ul>

   <h2>Setup Instructions</h2>
    <p>Build the Q-Bot using LEGO Mindstorms: Refer to the <em>Q-Bot_build_instructions.pdf</em> in the repository for detailed assembly instructions.</p>
    <p>Program Setup: Load the provided ROBOTC program onto your Mindstorms controller.</p>
    <p>Calibration: Follow the calibration steps described in <em>calibration_instructions.md</em> to ensure accurate color detection and cube manipulation.</p>
    <p>Run: Place a scrambled cube in the designated holder and start the program to watch Q-Bot in action.</p>

   <h2>Contributing</h2>
    <p>Contributions to Q-Bot are welcome! Please read <em>CONTRIBUTING.md</em> for details on our code of conduct, and the process for submitting pull requests to us.</p>

   <h2>License</h2>
    <p>This project is licensed under the MIT License - see the <em>LICENSE.md</em> file for details.</p>

   <h2>Acknowledgments</h2>
  <p>Thanks to Herbert Kociemba for the TwoPhaseSolver, which is integral to the functioning of Q-Bot.</p>
</body>
</html>
