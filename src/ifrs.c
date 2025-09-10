#include "ifrs.h"

struct ifrs_s {
  // ���� � ������ ������
	Mode      eMode;      /* ����� �������� ������ ����� */
  u32_t     ulCounter;  /* ������� �������� ���� */
  cmd_t     usCmd;      // ������� ����������
  // ���� ����������
  u8_t      page;
  u8_t      ds_select
  subsprm_t subsprm;
  outdata_t outdata;
};

/**	----------------------------------------------------------------------------
	* @brief Main structure's (named as 'self') constructor */
ifrs_t
  ifrs__create(void) {
/*----------------------------------------------------------------------------*/
	// Self creating
  ifrs_t *self = calloc(1, sizeof(struct ifrs_s));
  if (!self) return NULL;
  
  // Self configurating
  // ...

  return self;
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
	* @brief ������� ���������� ����� ��������
	* @param dataset: ����� �������� �������� �������.
	* @param cargpage: ����� ������� �������� �������.
	* @param ptr: ��������� �� ��������� �� ���������� �� �������.
	* @retval none: ��� */
s32_t
  ifrs__input(ifrs_t *self) {
/*----------------------------------------------------------------------------*/
	return 0;
}