/*******************************************************************************
  * @file    ifrs.c
  * @author  Ilia Proniashin, ilyapronyashin23@yandex.ru
  * @version V0.1.0
  * @date    10-September-2025
  * @brief   Implementation of serial device driver
  * @attention The source code is presented as is
  *****************************************************************************/

#include "ifrs/ifrs.h"
#include "stdlib.h"

struct ifrs_s {
  // были в старой версии
	//Mode      eMode;      /* Режим ожидания нового байта */
  u32_t     ulCounter;  /* Счетчик принятых байт */
  cmd_t     usCmd;      // Команда управления
  // были статичными
  u8_t      page;
  u8_t      ds_select;
  subsprm_t subsprm;
  outdata_t outdata;
  // low level
  serdev_t *serdev;
};

/**	----------------------------------------------------------------------------
	* @brief Main structure's (named as 'self') constructor */
ifrs_t *
  ifrs__create(void) {
/*----------------------------------------------------------------------------*/
	// Self creating
  ifrs_t *self = NULL;//calloc(1, sizeof(struct ifrs_s));
  if (!self) return NULL;
  
  // Self configurating
  // ...

  return self;
}

/**	----------------------------------------------------------------------------
	* @brief Main structure's (named as 'self') constructor */
int
  ifrs__init(ifrs_t *self, serdev_t *dev) {
/*----------------------------------------------------------------------------*/
  self->serdev = dev;

  return 0;
}

/**	----------------------------------------------------------------------------
	* @brief Main structure's destructor */
void
  ifrs__delete(ifrs_t *self) {
/*----------------------------------------------------------------------------*/
	if (self) {
    free(self);
    self = NULL;
  }
}

/**	----------------------------------------------------------------------------
	* @brief Функция обновления полей подписок
	* @param dataset: Номер текущего датасета посылки.
	* @param cargpage: Номер текущей страницы каретки.
	* @param ptr: Указатель на структуру со значениями из посылки.
	* @retval none: Нет */
s32_t
  ifrs__input(ifrs_t *self) {
/*----------------------------------------------------------------------------*/
	return 0;
}