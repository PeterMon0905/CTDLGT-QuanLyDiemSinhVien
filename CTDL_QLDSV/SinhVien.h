#pragma once
using namespace std;

typedef struct SinhVien {
	char maSV[15];
	string ho;
	string ten;
	bool gioiTinh;
	char soDT[10];

	SinhVien();
	SinhVien(const char* maSV,
		const string& ho,
		const string& ten,
		bool gioiTinh,
		const char* soDT);
};