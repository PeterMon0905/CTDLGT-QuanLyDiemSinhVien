#include <iostream>
#include "MonHoc.h"

MonHoc::MonHoc() {
	strcpy_s(mamh, "default");
	strcpy_s(tenmh, "default");
	stclt = 0;
	stcth = 0;
}

MonHoc::MonHoc(const char* mamh, const char* tenmh, int stclt, int stcth) {
	strcpy_s(this->mamh, mamh);
	strcpy_s(this->tenmh, tenmh);
	this->stclt = stclt;
	this->stcth = stcth;
}