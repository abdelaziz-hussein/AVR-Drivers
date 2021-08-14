/*
 * Bit_Math.h
 *
 *  Created on: Aug 12, 2021
 *      Author: Abdelaziz
 *      this header file contain all macro for Bit Processes in variable
 */

#ifndef DIO_DRIVER_BIT_MATH_H_
#define DIO_DRIVER_BIT_MATH_H_

#define SetBit(num,bit) 	(num)|=(1<<bit)
#define ClrBit(num,bit) 	(num)&=(~(1<<bit))
#define ReadBit(num,bit) 	(((num)>>(bit)) & (0x01))
#define ToggleBit(num,bit)	(num)^=(1<<bit)

#define ConcHelp(B7,B6,B5,B4,B3,B2,B1,B0) 0b##B7##B6##B5##B4##B3##B2##B1##B0
#define ConcBit(B7,B6,B5,B4,B3,B2,B1,B0) ConcHelp(B7,B6,B5,B4,B3,B2,B1,B0)

#endif /* DIO_DRIVER_BIT_MATH_H_ */
