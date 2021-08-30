/*
 * SEG_7_PROG.c
 *
 *  Created on: Aug 30, 2021
 *      Author: Abdelaziz
 */


#include "Bit_Math.h"
#include "Std_Types.h"
#include "DIO_INIT.h"
#include "SEG_7_PRIV.h"
#include "SEG_7_CONFIG.h"
#include "SEG_7_INIT.h"

void SEG_7_voidInit(void)
{

}
void SEG_7_voidSetNumber(u8 seg , u8 num)
{
#if (SEG_7_Mode ==Annode_Mode)
	{
		if (seg==1)
		{
			DIO_voidSetPin(SEG_7_Pin_enable_seg_1,High);
			DIO_voidSetPin(SEG_7_Pin_enable_seg_2,Low);
		}
		else if (seg==2)
		{	DIO_voidSetPin(SEG_7_Pin_enable_seg_1,Low);
		DIO_voidSetPin(SEG_7_Pin_enable_seg_2,High);
		}

		switch (num)
		{
		case 0 :
			DIO_voidSetPin(SEG_7_Pin_a,Low);
			DIO_voidSetPin(SEG_7_Pin_b,Low);
			DIO_voidSetPin(SEG_7_Pin_c,Low);
			DIO_voidSetPin(SEG_7_Pin_d,Low);

			break;
		case 1 :
					DIO_voidSetPin(SEG_7_Pin_a,High);
					DIO_voidSetPin(SEG_7_Pin_b,Low);
					DIO_voidSetPin(SEG_7_Pin_c,Low);
					DIO_voidSetPin(SEG_7_Pin_d,Low);

					break;

		case 2 :
					DIO_voidSetPin(SEG_7_Pin_a,Low);
					DIO_voidSetPin(SEG_7_Pin_b,High);
					DIO_voidSetPin(SEG_7_Pin_c,Low);
					DIO_voidSetPin(SEG_7_Pin_d,Low);

					break;
		case 3 :
					DIO_voidSetPin(SEG_7_Pin_a,High);
					DIO_voidSetPin(SEG_7_Pin_b,High);
					DIO_voidSetPin(SEG_7_Pin_c,Low);
					DIO_voidSetPin(SEG_7_Pin_d,Low);

					break;
		case 4 :
							DIO_voidSetPin(SEG_7_Pin_a,Low);
							DIO_voidSetPin(SEG_7_Pin_b,Low);
							DIO_voidSetPin(SEG_7_Pin_c,High);
							DIO_voidSetPin(SEG_7_Pin_d,Low);

							break;
		case 5 :
							DIO_voidSetPin(SEG_7_Pin_a,High);
							DIO_voidSetPin(SEG_7_Pin_b,Low);
							DIO_voidSetPin(SEG_7_Pin_c,High);
							DIO_voidSetPin(SEG_7_Pin_d,Low);

							break;
		case 6 :
							DIO_voidSetPin(SEG_7_Pin_a,Low);
							DIO_voidSetPin(SEG_7_Pin_b,High);
							DIO_voidSetPin(SEG_7_Pin_c,High);
							DIO_voidSetPin(SEG_7_Pin_d,Low);

							break;
		case 7 :
							DIO_voidSetPin(SEG_7_Pin_a,High);
							DIO_voidSetPin(SEG_7_Pin_b,High);
							DIO_voidSetPin(SEG_7_Pin_c,High);
							DIO_voidSetPin(SEG_7_Pin_d,Low);

							break;
		case 8 :
							DIO_voidSetPin(SEG_7_Pin_a,Low);
							DIO_voidSetPin(SEG_7_Pin_b,Low);
							DIO_voidSetPin(SEG_7_Pin_c,Low);
							DIO_voidSetPin(SEG_7_Pin_d,High);

							break;
		case 9 :
							DIO_voidSetPin(SEG_7_Pin_a,High);
							DIO_voidSetPin(SEG_7_Pin_b,Low);
							DIO_voidSetPin(SEG_7_Pin_c,Low);
							DIO_voidSetPin(SEG_7_Pin_d,High);

							break;

		default:
			break;


		}
	}


#else if (SEG_7_Mode == Cathode_Modee)

#endif
}
void SEG_7_voidSetDot( u8 valu)
	{
		if(valu==High)
		{
			DIO_voidSetPin(SEG_7_Pin_dot,High);
		}
		else if(valu==Low)
		{
					DIO_voidSetPin(SEG_7_Pin_dot,Low);
		}
	}
