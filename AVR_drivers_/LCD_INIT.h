/*
 * LCD_INIT.h
 *
 *  Created on: Aug 28, 2021
 *      Author: Abdelaziz
 */

#ifndef LCD_INIT_H_
#define LCD_INIT_H_

void LCD_voidInit(void);
void LCD_voidWriteData (u8 data);
void LCD_voidWritecommand (u8 command);
void LCD_voidEnable (void);
void LCD_voidClearScreen (void);
void LCD_voidReturnHome (void);
void LCD_voidGoToXY (u8 x, u8 y);

void LCD_voidWriteString (u8 *str);
void LCD_voidWriteVariable (u16 variable);




#endif /* LCD_INIT_H_ */
