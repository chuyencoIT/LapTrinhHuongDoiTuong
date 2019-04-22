#include "KH_VN.h"
#include <iomanip>

void CKH_VN::nhap()
{
	CKhach_Hang::nhap();

	cout << "\nDoi Tuong: ";
	fflush(stdin);
	getline(cin, doiTuong);

	cout << "\nDinh Muc: ";
	cin >> dinhMuc;
	set_isVN(true);
}

void CKH_VN::xuat()
{
	CKhach_Hang::xuat();

	cout << setw(10) << right << doiTuong;
	cout << setw(10) << right << dinhMuc << endl;
}

long CKH_VN::tinhTien()
{
	if(soLuongTieuThu<=dinhMuc)
	{
		return (soLuongTieuThu * donGia);
	}
	else
	{
		return ((soLuongTieuThu *donGia *dinhMuc) + ((soLuongTieuThu-dinhMuc)*donGia *2.5));
	}
}