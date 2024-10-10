#include <iostream>
#include "MonHoc.h"


MonHoc::MonHoc(const char* mamh, const char* tenmh, int stclt, int stcth) {
	strcpy_s(this->mamh, mamh);
	strcpy_s(this->tenmh, tenmh);
	this->stclt = stclt;
	this->stcth = stcth;
}