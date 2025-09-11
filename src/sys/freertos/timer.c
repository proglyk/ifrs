/*******************************************************************************
  * @file    timer.c
  * @author  Ilia Proniashin, ilyapronyashin23@yandex.ru
  * @version V0.1.0
  * @date    10-September-2025
  * @brief   Implementation of serial device driver
  * @attention The source code is presented as is
  *****************************************************************************/

#include "sys/timer.h"
#include "FreeRTOS.h"
#include "timers.h"

struct user_s {
  timer_cb_ptr  fn_cb;
  void         *pld;
};

struct timer_s {
	xTimerHandle  h;
  struct user_s user;
};

static void timer_tick_intern(xTimerHandle, void *);

/**	----------------------------------------------------------------------------
	* @brief ??? */
int
  timer_create(timer_t *self, timer_cb_ptr fn, void *pld) {
/*----------------------------------------------------------------------------*/
  // TODO 'добавить в аргументы имя и период'
  self->h = xTimerCreate("timer", 10 / portTICK_RATE_MS, pdTRUE, 0,  
    timer_tick_intern, (void *)&(self->user));
  self->user.fn_cb = fn;
  self->user.pld = pld;
  if (!self->h) return -1;
  return 0;
}

/**	----------------------------------------------------------------------------
	* @brief ??? */
void
  timer_start(timer_t *self, int undef) {
/*----------------------------------------------------------------------------*/
  xTimerStart(self->h, 0);
  taskYIELD();
}

/**	----------------------------------------------------------------------------
	* @brief ??? */
static void
  timer_tick_intern(xTimerHandle xTimer, void *arg) {
/*----------------------------------------------------------------------------*/
  struct user_s *user = (struct user_s *)arg;
  user->fn_cb(user->pld);
}

/**	----------------------------------------------------------------------------
	* @brief ??? */
void
  timer_delete(timer_t *self, int undef) {
/*----------------------------------------------------------------------------*/
  xTimerStop(self->h, 0);
  xTimerDelete(self->h, 0);
  taskYIELD();
}