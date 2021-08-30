/*
 * LED_INIT.h
 *
 *  Created on: Aug 14, 2021
 *      Author: Abdelaziz
 */

#ifndef LED_DRIVER_LED_INIT_H_
#define LED_DRIVER_LED_INIT_H_

void LED_voidInit(void);
void LED_voidLedOn(u8 led_num);
void LED_voidLedOff(u8 led_num);
void LED_voidLedToggle(u8 led_num);

#define LED_0 0
#define LED_1 1
#define LED_2 2
#endif /* LED_DRIVER_LED_INIT_H_ */
