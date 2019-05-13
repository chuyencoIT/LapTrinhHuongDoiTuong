#pragma once
#include <iostream>
#include "SinhVien.h"
#include <string>

using namespace std;

class SINHVIENCQ : protected SINHVIEN
{
private:
	int soTC;
public:
	float tienHocPhi();
	void nhapTTSVCQ();
	void xuatTTSVCQ();
};

float SINHVIENCQ::tienHocPhi()
{
	if (soTC >= 20)
		return (soTC * 75000);
	else return (soTC * 70000);
}

void SINHVIENCQ::nhapTTSVCQ()
{
	nhapTTSV();
	do
	{
		cout << "Nhap so tin chi: ";
		cin >> soTC;
		if (soTC < 0) cout << "\tGia Tri khong hop le!";
	} while (soTC < 0);
}

void SINHVIENCQ::xuatTTSVCQ()
{
	xuatTTSV();
	cout << "\tSo TC: " << soTC << "\t     Tien Hoc Phi: " << tienHocPhi();
}