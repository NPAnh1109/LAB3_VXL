/*
 * led_display.h
 *
 *  Created on: Nov 8, 2023
 *      Author: PC
 */

#ifndef INC_LED_DISPLAY_H_
#define INC_LED_DISPLAY_H_

void display7SED();
void setRED1();
void setRED2();
void setGRN1();
void setGRN2();
void setYLW1();
void setYLW2();

void set_led();

void update7SEG();
void updateBufferMode1();
void updateBufferMode2();
void updateBufferMode3();
void updateBufferMode4();
void led_blinky();
#endif /* INC_LED_DISPLAY_H_ */
