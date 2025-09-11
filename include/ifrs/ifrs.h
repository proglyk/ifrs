/*******************************************************************************
  * @file    ifrs.h
  * @author  Ilia Proniashin, ilyapronyashin23@yandex.ru
  * @version V0.1.0
  * @date    10-September-2025
  * @brief   Implementation of serial device driver
  * @attention The source code is presented as is
  *****************************************************************************/
  
#ifndef  _IFRS_H_
#define  _IFRS_H_

#include "ifrs_types.h"
#include "ifrs/ifrs_serdev.h"

typedef struct ifrs_s ifrs_t;

ifrs_t *ifrs__create(void);
int     ifrs__init(ifrs_t *, serdev_t *);
void    ifrs__delete(ifrs_t *);

#endif //_IFRS_H_