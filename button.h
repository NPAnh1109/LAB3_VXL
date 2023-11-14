/*
 * button.h
 *
 *  Created on: Nov 8, 2023
 *      Author: PC
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();

void getKeyInputFor3Button();

void getKeyInput1();
void getKeyInput2();
void getKeyInput3();


#endif /* INC_BUTTON_H_ */

