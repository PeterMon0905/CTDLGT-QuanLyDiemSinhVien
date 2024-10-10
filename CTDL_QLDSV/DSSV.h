#pragma once
#include "SinhVien.h"

typedef struct DSSV {
	SinhVien sv;
	DSSV* next;

	void themSV();
} DSSV;