#include "sophuc.h"

int main()
{
	SOPHUC sp, sp2, kq;
	sp.nhapSP();
	sp2.nhapSP();

	cout << "\nTong hai so phuc: ";
	kq = sp.tinhTong(sp2);
	kq.xuatSP();

	cout << "\nHieu hai so phuc: ";
	kq = sp.tinhHieu(sp2);
	kq.xuatSP();

	cout << "\n\n";
	system("pause");
	return 0;
}