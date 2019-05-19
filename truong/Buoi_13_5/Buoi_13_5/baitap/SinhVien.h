#pragma once
#include <iostream>
#include "DATE.h"
#include <string>

using namespace std;

class SINHVIEN
{
protected:
	string maSV;
	string hoTen;
	DATE namSinh;
public:
	virtual float tienHocPhi() = 0;
	SINHVIEN(string _maSV, string _hoTen, int _ngay, int _thang, int _nam);
	SINHVIEN(){};
	virtual void nhapTTSV();
	virtual void xuatTTSV();
};

SINHVIEN::SINHVIEN(string _maSV, string _hoTen, int _ngay, int _thang, int _nam)
{
	maSV = _maSV;
	hoTen = _hoTen;
	namSinh.setAll(_ngay, _thang, _nam);
}

void SINHVIEN::nhapTTSV()
{
	cout << "\nNhap ma so: ";
	fflush(stdin);
	cin >> maSV;

	cout << "Nhap ho ten: ";
	fflush(stdin);
	getline(cin, hoTen);

	cout << "Nhap ngay thang nam sinh: \n";
	cin >> namSinh;
}

void SINHVIEN::xuatTTSV()
{
	cout << maSV << "\t" << hoTen << "\t" << namSinh;
}