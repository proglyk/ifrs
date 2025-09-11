/**
	******************************************************************************
  * @file    ifrs_serdev_rtos.c
  * @author  Ilia Proniashin, ilyapronyashin23@yandex.ru
  * @version V0.1.0
  * @date    10-September-2025
  * @brief   Implementation of serial device driver
  * @attention The source code is presented as is
  *****************************************************************************/

#include "ifrs/ifrs_serdev.h"
#include "sys/arm/userint.h"
#include "stdbool.h"

static int  serdev__link(serdev_t *);
static int  serdev__init(serdev_t *);
static int  serdev__open(serdev_t *);
static int  serdev__read(serdev_t *, char *, int, int);
static int  serdev__write(serdev_t *, char *, int, int);
static void serdev__nre_de(serdev_t *, bool);
static void serdev__close(serdev_t *);

serdev_t xSerDev = {
  .link   = serdev__link,
  .init   = serdev__init,
  .open   = serdev__open,
  .read   = serdev__read,
  .write  = serdev__write,
  .nre_de = serdev__nre_de,
  .close  = serdev__close
};

/**	----------------------------------------------------------------------------
	* @brief ??? */
static int
  serdev__link(serdev_t *dev) {
/*----------------------------------------------------------------------------*/

	return 0;
}

/**	----------------------------------------------------------------------------
	* @brief ??? */
static int
  serdev__init(serdev_t *dev) {
/*----------------------------------------------------------------------------*/

	return 0;
}

/**	----------------------------------------------------------------------------
	* @brief ??? */
static int
  serdev__open(serdev_t *dev) {
/*----------------------------------------------------------------------------*/

	return 0;
}

/**	----------------------------------------------------------------------------
	* @brief ??? */
static int
  serdev__read(serdev_t *dev, char *buf, int arg1, int arg2) {
/*----------------------------------------------------------------------------*/

	return 0;
}

/**	----------------------------------------------------------------------------
	* @brief ??? */
static int
  serdev__write(serdev_t *dev, char *buf, int arg1, int arg2) {
/*----------------------------------------------------------------------------*/

	return 0;
}

/**	----------------------------------------------------------------------------
	* @brief ??? */
static void
  serdev__nre_de(serdev_t *dev, bool enable) {
/*----------------------------------------------------------------------------*/

	return;
}

/**	----------------------------------------------------------------------------
	* @brief ??? */
static void
  serdev__close(serdev_t *dev) {
/*----------------------------------------------------------------------------*/

	return;
}