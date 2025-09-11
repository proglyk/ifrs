/**
	******************************************************************************
  * @file    ifrs_serdev.h
  * @author  Ilia Proniashin, ilyapronyashin23@yandex.ru
  * @version V0.1.0
  * @date    10-September-2025
  * @brief   Implementation of serial device driver
  * @attention The source code is presented as is
  *****************************************************************************/
  
#ifndef  _SERDEV_H_
#define  _SERDEV_H_

//#include "sys/arm/userint.h"
#include "stdbool.h"

typedef struct serdev serdev_t;
struct serdev
{
	//int socket;
  int  (*link)  (serdev_t*);
  int  (*init)  (serdev_t*);
  int  (*open)  (serdev_t*);
	int  (*read)  (serdev_t*, char *, int, int);
	int  (*write) (serdev_t*, char *, int, int);
  void (*nre_de) (serdev_t*, bool);
  void (*close) (serdev_t*);
};

#endif //_SERDEV_IF_H_