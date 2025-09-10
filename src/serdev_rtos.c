#include "serdev.h"

static int  serdev__link(serdev_t *);
static int  serdev__init(serdev_t *);
static int  serdev__open(serdev_t *);
static int  serdev__read(serdev_t *, u8_t *, int, int);
static int  serdev__write(serdev_t *, u8_t *, int, int);
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
  serdev__read(serdev_t *dev, u8_t *, int, int) {
/*----------------------------------------------------------------------------*/

	return 0;
}

/**	----------------------------------------------------------------------------
	* @brief ??? */
static int
  serdev__write(serdev_t *dev, u8_t *, int, int) {
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