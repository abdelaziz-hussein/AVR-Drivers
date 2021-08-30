/*
 * SWITCH_PROG.c
 *
 *  Created on: Aug 15, 2021
 *      Author: Abdelaziz
 */


#include "Bit_Math.h"
#include "Std_Types.h"
#include "avr/io.h"
#include "DIO_INIT.h"
#include "SWITCH_PRIV.h"
#include "SWITCH_CONFIG.h"
#include "SWITCH_INIT.h"

void SWITCH_voidInit(void)
{

}

u8 SWITCH_u8IsPressed(u8 Switch_num)
{ u8 value;
	#if (SWITCH_MODE == SWITCH_PullDown)
	{
		if (Switch_num==SWITCH_0)
		{
			value= DIO_u8GetPin(SWITCH_Pin_0);

		}
		else if (Switch_num==SWITCH_1)
		{
		    value= DIO_u8GetPin(SWITCH_Pin_1);

		}
		else if (Switch_num==SWITCH_2)
		{
		  value= DIO_u8GetPin(SWITCH_Pin_2);

		}
	}
	#elif (SWITCH_MODE==SWITCH_PullUp)
	{
		if (Switch_num==SWITCH_0)
				{
					value= !(DIO_u8GetPin(SWITCH_Pin_0));

				}
				else if (Switch_num==SWITCH_1)
				{
				    value= !(DIO_u8GetPin(SWITCH_Pin_1));

				}
				else if (Switch_num==SWITCH_2)
				{
				  value= !(DIO_u8GetPin(SWITCH_Pin_2));

				}

	}
	#endif
	return value;
}
