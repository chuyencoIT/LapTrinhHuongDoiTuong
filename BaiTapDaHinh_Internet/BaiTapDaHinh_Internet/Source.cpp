#include <iostream> 
using namespace std;

int dt = 0;
class Hinh {
protected:
	int chieurong, chieucao;
public:
	Hinh(int a = 0, int b = 0)
	{
		cout << "nhap chieu dai";
		cin >> a;
	}
	virtual int dientich()
	{
		cout << "Dien tich cua lop cha:" << endl;
		return 0;
	}
};
class HinhChuNhat : public Hinh{
public:
	HinhChuNhat(int a = 0, int b = 0) :Hinh(a, b) { }
	int dientich()
	{
		dt = (chieurong * chieucao);
		cout << "Dien tich cua lop HinhChuNhat la: " << dt << endl;
		return 0;
	}
};
class TamGiac : public Hinh{
public:
	TamGiac(int a = 0, int b = 0) :Hinh(a, b) { }
	int dientich()
	{
		dt = (chieurong * chieucao / 2);
		cout << "Dien tich cua lop TamGiac la: " << dt << endl;
		return 0;
	}
};
// ham main cua chuong trinh
int main()
{
	Hinh *hinh;
	HinhChuNhat hcn(13, 6);
	TamGiac  tag(8, 9);

	// luu giu dia chi cua HinhChuNhat
	hinh = &hcn;
	// goi dien tich cua hinh chu nhat.
	hinh->dientich();

	// luu giu dia chi cua TamGiac
	hinh = &tag;
	// goi dien tich cua tam giac.
	hinh->dientich();
	system("pause");
	return 0;
}