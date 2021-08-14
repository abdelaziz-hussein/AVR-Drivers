/*
 * main.c
 *
 *  Created on: Aug 11, 2021
 *      Author: Abdelaziz
 */
#include "Bit_Math.h"
#include "std_Types.h"
#include  "avr/io.h"
#include "avr/delay.h"
#include "DIO Driver/DIO_PRIV.h"
#include "DIO Driver/DIO_CONFIG.h"
#include "DIO Driver/DIO_INIT.h"

int main ()
{ DIO_voidInit();
	while (1)
	{
		if(DIO_u8GetPin(DIO_Pin_24)==High)
		{
		DIO_voidSetPin(DIO_Pin_29,High);
		DIO_voidSetPin(DIO_Pin_30,Low);
		}
		//_delay_ms(1000);
		else if (DIO_u8GetPin(DIO_Pin_25)==High)
		{
		DIO_voidSetPin(DIO_Pin_30,High);
		DIO_voidSetPin(DIO_Pin_29,Low);
		}
      // _delay_ms(1000);

	}
}
