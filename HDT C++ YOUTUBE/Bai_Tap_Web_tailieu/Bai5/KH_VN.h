#pragma once
#include "Khach_Hang.h"
#include "iostream"

using namespace std;

class CKH_VN : public CKhach_Hang
{
private:
	string doiTuong;
	float dinhMuc;
public:
	void nhap();
	void xuat();
	long tinhTien();
};

