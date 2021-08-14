/*
 * DIO_PROG.c
 *
 *  Created on: Aug 14, 2021
 *      Author: Abdelaziz
 */
#include "Bit_Math.h"
#include "Std_Types.h"
#include "avr/io.h"
#include "DIO_PRIV.h"
#include "DIO_CONFIG.h"
#include "DIO_INIT.h"

void DIO_voidInit(void)
{DDRA=ConcBit(DIO_DIR_Pin_7,DIO_DIR_Pin_6,DIO_DIR_Pin_5,DIO_DIR_Pin_4,DIO_DIR_Pin_3,DIO_DIR_Pin_2,DIO_DIR_Pin_1,DIO_DIR_Pin_0);
 DDRB=ConcBit(DIO_DIR_Pin_15,DIO_DIR_Pin_14,DIO_DIR_Pin_13,DIO_DIR_Pin_12,DIO_DIR_Pin_11,DIO_DIR_Pin_10,DIO_DIR_Pin_9,DIO_DIR_Pin_8);
 DDRC=ConcBit(DIO_DIR_Pin_23,DIO_DIR_Pin_22,DIO_DIR_Pin_21,DIO_DIR_Pin_20,DIO_DIR_Pin_19,DIO_DIR_Pin_18,DIO_DIR_Pin_17,DIO_DIR_Pin_16);
 DDRD=ConcBit(DIO_DIR_Pin_31,DIO_DIR_Pin_30,DIO_DIR_Pin_29,DIO_DIR_Pin_28,DIO_DIR_Pin_27,DIO_DIR_Pin_26,DIO_DIR_Pin_25,DIO_DIR_Pin_24);
}
void DIO_voidSetPin(u8 pin_num, u8 value)
{  if (0<=pin_num && pin_num<=7)
		{ if(value==High)
			{
				SetBit(PORTA,pin_num);
			}
			else if (value ==Low)
			{
				ClrBit(PORTA,pin_num);
			}
		}
	else if (8<=pin_num && pin_num<=15)
	{ if(value==High)
		{
			SetBit(PORTB,pin_num-8);
		}
		else if (value ==Low)
		{
			ClrBit(PORTB,pin_num-8);
		}
	}
	else if (16<=pin_num && pin_num<=23)
		{ if(value==High)
			{
				SetBit(PORTC,pin_num-16);
			}
			else if (value ==Low)
			{
				ClrBit(PORTC,pin_num-16);
			}
		}
	else if (24<=pin_num && pin_num<=31)
		{ if(value == High)
			{
				SetBit(PORTD,pin_num-24);
			}
			else if (value == Low)
			{
				ClrBit(PORTD,pin_num-24);
			}
		}

}
u8 DIO_u8GetPin(u8 pin_num)
{u8 value;
	if (0<=pin_num && pin_num<=7)
			{
				value=ReadBit(PINA,pin_num);
			}
	else if (8<=pin_num && pin_num<=15)
	{
		value=ReadBit(PINB,pin_num-8);
	}
	else if (16<=pin_num && pin_num<=23)
		{
			value=ReadBit(PINC,pin_num-16);
		}
	else if (24<=pin_num && pin_num<=31)
		{
			value=ReadBit(PIND,pin_num-24);
		}
	return value;
}
