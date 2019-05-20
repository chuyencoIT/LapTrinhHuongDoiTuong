#include "NhanVienBV.h"
#include "NhanVienVP.h"


int main()
{
	NhanVien *sv;
	NhanVienBV nvbv;
	NhanVienVP nvvp;

	sv = &nvbv;
	cout << "\nNhap thong tin nhan vien bao ve:\n";
	sv->nhapThongTin();
	cout << "\nThong tin nhan vien bao ve:\n";
	sv->xuatThongTin();

	sv = &nvvp;
	cout << "\nNhap thong tin nhan vien van phong:\n";
	sv->nhapThongTin();
	cout << "\nThong tin nhan vien van phong:\n";
	sv->xuatThongTin();

	/*
		NhanVienBV nvbv;
		nvbv.nhapThongTin();
		nvbv.xuatThongTin();

		NhanVienVP nvvp;
		nvvp.nhapThongTin();
		nvvp.xuatThongTin();
	*/
	cout << "\n\n";
	system("pause");
	return 0;
}