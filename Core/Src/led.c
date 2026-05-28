#include "led.h"

void LED_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  __HAL_RCC_GPIOC_CLK_ENABLE();

  HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, GPIO_PIN_SET); /* LED OFF on start */
  GPIO_InitStruct.Pin   = LED_Pin;
  GPIO_InitStruct.Mode  = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull  = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LED_GPIO_Port, &GPIO_InitStruct);
}

/* Non-blocking, gọi liên tục trong while(1). Toggle mỗi 500ms = 1Hz */
void LED_Blink_1Hz(void)
{
  static uint32_t lastTick = 0;

  if (HAL_GetTick() - lastTick < 500)
    return;

  lastTick = HAL_GetTick();
  HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
}
