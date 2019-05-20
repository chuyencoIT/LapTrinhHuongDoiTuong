#pragma once
#include <iostream>
using namespace std;

class NamSinhNV
{
private:
	int ngay, thang, nam;
public:
	friend istream &operator >> (istream &input, NamSinhNV &ns);
	friend ostream &operator << (ostream &output, NamSinhNV &ns);
};

istream &operator >> (istream &input, NamSinhNV &ns)
{
	do{
		cout << "\tNhap ngay: ";
		input >> ns.ngay;
		if (ns.ngay <= 0 || ns.ngay > 31) cout << "\tGia Tri Khong Hop Le!\n\n";
	} while (ns.ngay <= 0 || ns.ngay > 31);

	do{
		cout << "\tNhap thang: ";
		input >> ns.thang;
		if (ns.thang <= 0 || ns.thang > 12) cout << "\tGia Tri Khong Hop Le!\n\n";
	} while (ns.thang <= 0 || ns.thang > 12);

	do{
		cout << "\tNhap nam: ";
		input >> ns.nam;
		if (ns.nam <= 1900) cout << "\tGia Tri Khong Hop Le!\n\n";
	} while (ns.nam <= 1900);


	return input;
}

ostream &operator << (ostream &output, NamSinhNV &ns)
{
	output << ns.ngay << "/" << ns.thang << "/" << ns.nam;
	return output;
}