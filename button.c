/*
 * button.c
 *
 *  Created on: Nov 8, 2023
 *      Author: PC
 */

#include "button.h"
#include "main.h"

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int KeyReg01 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;
int KeyReg21 = NORMAL_STATE;
int KeyReg31 = NORMAL_STATE;
int TimerForKeyPress1 = 500;

int KeyReg02 = NORMAL_STATE;
int KeyReg12 = NORMAL_STATE;
int KeyReg22 = NORMAL_STATE;
int KeyReg32 = NORMAL_STATE;
int TimerForKeyPress2 = 500;

int KeyReg03 = NORMAL_STATE;
int KeyReg13 = NORMAL_STATE;
int KeyReg23 = NORMAL_STATE;
int KeyReg33 = NORMAL_STATE;
int TimerForKeyPress3 = 500;


int isButton1Pressed(){
	if (button1_flag == 1) {
		button1_flag = 0;
		return 1;
	}
	return 0;
}

int isButton2Pressed(){
	if (button2_flag == 1) {
		button2_flag = 0;
		return 1;
	}
	return 0;
}

int isButton3Pressed(){
	if (button3_flag == 1) {
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess1(){
	button1_flag = 1;
}

void subKeyProcess2(){
	button2_flag = 1;
}
void subKeyProcess3(){
	button3_flag = 1;
}

void getKeyInput1(){
	KeyReg01 = KeyReg11;
	KeyReg11 = KeyReg21;
	KeyReg21 = HAL_GPIO_ReadPin(BTN1_GPIO_Port,BTN1_Pin);
	if ((KeyReg01 == KeyReg11) && (KeyReg11 == KeyReg21)){
		if (KeyReg31 != KeyReg21){
			KeyReg31 = KeyReg21;
			if (KeyReg21 == PRESSED_STATE){
				subKeyProcess1();
			}
		}else{
			TimerForKeyPress1--;
			if (TimerForKeyPress1 == 0){
				TimerForKeyPress1 = 200;
				if (KeyReg21 == PRESSED_STATE){
					subKeyProcess1();
				}
			}
		}
	}
}

void getKeyInput2(){
	KeyReg02 = KeyReg12;
	KeyReg12 = KeyReg22;
	KeyReg22 = HAL_GPIO_ReadPin(BTN2_GPIO_Port,BTN2_Pin);
	if ( (KeyReg02 == KeyReg12) && (KeyReg12 == KeyReg22) ){
		if (KeyReg32 != KeyReg22){
			KeyReg32 = KeyReg22;
			if (KeyReg22 == PRESSED_STATE){
				subKeyProcess2();
			}
		}else{
			TimerForKeyPress2--;
			if (TimerForKeyPress2 == 0){
				TimerForKeyPress2 = 200;
				if (KeyReg22 == PRESSED_STATE){
					subKeyProcess2();
				}
			}
		}
	}
}

void getKeyInput3(){
	KeyReg03 = KeyReg13;
	KeyReg13 = KeyReg23;
	KeyReg23 = HAL_GPIO_ReadPin(BTN3_GPIO_Port,BTN3_Pin);
	if ( (KeyReg03 == KeyReg13) && (KeyReg13 == KeyReg23) ){
		if (KeyReg33 != KeyReg23){
			KeyReg33 = KeyReg23;
			if (KeyReg23 == PRESSED_STATE){
				subKeyProcess3();
			}
		}else{
			TimerForKeyPress3--;
			if (TimerForKeyPress3 == 0) {
				TimerForKeyPress3 = 200;
				if (KeyReg23 == PRESSED_STATE){
					subKeyProcess3();
				}
			}
		}
	}
}

void getKeyInputFor3Button(){
	getKeyInput1();
	getKeyInput2();
	getKeyInput3();
}
