/*	Author: cmira039
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
	unsigned char tempA0 = 0x00; // Temporary variable to hold the value of A0
	unsigned char tempA1 = 0x00; // Temporary variable to hold the value of A1
while(1) {

tempA0 = PINA  & 0x01; //get first element
tempA1 = PINA & 0x02; //get second element

if(tempA0 && !tempA1)
{
PORTB = 0x01;
}
else
{
PORTB = 0x00;
}
	

}
return 1;
}


