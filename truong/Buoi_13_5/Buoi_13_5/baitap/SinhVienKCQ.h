#pragma once
#include <iostream>
#include "SinhVien.h"
#include <string>

using namespace std;

class SINHVIENKCQ : public SINHVIEN
{
private:
	int soMH;
public:
	float tienHocPhi();
	void nhapTTSV();
	void xuatTTSV();
};

float SINHVIENKCQ::tienHocPhi()
{
		return (soMH * 350000);
}

void SINHVIENKCQ::nhapTTSV()
{
	SINHVIEN::nhapTTSV();
	do
	{
		cout << "Nhap so mon hoc: ";
		cin >> soMH;
		if (soMH < 0) cout << "\tGia Tri khong hop le!";
	} while (soMH < 0);
}

void SINHVIENKCQ::xuatTTSV()
{
	SINHVIEN::xuatTTSV();
	cout << "\tSoMH: " << soMH << "\t     Tien Hoc Phi: " << tienHocPhi();
}