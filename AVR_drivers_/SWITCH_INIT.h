/*
 * SWITCH_INIT.h
 *
 *  Created on: Aug 15, 2021
 *      Author: Abdelaziz
 */

#ifndef SWITCH_INIT_H_
#define SWITCH_INIT_H_

void SWITCH_voidInit(void);

u8 SWITCH_u8IsPressed(u8 Switch_num); // return 1 if pressed or 0 if not

#define SWITCH_0 0
#define SWITCH_1 1
#define SWITCH_2 2

#endif /* SWITCH_INIT_H_ */
