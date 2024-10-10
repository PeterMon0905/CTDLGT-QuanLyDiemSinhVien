#include <iostream>
#include "SinhVien.h"


SinhVien::SinhVien(const char* maSV, const string& ho, const string& ten, bool gioiTinh, const char* soDT) {
	strcpy_s(this->maSV, strlen(this->maSV), maSV);
	this->ho = ho;
	this->ten = ten;
	this->gioiTinh = gioiTinh;
	strcpy_s(this->soDT, strlen(this->soDT), soDT);
	next = NULL;
}