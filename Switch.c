// Switch.c
// This software to input from switches or buttons
// Runs on TM4C123
// Program written by: put your names here
// Date Created: 3/6/17 
// Last Modified: 1/14/21
// Lab number: 10
// Hardware connections
// TO STUDENTS "REMOVE THIS LINE AND SPECIFY YOUR HARDWARE********

#include <stdint.h>
#include "../inc/tm4c123gh6pm.h"
// Code files contain the actual implemenation for public functions
// this file also contains an private functions and private data
//#define PE3210 (*((volatile uint32_t *)0x4002403C)) //bits 3,2,1,0

void Switch_Init (void){
	SYSCTL_RCGCGPIO_R |= 0x10; //activate portE
//	__asm__{
//		NOP
//		NOP
//	}
	while((SYSCTL_PRGPIO_R&0x10) != 0x10){};
	GPIO_PORTE_DIR_R &= ~0x03; //input
	GPIO_PORTE_DEN_R |= 0x03; //enable
}

uint32_t Switch_In(void){
	return GPIO_PORTE_DATA_R&0x03;
}
