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
#include "DIO_INIT.h"
#include "LCD_INIT.h"
#include "SWITCH_INIT.h"
#include "LED_INIT.h"


int main ()
{ 	DIO_voidInit();
	LCD_voidInit();
	SWITCH_voidInit();
	LED_voidInit();
	u16 x=5236;
	while (1)
	{
		if(SWITCH_u8IsPressed(SWITCH_0))
		{
		LED_voidLedOn(LED_0);
		LED_voidLedOn(LED_1);
		LED_voidLedOn(LED_2);
		LCD_voidWriteString("Ahmed");


		}
		//_delay_ms(1000);
		else if (SWITCH_u8IsPressed(SWITCH_1))
		{
			LED_voidLedOff(LED_0);
					LED_voidLedOff(LED_1);
					LED_voidLedOff(LED_2);
					LCD_voidGoToXY (0 , 6);
					LCD_voidWriteVariable(x);
		}
		else if (SWITCH_u8IsPressed(SWITCH_2))
				{  _delay_ms(200);


							LED_voidLedToggle(LED_0);
							LED_voidLedToggle(LED_1);
							LED_voidLedToggle(LED_2);
							LCD_voidClearScreen();
							LCD_voidGoToXY (1 , 4);

				}

      // _delay_ms(1000);

	}
}
