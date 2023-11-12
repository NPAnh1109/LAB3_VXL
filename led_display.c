/*
 * led_display.c
 *
 *  Created on: Nov 8, 2023
 *      Author: PC
 */
#include "global.h"
#include "led_display.h"

void display7SEG(int num){
	switch (num){
		case 0:
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, SET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, SET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, SET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, SET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, SET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, SET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, SET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, SET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, SET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, SET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, SET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, SET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, RESET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG_A_GPIO_Port, SEG_A_Pin, RESET);
			HAL_GPIO_WritePin(SEG_B_GPIO_Port, SEG_B_Pin, RESET);
			HAL_GPIO_WritePin(SEG_C_GPIO_Port, SEG_C_Pin, RESET);
			HAL_GPIO_WritePin(SEG_D_GPIO_Port, SEG_D_Pin, RESET);
			HAL_GPIO_WritePin(SEG_E_GPIO_Port, SEG_E_Pin, SET);
			HAL_GPIO_WritePin(SEG_F_GPIO_Port, SEG_F_Pin, RESET);
			HAL_GPIO_WritePin(SEG_G_GPIO_Port, SEG_G_Pin, RESET);
			break;
		default:
			break;
	}
}


void setRED1(){
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
	HAL_GPIO_WritePin(GRN1_GPIO_Port, GRN1_Pin, SET);
	HAL_GPIO_WritePin(YLW1_GPIO_Port, YLW1_Pin, SET);
}
void setRED2(){
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
	HAL_GPIO_WritePin(GRN2_GPIO_Port, GRN2_Pin, SET);
	HAL_GPIO_WritePin(YLW2_GPIO_Port, YLW2_Pin, SET);
}
void setGRN1(){
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
	HAL_GPIO_WritePin(GRN1_GPIO_Port, GRN1_Pin, RESET);
	HAL_GPIO_WritePin(YLW1_GPIO_Port, YLW1_Pin, SET);
}
void setGRN2(){
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
	HAL_GPIO_WritePin(GRN2_GPIO_Port, GRN2_Pin, RESET);
	HAL_GPIO_WritePin(YLW2_GPIO_Port, YLW2_Pin, SET);
}
void setYLW1(){
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
	HAL_GPIO_WritePin(GRN1_GPIO_Port, GRN1_Pin, SET);
	HAL_GPIO_WritePin(YLW1_GPIO_Port, YLW1_Pin, RESET);
}
void setYLW2(){
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
	HAL_GPIO_WritePin(GRN2_GPIO_Port, GRN2_Pin, SET);
	HAL_GPIO_WritePin(YLW2_GPIO_Port, YLW2_Pin, RESET);
}

void set_led(int status){
	switch(status){
	case MAN_RED:
		setRED1();
		setRED2();
		break;
	case MAN_GRN:
		setGRN1();
		setGRN2();
		break;
	case MAN_YLW:
		setYLW1();
		setYLW2();
		break;
	default:
		break;
	}
}

void led_blinky(int status){
	switch(status){
	case INIT:
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		HAL_GPIO_WritePin(GRN1_GPIO_Port, GRN1_Pin, SET);
		HAL_GPIO_WritePin(YLW1_GPIO_Port, YLW1_Pin, SET);
		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		HAL_GPIO_WritePin(GRN2_GPIO_Port, GRN2_Pin, SET);
		HAL_GPIO_WritePin(YLW2_GPIO_Port, YLW2_Pin, SET);
	case MODE2:
		HAL_GPIO_TogglePin(RED1_GPIO_Port, RED1_Pin);
		HAL_GPIO_TogglePin(RED2_GPIO_Port, RED2_Pin);
		break;
	case MODE3:
		HAL_GPIO_TogglePin(GRN1_GPIO_Port, GRN1_Pin);
		HAL_GPIO_TogglePin(GRN2_GPIO_Port, GRN2_Pin);
		break;
	case MODE4:
		HAL_GPIO_TogglePin(YLW1_GPIO_Port, YLW1_Pin);
		HAL_GPIO_TogglePin(YLW2_GPIO_Port, YLW2_Pin);
		break;
	default:
		break;
	}
}
const int MAX_LED = 4;

int led_buffer[4] = {0, 0, 0, 0};
void update7SEG(int *led_index){
	switch (*led_index){
		case 0:
			display7SEG(led_buffer[0]);
  		  	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
  		  	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
 		  	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
  		  	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			break;
		case 1:
			display7SEG(led_buffer[1]);
  		  	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
  		  	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
 		  	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
  		  	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			break;
		case 2:
			display7SEG(led_buffer[2]);
  		  	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
  		  	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
 		  	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
  		  	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			break;
		case 3:
			display7SEG(led_buffer[3]);
  		  	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
  		  	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
 		  	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
  		  	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			break;
		default:
			break;
	}
	if (*led_index >= 3) *led_index = 0;
	else *led_index = *led_index + 1;
}

void updateBufferMode1(int status){
	switch(status){
	case RED1_GRN2:
		led_buffer[0] = RED - counter0;
		led_buffer[2] = led_buffer[0];
		led_buffer[1] = GREEN - counter0;
		led_buffer[3] = led_buffer[1];
		counter0++;
		break;

	case RED1_YLW2:
		led_buffer[0] = RED - counter0;
		led_buffer[2] = led_buffer[0];
		led_buffer[1] = YLW - counter1;
		led_buffer[3] = led_buffer[1];
		counter0++;
		counter1++;

		break;

	case GRN1_RED2:
		led_buffer[0] = GREEN - counter2;  // 5
		led_buffer[2] = led_buffer[0];
		led_buffer[1] = RED - counter2; // 3
		led_buffer[3] = led_buffer[1];
		counter2++;
		break;
	case YLW1_RED2:
		led_buffer[1] = RED - counter2; // 3
		led_buffer[3] = led_buffer[1];
		led_buffer[0] = YLW - counter3;  // 5
		led_buffer[2] = led_buffer[0];
		counter2++;
		counter3++;
		if (led_buffer[0] <= 1) {
			counter0 = 0;
			counter1 = 0;
			counter2 = 0;
			counter3 = 0;
		}
		break;
	default:
		break;
	}
}

void updateBufferMode2(){
	led_buffer[0] = 2;
	led_buffer[1] = 2;
	led_buffer[2] = RED/10;
	led_buffer[3] = RED % 10;
}

void updateBufferMode3(){
	led_buffer[0] = 3;
	led_buffer[1] = 3;
	led_buffer[2] = YLW/10;
	led_buffer[3] = YLW % 10;
}

void updateBufferMode4(){
	led_buffer[0] = 4;
	led_buffer[1] = 4;
	led_buffer[2] = GREEN/10;
	led_buffer[3] = GREEN % 10;
}

