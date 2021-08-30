/*
 * LCD_PROG.c
 *
 *  Created on: Aug 28, 2021
 *      Author: Abdelaziz
 */

#include "Bit_Math.h"
#include "Std_Types.h"
#include "avr/io.h"
#include "avr/delay.h"
#include "DIO_INIT.h"
#include "LCD_PRIV.h"
#include "LCD_CONFIG.h"
#include "LCD_INIT.h"

// 4 Bit LCD

void LCD_voidInit(void)
{
	_delay_ms(50);
	LCD_voidWritecommand(ConcBit(0,0,1,0,LCD_NoOfLines,LCD_Font,0,0));
	_delay_ms(1);
	LCD_voidWritecommand(ConcBit(0,0,0,0,1,LCD_Display,LCD_cursor,LCD_Blinks));
	_delay_ms(1);
	LCD_voidWritecommand(0b00000001);
	_delay_ms(3);
	LCD_voidWritecommand(0b00000110);

	/*_delay_ms(50);
		LCD_voidWritecommand(0b00100000);
		_delay_ms(1);
		LCD_voidWritecommand(0b00001111);
		_delay_ms(1);
		LCD_voidWritecommand(0b00000001);
		_delay_ms(3);
		LCD_voidWritecommand(0b00000110);*/

}
void LCD_voidWriteData (u8 data)
{
				DIO_voidSetPin(LCD_Pin_RS,High);
				DIO_voidSetPin(LCD_Pin_RW,Low);
				DIO_voidSetPin(LCD_Pin_7,ReadBit((data),(7)));
				DIO_voidSetPin(LCD_Pin_6,ReadBit((data),(6)));
				DIO_voidSetPin(LCD_Pin_5,ReadBit((data),(5)));
				DIO_voidSetPin(LCD_Pin_4,ReadBit((data),(4)));

				LCD_voidEnable();
				DIO_voidSetPin(LCD_Pin_7,ReadBit((data),(3)));
				DIO_voidSetPin(LCD_Pin_6,ReadBit((data),(2)));
				DIO_voidSetPin(LCD_Pin_5,ReadBit((data),(1)));
				DIO_voidSetPin(LCD_Pin_4,ReadBit((data),(0)));

			LCD_voidEnable();

}
void LCD_voidWritecommand (u8 command)
{
		DIO_voidSetPin(LCD_Pin_RS,Low);
		DIO_voidSetPin(LCD_Pin_RW,Low);


		DIO_voidSetPin(LCD_Pin_7,ReadBit((command),(7)));
		DIO_voidSetPin(LCD_Pin_6,ReadBit((command),(6)));
		DIO_voidSetPin(LCD_Pin_5,ReadBit((command),(5)));
		DIO_voidSetPin(LCD_Pin_4,ReadBit((command),(4)));

		LCD_voidEnable();
		DIO_voidSetPin(LCD_Pin_7,ReadBit((command),(3)));
		DIO_voidSetPin(LCD_Pin_6,ReadBit((command),(2)));
		DIO_voidSetPin(LCD_Pin_5,ReadBit((command),(1)));
		DIO_voidSetPin(LCD_Pin_4,ReadBit((command),(0)));

		LCD_voidEnable();

}
void LCD_voidEnable (void)
{
	DIO_voidSetPin(LCD_Pin_Enable,High);
	_delay_ms(1);
	DIO_voidSetPin(LCD_Pin_Enable,Low);
	_delay_ms(50);

}
void LCD_voidClearScreen (void)
{
LCD_voidWritecommand(0b00000001);
}
void LCD_voidReturnHome (void)
{
	LCD_voidWritecommand(0b00000010);


}
void LCD_voidGoToXY (u8 x, u8 y)
{
	if (x==0)
	{ LCD_voidWritecommand((0b10000000)|(y));
	}
	else if (x==1)
	{
		LCD_voidWritecommand((0b11000000)|(y));
	}
}
void LCD_voidWriteString (u8 *str)
{u8 i=0;
	while (str[i]!='\0')
	{
		LCD_voidWriteData(str[i]);
		i++;
	}


}
void LCD_voidWriteVariable (u16 variable)
{ u16 temp,arr[20];
	u8 counter=0;
	s8 i;
	temp=variable;
	while((temp/10)>0)
	{
		arr[counter]=(temp%10);
		counter++;
		temp/=10;
	}
	arr[counter]=(temp%10);


	for(i=counter;i>=0;i--)
	{
		LCD_voidWriteData((arr[i]+48));
	}

}
