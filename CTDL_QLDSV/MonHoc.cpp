#include <iostream>
#include "MonHoc.h"

MonHoc::MonHoc() {
	strcpy(mamh, "default");
	strcpy(tenmh, "default");
	stclt = 0;
	stcth = 0;
}

MonHoc::MonHoc(const char* mamh, const char* tenmh, int stclt, int stcth) {
	strcpy(this->mamh, mamh);
	strcpy(this->tenmh, tenmh);
	this->stclt = stclt;
	this->stcth = stcth;
}