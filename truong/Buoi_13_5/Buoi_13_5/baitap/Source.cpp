#include "SinhVienCQ.h"
#include "SinhVienKCQ.h"
#include "sinhVien.h"

int main()
{
	SINHVIEN *sva, *svb;
	SINHVIENKCQ sv1;
	SINHVIENCQ sv2;
	sva = &sv1;
	svb = &sv2;

	cout << "\nNhap thong tin sinh vien khong chinh quy";
	sva->nhapTTSV();
	cout << "\n\nNhap thong tin sinh vien chinh quy";
	svb->nhapTTSV();

	sva->xuatTTSV();
	cout << "\n";
	svb->xuatTTSV();

	/*
	cout << "\nNhap thong tin sinh vien khong chinh quy";
	sv1.nhapTTSVKCQ();
	cout << "\n\nNhap thong tin sinh vien chinh quy";
	sv2.nhapTTSVCQ();
	
	
	sv1.xuatTTSVKCQ();
	cout << "\n";
	sv2.xuatTTSVCQ();
	*/


	cout << "\n\n";
	system("pause");
	return 0;
}
