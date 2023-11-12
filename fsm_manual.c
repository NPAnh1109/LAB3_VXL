/*
 * fsm_manual.c
 *
 *  Created on: Nov 8, 2023
 *      Author: PC
 */

#include "fsm_manual.h"
#include "global.h"
#include "led_display.h"

void fsm_manual_run(){
	switch(status){
	case MODE2:

		set_led(MAN_RED);
		led_index = 0;

		updateBufferMode2();
		update7SEG(led_index);

		setTimer2(500);
		setTimer3(500);

		clearTimer0();
		clearTimer1();

		status = AUTO_RED;

		break;

	case AUTO_RED:
		if (timer3_flag == 1){
			setTimer3(500);
			set_led(MAN_RED);
		}
		if (timer2_flag == 1){
			setTimer2(500);
			updateBufferMode2();
			update7SEG(led_index);


		}
		if (isButton1Pressed() == 1){
			status = MODE3;
		}

		if (isButton2Pressed() == 1){
			status = MAN_RED;

		}
		break;

	case MAN_RED:
		if (timer3_flag == 1){
			setTimer3(500);
			set_led(MAN_RED);
		}
		if (timer2_flag == 1){
			setTimer2(500);
			updateBufferMode2();
			update7SEG(led_index);

		}
		if (isButton2Pressed() == 1){
			if (RED >= 99) RED = YLW + 1;
			else RED++;
		}
		if (isButton3Pressed() == 1){
			status = AUTO_RED;
			GREEN = RED - YLW;
		}
		break;
	case MODE3:
		set_led(MAN_YLW);

		led_index = 0;
		updateBufferMode2();
		update7SEG(led_index);

		setTimer2(500);
		setTimer3(500);

		clearTimer0();
		clearTimer1();

		status = AUTO_YLW;
		break;

	case AUTO_YLW:
		if (timer3_flag == 1){
			setTimer3(500);
			set_led(MAN_YLW);
		}

		if (timer2_flag == 1){
			setTimer2(500);
			updateBufferMode3();
			update7SEG(led_index);

		}

		if (isButton1Pressed() == 1){
			status = MODE4;
		}

		if (isButton2Pressed() == 1){
			status = MAN_YLW;

		}
		break;

	case MAN_YLW:
		if (timer3_flag == 1){
			setTimer3(500);
			set_led(MAN_YLW);
		}

		if (timer2_flag == 1){
			setTimer2(500);
			updateBufferMode3();
			update7SEG(led_index);

		}

		if (isButton2Pressed() == 1){
			if (YLW >= 99) YLW = 1;
			else YLW++;
		}

		if (isButton3Pressed() == 1) {
			status = AUTO_YLW;
			if (RED <= YLW) RED = YLW + 1;
			GREEN = RED - YLW;
		}
		break;

	case MODE4:
		set_led(MAN_GRN);

		led_index = 0;
		updateBufferMode2();
		update7SEG(led_index);

		setTimer2(500);
		setTimer3(500);
		clearTimer0();
		clearTimer1();

		status = AUTO_GRN;
		break;

	case AUTO_GRN:
		if (timer3_flag == 1){
			setTimer3(500);
			set_led(MAN_GRN);
		}

		if (timer2_flag == 1){
			setTimer2(500);
			updateBufferMode4();
			update7SEG(led_index);

		}

		if (isButton1Pressed() == 1){
			status = MODE1;
		}

		if (isButton2Pressed() == 1){
			status = MAN_GRN;

		}

		break;
	case MAN_GRN:
		if (timer3_flag == 1){
			setTimer3(500);
			set_led(MAN_GRN);
		}
		if (timer2_flag == 1){
			setTimer2(500);
			updateBufferMode4();
			update7SEG(led_index);

		}
		if (isButton2Pressed() == 1){
			if (GREEN >= 99) {
				GREEN = 1;
			}
			else GREEN++;

		}
		if (isButton3Pressed() == 1){
			status = AUTO_GRN;
			RED = GREEN + YLW;
		}
		break;
	default:
		break;
	}
}
