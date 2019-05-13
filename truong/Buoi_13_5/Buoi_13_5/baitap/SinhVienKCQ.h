#pragma once
#include <iostream>
#include "SinhVien.h"
#include <string>

using namespace std;

class SINHVIENKCQ : protected SINHVIEN
{
private:
	int soMH;
public:
	float tienHocPhi();
	void nhapTTSVKCQ();
	void xuatTTSVKCQ();
};

float SINHVIENKCQ::tienHocPhi()
{
		return (soMH * 350000);
}

void SINHVIENKCQ::nhapTTSVKCQ()
{
	nhapTTSV();
	do
	{
		cout << "Nhap so mon hoc: ";
		cin >> soMH;
		if (soMH < 0) cout << "\tGia Tri khong hop le!";
	} while (soMH < 0);
}

void SINHVIENKCQ::xuatTTSVKCQ()
{
	xuatTTSV();
	cout << "\tSoMH: " << soMH << "\t     Tien Hoc Phi: " << tienHocPhi();
}