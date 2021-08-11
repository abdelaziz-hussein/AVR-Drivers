/*
 * main.c
 *
 *  Created on: Aug 11, 2021
 *      Author: Abdelaziz
 */

#include  "avr/io.h"
#include "avr/delay.h"
int main ()
{DDRD=0x80;
	while (1)
	{
		PORTD=0x80;
		_delay_ms(500);
		PORTD=0x00;
		_delay_ms(500);

	}
}
