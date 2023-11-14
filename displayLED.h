/*
 * led_display.h
 *
 *  Created on: Nov 8, 2023
 *      Author: PC
 */

#ifndef INC_DISPLAYLED_H_
#define INC_DISPLAYLED_H_

void display7SED();
void setRED1();
void setRED2();
void setGRN1();
void setGRN2();
void setYLW1();
void setYLW2();

void set_led();

void clearALLled();
void update7SEG();
void updateBufferMode1();
void updateBufferMode2();
void updateBufferMode3();
void updateBufferMode4();
void led_blinky();
void led_scanned();
void auto7SEG();
void dis7SEG();
#endif /* INC_DISPLAYLED_H_ */
