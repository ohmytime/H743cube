#include <stdio.h>
#include "led.h"

void led_test() {
  RED_ON;
  printf("led red on \r\n");
  HAL_Delay(DELAY_TIME);
  RED_OFF;
  HAL_Delay(DELAY_TIME);
  GREEN_ON;
  printf("led green on \r\n");
  HAL_Delay(DELAY_TIME);
  GREEN_OFF;
  HAL_Delay(DELAY_TIME);
  BLUE_ON;
  printf("led blue on \r\n");
  HAL_Delay(DELAY_TIME);
  BLUE_OFF;
  HAL_Delay(DELAY_TIME);
}