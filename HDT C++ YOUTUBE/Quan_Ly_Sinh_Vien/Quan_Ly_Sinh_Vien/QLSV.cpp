#include <iostream>
#include <string>
using namespace std;

class SinhVien
{
private:
	string maSV;
	string name;
public:
	void nhap();
	void xuat();
};

void SinhVien::nhap()
{
	cout << "\nMa Sinh Vien";
	fflush(stdin);
	getline(cin,maSV);
	cout << "\nNhap ten SV:";
	fflush(stdin);
	getline(cin,name);
}

void SinhVien::xuat()
{
	cout << "Ma: " << maSV << "\tTen: " << name;
}

int main()
{
	SinhVien a;
	a.nhap();
	a.xuat();

	system("pause");
	return 0;
}