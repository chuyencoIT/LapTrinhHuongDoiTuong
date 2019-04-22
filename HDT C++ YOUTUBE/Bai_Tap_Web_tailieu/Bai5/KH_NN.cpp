#include "KH_NN.h"
#include <iomanip>

void CKH_NN::nhap()
{
	CKhach_Hang::nhap();

	cout << "\nQuoc Tich: ";
	fflush(stdin);
	getline(cin, quocTich);
	set_isVN(false);
}

void CKH_NN::xuat()
{
	CKhach_Hang::xuat();

	cout << setw(15) << right << quocTich << endl;
}

long CKH_NN::tinhTien()
{
	return (soLuongTieuThu * donGia);
}