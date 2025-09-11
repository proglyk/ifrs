// сейчас доступно принимать байты только по 1-ому

// это обработчик прерывания - isr context
// только для stm32
void irq_uart(void) {
  UART_IRQHandler(ifrs->serdev);
}

// это обратная связь обработчика - приходит готовый массив либо отдельный байт
void HAL_UART_RxCpltCallback(UART_HandleTypeDef * huart) {
  if(huart->Instance == pxIfRs->pxSciRegs->Instance) {
		ifrs->serdev->recv(/* pxIfRs, inbox[0] */);
	}
}

int main() {
  
  // запустили
  
}




// для STM32F407

static char inbox;

void RS485SCI_IRQHandler(void) {
	HAL_UART_IRQHandler(pxIfRs->pxSciRegs);
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef * huart) {
  // нужен только uart для ifrs
	if(huart->Instance == pxIfRs->pxSciRegs->Instance) {
		ifrs->serdev->recv(); //IFRS_Receive(pxIfRs, inbox);
	}
	// Для всех случаев прин¤того байта вновь включить UART в работу
	HAL_UART_Receive_IT(huart, (uint8_t *)&inbox, 1);
}

// для AM3335

