#pragma once

typedef struct MonHoc {
    char mamh[10]; // Ma mon hoc
    char tenmh[50]; // Ten mon hoc
    int stclt; // So tin chi ly thuyet
    int stcth; // So tin chi thuc hanh

    MonHoc();
    MonHoc(const char* mamh, const char* tenmh, int stclt, int stcth);
} MonHoc;
