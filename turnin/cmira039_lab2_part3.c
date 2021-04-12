/*	Author: Carlos Miranda cmira039@ucr.edu
 *  Partner(s) Name: n/a
 *	Lab Section: 23
 *	Assignment: Lab #2  Exercise #3
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
	unsigned char counter = 0x00; // Temporary variable to hold the counter       
	unsigned char max = 0x04;
 	
	while(1)
	{

		counter = 0x00;

		if(PINA & 0x01)
		{
			counter++;
		}
		
		if(PINA & 0x02)
		{
			counter++;
		}

		if(PINA & 0x04)
		{
			counter++;
		}

		if(PINA & 0x08)
		{
			counter++;
		}
		
		unsigned char slotsFilled = max - counter;
		unsigned char tempC = slotsFilled;
		if(!slotsFilled)
		{
			tempC = tempC | 0x80;	
		}
		PORTC = tempC;
	}
}


