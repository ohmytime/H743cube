
#ifndef _LED_H
#define _LED_H

#include "main.h"

/* 直接操作寄存器的方法控制IO */
 #define digitalHi(p,i)         {p->BSRR=i;}                    //设置为高电平
 #define digitalLo(p,i)         {p->BSRR=(uint32_t)i << 16;}    //输出低电平
 #define digitalToggle(p,i)     {p->ODR ^=i;}                   //输出反转状态

 /* 定义控制IO的宏 */
 #define LED1_TOGGLE     digitalToggle(LRGB_R_GPIO_Port,LRGB_R_Pin)
 #define LED1_OFF        digitalHi(LRGB_R_GPIO_Port,LRGB_R_Pin)
 #define LED1_ON         digitalLo(LRGB_R_GPIO_Port,LRGB_R_Pin)

 #define LED2_TOGGLE     digitalToggle(LRGB_G_GPIO_Port,LRGB_G_Pin)
 #define LED2_OFF        digitalHi(LRGB_G_GPIO_Port,LRGB_G_Pin)
 #define LED2_ON         digitalLo(LRGB_G_GPIO_Port,LRGB_G_Pin)

 #define LED3_TOGGLE     digitalToggle(LRGB_B_GPIO_Port,LRGB_B_Pin)
 #define LED3_OFF        digitalHi(LRGB_B_GPIO_Port,LRGB_B_Pin)
 #define LED3_ON         digitalLo(LRGB_B_GPIO_Port,LRGB_B_Pin)

//  #define LED4_TOGGLE     digitalToggle(LED4_GPIO_PORT,LED4_PIN)
//  #define LED4_OFF        digitalHi(LED4_GPIO_PORT,LED4_PIN)
//  #define LED4_ON         digitalLo(LED4_GPIO_PORT,LED4_PIN)

 /* 基本混色，后面高级用法使用PWM可混出全彩颜色,且效果更好 */

// LED开关宏定义
#define RED_ON                          HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_RESET);
#define RED_OFF                         HAL_GPIO_WritePin(LED_R_GPIO_Port, LED_R_Pin, GPIO_PIN_SET);

#define GREEN_ON                        HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_RESET);
#define GREEN_OFF                       HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, GPIO_PIN_SET);

#define BLUE_ON                         HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_RESET);
#define BLUE_OFF                        HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, GPIO_PIN_SET);
#define DELAY_TIME 1000
 //红
 #define LED_RED  \
        	LED1_ON;\
            LED2_OFF;\
            LED3_OFF

 //绿
 #define LED_GREEN   \
            LED1_OFF;\
        	LED2_ON;\
            LED3_OFF

 //蓝
 #define LED_BLUE \
            LED1_OFF;\
            LED2_OFF;\
            LED3_ON


 //黄(红+绿)
 #define LED_YELLOW  \
            LED1_ON;\
            LED2_ON;\
            LED3_OFF


void led_test();

#endif