#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
	string hoTen;
	string ngaySinh;
	string queQuan;
public:
	void nhap();
	void xuat();
};

void Person::nhap()
{
	fflush(stdin);
	cout << "\n Nhap Ho Ten: ";
	getline(cin, hoTen);
	
	cout << "\n Nhap Ngay Sinh: ";
	getline(cin, ngaySinh);

	cout << "\n Nhap Que Quan: ";
	getline(cin, queQuan);
}

void Person::xuat()
{
	cout << "Ho Ten: " << hoTen <<"\t Ngay Sinh: " << ngaySinh << "\tQue Quan: " << queQuan;
}


class KySu : Person
{
private:
	string nganhHoc;
	int namTN;
public:
	void nhap();
	void xuat();
};

void KySu::nhap()
{
	Person::nhap();

	cout << "\n Nganh Hoc: ";
	getline(cin, nganhHoc);

	cout << "\n Nam Tot Nghiep: ";
	cin >> namTN;
}

void KySu::xuat()
{
	Person::xuat();
	cout <<"\t Nganh Hoc: " << nganhHoc << "\t Nam TN: "<< namTN;
}

int main()
{
	KySu *ks1 = new KySu;
	ks1->nhap();
	ks1->xuat();

	system("pause");
	return 0;
}