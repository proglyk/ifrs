/*******************************************************************************
  * @file    mutex.h
  * @author  Ilia Proniashin, ilyapronyashin23@yandex.ru
  * @version V0.1.0
  * @date    10-September-2025
  * @brief   Implementation of serial device driver
  * @attention The source code is presented as is
  *****************************************************************************/
  
  #ifndef  _MUTEX_H_
  #define  _MUTEX_H_
  
  typedef struct mutex_s mutex_t;

  void mutex_init(mutex_t *);
  void mutex_delete(mutex_t *);
  int  mutex_lock(mutex_t *);
  int  mutex_unlock(mutex_t *);
  
  #endif //_MUTEX_H_