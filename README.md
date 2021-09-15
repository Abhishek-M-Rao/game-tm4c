# game-tm4c
GOAL
Program a game using the TM4C launchpad and Keil embedded development tool utilizing parts such as a slide potentiometer, mp3 jack, switches, OLED display, and LEDs. 
This project is written in C to govern executive functions of the program as well as interfacing the hardware mentioned above.
Assembly to manage low-level interaction between the system and parts such as printing to the OLED and UART communication.


METHOD
My idea for this project was to create a speed racing game that allowed the player to use the slide potentiometer as a y-axis control to avoid incoming randomly generated obstacles. 
Additionally, switches were utilized to allow the player to adjust the incoming speed, and subsequently the difficulty of the game. 


DEVELOPMENT
To employ this idea there has to be synchronization between the different moving parts in the program.
Using the concept of periodic interrupts (in this system called the SysTick timer which works at the default rate of 80 MHz) and semaphores (or flags) and the concept of abstraction.
I was able to break down the project into different parts and enable the main program to call these parts when needed. 
Having a separate C file for each of the parts I was able to declare and define my functions so that they were accessible to the main program to be called. 
This meant my main loop was able to initialize a user interface which the player navigated, run in a loop that contained the game which constantly checked if the player had won or lost, and finally go to an end screen. 
Concepts within these programs include but are not limited to: Analog-to-digital conversion for movement, Digital-to-analog conversion and Nyquist’s theorem for sound production, clock synchronization and UART communication for the OLED display, FIFO queues, and interrupts.
