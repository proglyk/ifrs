/*******************************************************************************
  * @file    thread.c
  * @author  Ilia Proniashin, ilyapronyashin23@yandex.ru
  * @version V0.1.0
  * @date    10-September-2025
  * @brief   Implementation of serial device driver
  * @attention The source code is presented as is
  *****************************************************************************/

#include "sys/thread.h"
#include "FreeRTOS.h"
#include "task.h"

struct thread_s {
	TaskHandle_t h;
};

/**	----------------------------------------------------------------------------
	* @brief ??? */
int
  thread_start(thread_t *self, void (*fn)(void *), void *pld) {
/*----------------------------------------------------------------------------*/
  
	return 0;
}

/**	----------------------------------------------------------------------------
	* @brief ??? */
int
  thread_delete(thread_t *self) {
/*----------------------------------------------------------------------------*/
  
	return 0;
}
