#ifndef __LED_H
#define __LED_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f1xx_hal.h"

#define LED_Pin       GPIO_PIN_13
#define LED_GPIO_Port GPIOC

void LED_Init(void);
void LED_Blink_1Hz(void);

#ifdef __cplusplus
}
#endif

#endif /* __LED_H */
