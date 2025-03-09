#include "led.h"

void led_test() {
  RED_ON;
  HAL_Delay(DELAY_TIME);
  RED_OFF;
  HAL_Delay(DELAY_TIME);
  GREEN_ON;
  HAL_Delay(DELAY_TIME);
  GREEN_OFF;
  HAL_Delay(DELAY_TIME);
  BLUE_ON;
  HAL_Delay(DELAY_TIME);
  BLUE_OFF;
  HAL_Delay(DELAY_TIME);
}