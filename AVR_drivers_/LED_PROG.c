/*
 * LED_PROG.c
 *
 *  Created on: Aug 14, 2021
 *      Author: Abdelaziz
 */
#include "Bit_Math.h"
#include "Std_Types.h"
#include "avr/io.h"
#include "DIO_INIT.h"
#include "LED_PRIV.h"
#include "LED_CONFIG.h"
#include "LED_INIT.h"

void LED_voidInit(void)
{

}
void LED_voidLedOn(u8 led_num)
{
#if (LED_MODE==LED_Forward)
	{
		if(led_num==LED_0)
		{
		DIO_voidSetPin(LED_Pin_0,High);
		}
		else if(led_num==LED_1)
		{
		DIO_voidSetPin(LED_Pin_1,High);
		}
		else if(led_num==LED_2)
		{
		DIO_voidSetPin(LED_Pin_2,High);
		}
	}

#elif (LED_MODE==LED_Reverse)
	{
		if(led_num==LED_0)
				{
				DIO_voidSetPin(LED_Pin_0,Low);
				}
				else if(led_num==LED_1)
				{
				DIO_voidSetPin(LED_Pin_1,Low);
				}
				else if(led_num==LED_2)
				{
				DIO_voidSetPin(LED_Pin_2,Low);
				}
	}
#endif
}

void LED_voidLedOff(u8 led_num)
{
	#if (LED_MODE==LED_Forward)
	{
		if(led_num==LED_0)
		{
		DIO_voidSetPin(LED_Pin_0,Low);
		}
		else if(led_num==LED_1)
		{
		DIO_voidSetPin(LED_Pin_1,Low);
		}
		else if(led_num==LED_2)
		{
		DIO_voidSetPin(LED_Pin_2,Low);
		}
	}

	#elif (LED_MODE==LED_Reverse)
	{
		if(led_num==LED_0)
				{
				DIO_voidSetPin(LED_Pin_0,High);
				}
				else if(led_num==LED_1)
				{
				DIO_voidSetPin(LED_Pin_1,High);
				}
				else if(led_num==LED_2)
				{
				DIO_voidSetPin(LED_Pin_2,High);
				}
	}
#endif
}
void LED_voidLedToggle(u8 led_num)
	{
					if(led_num==LED_0)
					{
					DIO_voidTogglePin(LED_Pin_0);
					}
					else if(led_num==LED_1)
					{
					DIO_voidTogglePin(LED_Pin_1);
					}
					else if(led_num==LED_2)
					{
					DIO_voidTogglePin(LED_Pin_2);
					}

	}
