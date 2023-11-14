/*
 * global.h
 *
 *  Created on: Nov 8, 2023
 *      Author: PC
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "displayLED.h"
#include "software_timer.h"
#include "button.h"
#include "main.h"
#include "fsm_automatic.h"
#include "fsm_manual.h"

#define INIT		1
#define RED1_GRN2	2
#define RED1_YLW2	3
#define GRN1_RED2	4
#define YLW1_RED2	5

#define MODE1		6
#define MODE2		7
#define MODE3		8
#define MODE4		9

#define MAN_RED 	12
#define MAN_GRN		13
#define MAN_YLW		14

#define AUTO_RED	15
#define AUTO_GRN	16
#define AUTO_YLW	17

extern int status;
extern int GRN;
extern int RED;
extern int YLW;
extern int led_buffer[4];
extern int cnt0;
extern int cnt1;
extern int cnt2;
extern int cnt3;
extern int cnt4;
extern int led_index;
#endif /* INC_GLOBAL_H_ */

