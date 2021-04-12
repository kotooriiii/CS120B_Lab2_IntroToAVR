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
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0x00; PORTC = 0xFF;

	DDRD = 0xFF; PORTD = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
	unsigned short totalWeight = 0x0000;
 	unsigned char tempD = 0x00;
	while(1)
	{

		totalWeight = PINA + PINB + PINC;
		tempD = 0x00;
	
		if(totalWeight >  0x008C)
		{
			tempD = 0x01;
		}

		if(PINA > PINC)
		{
			if(PINA - PINC > 0x50)
			{
				tempD = tempD | 0x02;
			}
		}
		else	
		{
			if(PINC - PINA > 0x50)
			{
				tempD = tempD | 0x02;
			}	
		}

		unsigned short weightSelect = totalWeight & 0x03F0;
		unsigned short weightShift = weightSelect  >> 4 << 2;
		
		tempD = tempD | weightShift;

		PORTD = tempD;
	}
}


