#ifndef __SPI_H
#define __SPI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f1xx_hal.h"

#define SPI1_CS_Pin       GPIO_PIN_4
#define SPI1_CS_GPIO_Port GPIOA

extern SPI_HandleTypeDef hspi1;
extern uint8_t ledState;

void SPI_Init(void);
void SPI_SendLedState(void);

#ifdef __cplusplus
}
#endif

#endif /* __SPI_H */
