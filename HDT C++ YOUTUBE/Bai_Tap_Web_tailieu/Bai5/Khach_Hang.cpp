#include "Khach_Hang.h"
#include <iomanip>

void CKhach_Hang::nhap()
{
	cout << "\nMa Khach Hang: ";
	fflush(stdin);
	getline(cin, ma);

	cout << "\nHo Ten Khach Hang: ";
	fflush(stdin);
	getline(cin, hoTen);

	cout << "\nNgay ra hoa don: ";
	fflush(stdin);
	getline(cin, ngayRaHoaDon);

	cout << "\nSo Luong Tieu Thu: ";
	cin >> soLuongTieuThu;

	donGia = 10000;
}

void CKhach_Hang::xuat()
{
	cout << setw(5) << left << ma;
	cout << setw(20)<< left << hoTen;
	cout << setw(12) << right << ngayRaHoaDon;
	cout << setw(8) << right << soLuongTieuThu;
	cout << setw(8) << right << donGia;
}