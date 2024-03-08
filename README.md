Rice Cooker
This is a simple Rice Cooker project for Arduino. It uses an LCD Keypad Shield to display the time and allow the user to set the cooking time.

Features
Displays the cooking time on an LCD
Allows the user to set the cooking time using the up and down buttons
Starts the cooking process when the select button is pressed
Displays a countdown timer when the cooking process is started
Turns off the cooking process when the timer reaches 0

Requirements
Arduino Uno board
LCD Keypad Shield ![image](https://github.com/AliElectricy/Rice-cooker/assets/74547659/c2f6a0da-4cbf-45d2-bed8-33964d12c073)
Jumper wires
Wiring
The following pins should be used for this project:

LCD: RS (8), EN (9), D4 (4), D5 (5), D6 (6), D7 (7)
key : A0


Code
The code for this project is written in C++ and uses the Arduino and LiquidCrystal libraries. It can be found in the src directory and consists of a single file called rice_cooker.ino.

To compile and upload the code to the Arduino board, follow these steps:

Connect the Arduino board to your computer using a USB cable.
Open the rice_cooker.ino file in the Arduino IDE.
Select the Arduino Uno board from the Tools > Board menu.
Select the serial port from the Tools > Port menu.
Click the Upload button to compile and upload the code to the board.


Usage
Connect the LCD Keypad Shield to the Arduino board.
Press the up button to increase the cooking time by 10 minutes.
Press the down button to decrease the cooking time by 10 minutes.
Press the select button to start the cooking process.
The LCD will display a countdown timer.
The cooking process will turn off when the timer reaches 0.
License
This project is licensed under the MIT License.

Contact
For any questions or issues, please contact me at alipoorhoseini2001@gmail.com.

I hope this helps! Let me know if you have any questions or if there's anything else I can do to help.


