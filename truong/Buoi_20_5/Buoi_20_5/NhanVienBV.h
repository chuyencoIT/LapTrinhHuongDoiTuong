#pragma once
#include <iostream>
#include"NhanVien.h"
using namespace std;

class NhanVienBV : public NhanVien
{
private:
	int soNgayTruc;
	float luongNgay = 38000;
public:
	void nhapThongTin();
	void xuatThongTin();
	float tinhLuong();
};

void NhanVienBV::nhapThongTin()
{
	NhanVien::nhapThongTin();

	cout << "Nhap so ngay truc: ";
	cin >> soNgayTruc;
}

void NhanVienBV::xuatThongTin()
{
	NhanVien::xuatThongTin();
	cout << "\n\t\tSNT: " << soNgayTruc << "\tLuong ngay: " << luongNgay << "\tLuong: " << tinhLuong();
	cout << "\n----------------------------------------------------------\n";
}

float NhanVienBV::tinhLuong()
{
	return (soNgayTruc * luongNgay);
}