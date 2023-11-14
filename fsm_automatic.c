/*
 * fsm_automatic.c
 *
 *  Created on: Nov 8, 2023
 *      Author: PC
 */
#include "displayLED.h"
#include "fsm_automatic.h"
#include "global.h"

int GRN = 3;
int RED = 5;
int YLW = 2;
int led_index = 0;
int cnt0 = 0;
int cnt1 = 0;
int cnt2 = 0;
int cnt3 = 0;

void fsm_automatic_run(){
	switch(status){
	case INIT:
		status = MODE1;
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GRN1_GPIO_Port, GRN1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(YLW1_GPIO_Port, YLW1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GRN2_GPIO_Port, GRN2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(YLW2_GPIO_Port, YLW2_Pin, GPIO_PIN_RESET);
		break;

	case MODE1:
		status = RED1_GRN2;
		setTimer0(GRN * 1000);
		setTimer1(10);
		setTimer2(10);
		break;
	case RED1_GRN2:
		setRED1();
		setGRN2();
		if (timer0_flag == 1){
			status = RED1_YLW2;
			setTimer0(YLW * 1000);
		}
		if (timer1_flag == 1){
			updateBufferMode1(status);
			setTimer1(1000);
		}
		if (timer2_flag == 1){
			auto7SEG();
			setTimer2(100);
		}
		if (isButton1Pressed() == 1) status = MODE2;
		break;

	case RED1_YLW2:
		setRED1();
		setYLW2();
		if (timer0_flag == 1){
			status = GRN1_RED2;
			setTimer0(GRN * 1000);
		}
		if (timer1_flag == 1){
			setTimer1(1000);
			updateBufferMode1(status);
		}
		if (timer2_flag == 1){
			auto7SEG();
			setTimer2(100);
		}
		if (isButton1Pressed() == 1) status = MODE2;
		break;

	case GRN1_RED2:
		setGRN1();
		setRED2();
		if (timer0_flag == 1){
			status = YLW1_RED2;
			setTimer0(YLW * 1000);
		}
		if (timer1_flag == 1){
			updateBufferMode1(status);
			setTimer1(1000);
		}
		if (timer2_flag == 1){
			setTimer2(100);
			auto7SEG();
		}
		if (isButton1Pressed() == 1) status = MODE2;
		break;

	case YLW1_RED2:
		setYLW1();
		setRED2();
		if (timer0_flag == 1){
			status = RED1_GRN2;
			setTimer0(GRN * 1000);
		}
		if (timer1_flag == 1){
			setTimer1(1000);
			updateBufferMode1(status);
		}
		if (timer2_flag == 1){
			setTimer2(100);
			auto7SEG();
		}
		if (isButton1Pressed() == 1) status = MODE2;
		break;

	default:
		break;
	}
}

