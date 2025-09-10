/**
	******************************************************************************
  * @file    ifrs.h
  * @author  Ilia Proniashin, ilyapronyashin23@yandex.ru
  * @version V0.1.0
  * @date    10-September-2025
  * @brief   Implementation of serial device driver
  * @attention The source code is presented as is
  *****************************************************************************/
  
#ifndef  _IFRS_H_
#define  _IFRS_H_

typedef struct subsprm_s subsprm_t;
typedef struct cargvalue_s cargvalue_t;
typedef struct outdata_s outdata_t;

typedef enum {
	CMD_PARAMETERS,	CMD_TIMESET
} cmd_t;

typedef struct {
  // были в старой версии
	Mode      eMode;      /* Режим ожидания нового байта */
  u32_t     ulCounter;  /* Счетчик принятых байт */
  cmd_t     usCmd;      // Команда управления
  // были статичными
  u8_t      page;
  u8_t      ds_select
  subsprm_t subsprm;
  outdata_t outdata;
} ifrs_t;

struct subsprm_s {
	param_t x00;
	param_t x01;
	param_t x02;
	param_t x03;
	param_t x04;
	param_t x05;
	param_t x06;
	param_t x07;
	param_t x08;
	param_t x09;
	param_t x10;
};

struct cargvalue_s {
	u16_t usParam0;
	u16_t usParam1;
	u16_t usParam2;
};

struct outdata_s {
	u16_t usIz;
	u16_t usRlz;
	u16_t usCirc;
};;

#endif //_IFRS_H_