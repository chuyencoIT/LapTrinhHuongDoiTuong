#pragma once
#include "Khach_Hang.h"
#include "iostream"

using namespace std;

class CKH_NN : public CKhach_Hang
{
private:
	string quocTich;
public:
	void nhap();
	void xuat();
	long tinhTien();
};
