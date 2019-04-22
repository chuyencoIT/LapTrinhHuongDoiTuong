#pragma once
#include<iostream>
#include<string>
using namespace std;

class CKhach_Hang
{
protected:
	string ma;
	string hoTen;
	string ngayRaHoaDon;
	float soLuongTieuThu;
	int donGia;
	bool isVN;
public:
	bool get_isVN()
	{
		return isVN;
	}

	void set_isVN(bool a)
	{
		isVN = a;
	}
	virtual void nhap();
	virtual void xuat();
	virtual long tinhTien() =0;
};

