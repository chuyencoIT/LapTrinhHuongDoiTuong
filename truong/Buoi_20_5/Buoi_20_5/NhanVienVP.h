#pragma once
#include <iostream>
#include"NhanVien.h"
using namespace std;

class NhanVienVP : public NhanVien
{
private:
	float phuCapVP;
	float luongCB = 1390000;
public:
	void nhapThongTin();
	void xuatThongTin();
	float tinhLuong();
};

void NhanVienVP::nhapThongTin()
{
	NhanVien::nhapThongTin();

	cout << "Nhap phu cap: ";
	cin >> phuCapVP;
}

void NhanVienVP::xuatThongTin()
{
	NhanVien::xuatThongTin();
	cout << "\n\t\tPhu cap: " << phuCapVP << "\tLuong CB: " << luongCB << "\tLuong: " << tinhLuong();
	cout << "\n----------------------------------------------------------\n";
}

float NhanVienVP::tinhLuong()
{
	return (luongCB * phuCapVP + luongCB);
}