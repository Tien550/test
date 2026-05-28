#ifndef __UART_H
#define __UART_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32f1xx_hal.h"

extern UART_HandleTypeDef huart1;
extern uint8_t ledState;

void UART_Init(void);
void UART_SendLedState(void);

#ifdef __cplusplus
}
#endif

#endif /* __UART_H */
