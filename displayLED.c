/*
 * led_display.c
 *
 *  Created on: Nov 8, 2023
 *      Author: PC
 */
#include "displayLED.h"
#include "global.h"

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
			HAL_GPIO_WritePin(GRN1_GPIO_Port, GRN1_Pin, SET);
			HAL_GPIO_WritePin(YLW1_GPIO_Port, YLW1_Pin, SET);
			HAL_GPIO_WritePin(GRN2_GPIO_Port, GRN2_Pin, SET);
			HAL_GPIO_WritePin(YLW2_GPIO_Port, YLW2_Pin, SET);
			break;
		case MODE3:
			HAL_GPIO_TogglePin(YLW1_GPIO_Port, YLW1_Pin);
			HAL_GPIO_TogglePin(YLW2_GPIO_Port, YLW2_Pin);
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
			HAL_GPIO_WritePin(GRN1_GPIO_Port, GRN1_Pin, SET);
			HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
			HAL_GPIO_WritePin(GRN2_GPIO_Port, GRN2_Pin, SET);
			break;
		case MODE4:
			HAL_GPIO_TogglePin(GRN1_GPIO_Port, GRN1_Pin);
			HAL_GPIO_TogglePin(GRN2_GPIO_Port, GRN2_Pin);
			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
			HAL_GPIO_WritePin(YLW1_GPIO_Port, YLW1_Pin, SET);
			HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
			HAL_GPIO_WritePin(YLW2_GPIO_Port, YLW2_Pin, SET);
			break;
		default:
			break;
		}
}

void clearALLled(){
	HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GRN1_GPIO_Port, GRN1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(YLW1_GPIO_Port, YLW1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GRN2_GPIO_Port, GRN2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(YLW2_GPIO_Port, YLW2_Pin, GPIO_PIN_RESET);
}

const int MAX_LED = 4;
int led_buffer[4] = {0, 0, 0, 0};
void update7SEG(int led_index){
	switch (led_index){
		case 0:
//			display7SEG(led_buffer[0]);
  		  	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
  		  	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
 		  	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
  		  	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			break;
		case 1:
//			display7SEG(led_buffer[1]);
  		  	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
  		  	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
 		  	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
  		  	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			break;
		case 2:
//			display7SEG(led_buffer[2]);
  		  	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
  		  	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
 		  	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
  		  	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
			break;
		case 3:
//			display7SEG(led_buffer[3]);
  		  	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
  		  	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
 		  	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
  		  	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
			break;
		default:
			break;
	}
	display7SEG(led_buffer[led_index]);
}

void updateBufferMode1(int status){
	switch(status){
	case RED1_GRN2:
		led_buffer[0] = (RED - cnt0) / 10;
		led_buffer[1] = (RED - cnt0) % 10;
		led_buffer[2] = (GRN - cnt0) / 10;
		led_buffer[3] = (GRN - cnt0) % 10;
		cnt0++;
		break;

	case RED1_YLW2:
		led_buffer[0] = (RED - GRN - cnt1) / 10;
		led_buffer[1] = (RED - GRN - cnt1) % 10;
		led_buffer[2] = (YLW - cnt1) / 10;
		led_buffer[3] = (YLW - cnt1) % 10;
//		cnt0++;
		cnt1++;

		break;

	case GRN1_RED2:
		led_buffer[0] = (GRN - cnt2) / 10 ;  // 5
		led_buffer[1] = (GRN - cnt2) % 10;
		led_buffer[2] = (RED - cnt2) / 10; // 3
		led_buffer[3] = (RED - cnt2) % 10;
		cnt2++;
		break;
	case YLW1_RED2:
		led_buffer[0] = (YLW - cnt3) / 10; // 3
		led_buffer[1] = (YLW - cnt3) % 10;
		led_buffer[2] = (RED - GRN - cnt3) / 10;  // 5
		led_buffer[3] = (RED - GRN - cnt3) % 10;
		cnt3++;
		if (led_buffer[3] <= 1) {
			cnt0 = 0;
			cnt1 = 0;
			cnt2 = 0;
			cnt3 = 0;
		}
		break;
	default:
		break;
	}
}

void updateBufferMode2(){
	led_buffer[0] = 0;
	led_buffer[1] = 2;
	led_buffer[2] = RED/10;
	led_buffer[3] = RED % 10;
}

void updateBufferMode3(){
	led_buffer[0] = 0;
	led_buffer[1] = 3;
	led_buffer[2] = YLW/10;
	led_buffer[3] = YLW % 10;
}

void updateBufferMode4(){
	led_buffer[0] = 0;
	led_buffer[1] = 4;
	led_buffer[2] = GRN/10;
	led_buffer[3] = GRN % 10;
}

void led_scanned(){
	  switch (status){
	  case AUTO_RED:
		  led_blinky(MODE2);
		  break;
	  case MAN_RED:
		  led_blinky(MODE2);
		  break;
	  case AUTO_YLW:
		  led_blinky(MODE3);
		  break;
	  case MAN_YLW:
		  led_blinky(MODE3);
		  break;
	  case AUTO_GRN:
		  led_blinky(MODE4);
		  break;
	  case MAN_GRN:
		  led_blinky(MODE4);
		  break;
	  }
}

void dis7SEG(){
	while(1){
		if (led_index >= MAX_LED) led_index = 0;
		update7SEG(led_index++);
	}
}

void auto7SEG(){
	if (led_index >= MAX_LED) led_index = 0;
		update7SEG(led_index++);
}
