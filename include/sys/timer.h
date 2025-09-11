/*******************************************************************************
  * @file    timer.h
  * @author  Ilia Proniashin, ilyapronyashin23@yandex.ru
  * @version V0.1.0
  * @date    10-September-2025
  * @brief   Implementation of serial device driver
  * @attention The source code is presented as is
  *****************************************************************************/
  
  #ifndef  _TIMER_H_
  #define  _TIMER_H_
  
  typedef struct timer_s timer_t;
  
  typedef void (*timer_cb_ptr)(void *);
  
  int  timer_create(timer_t *, timer_cb_ptr, void *);
  void timer_start(timer_t *, int);
  void timer_delete(timer_t *, int);
  
  #endif //_TIMER_H_