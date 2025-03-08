/*
 * lcd.h
 *
 *  Created on: Dec 2, 2024
 *      Author: m.archipov
 */
#include "main.h"
#ifndef INC_LCD_H_
#define INC_LCD_H_
//------------------------------------------------
#define d4_set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET)
#define d5_set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_SET)
#define d6_set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_SET)
#define d7_set() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_SET)
#define d4_reset() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_RESET)
#define d5_reset() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, GPIO_PIN_RESET)
#define d6_reset() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, GPIO_PIN_RESET)
#define d7_reset() HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, GPIO_PIN_RESET)
#define e1 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_SET)  //установка линии Е в 1
#define e0 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, GPIO_PIN_RESET) //установка линии Е в 0
#define rs1 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_SET) //установка линии RS в 1
#define rs0 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, GPIO_PIN_RESET) //установка линии RS в 0
//------------------------------------------------
void LCD_ini(void);
void LCD_Clear(void);
void LCD_SendChar(char ch);
void LCD_String(char* st);
void LCD_SetPos(uint8_t x, uint8_t y);
//------------------------------------------------


#endif /* INC_LCD_H_ */
