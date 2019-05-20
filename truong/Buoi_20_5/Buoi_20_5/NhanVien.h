#pragma once
#include <iostream>
#include "NamSinhNV.h"
#include <string>
using namespace std;

class NhanVien
{
protected:
	string maNV;
	string hoTen;
	NamSinhNV namSinh;
	string diaChi;
public:
	virtual void nhapThongTin();
	virtual void xuatThongTin();
	virtual float tinhLuong() = 0;
};

void NhanVien::nhapThongTin()
{
	cout << "\nNhap ma so: ";
	fflush(stdin);
	cin >> maNV;

	cout << "Nhap ho ten: ";
	fflush(stdin);
	getline(cin, hoTen);

	cout << "Nhap nam sinh: \n";
	cin >> namSinh;

	cout << "Nhap dia chi: ";
	fflush(stdin);
	getline(cin, diaChi);
}

void NhanVien::xuatThongTin()
{
	cout << maNV << "\t" << hoTen << "\t" << namSinh << "\t" << diaChi;
}