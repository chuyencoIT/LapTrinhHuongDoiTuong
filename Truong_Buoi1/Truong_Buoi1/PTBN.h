#pragma once
#include <iostream>
#include "math.h"
using namespace std;

class PTBN
{
private:
	float a, b;
public:
	void nhap();
	void tinhNghiem();

};


void PTBN::nhap()
{
	cout << "\nPhuong Trinh Bac Nhat: ax +b = 0";

	cout << "\nNhap he so a: ";
	cin >> a;

	cout << "Nhap he so b: ";
	cin >> b;

}

void PTBN::tinhNghiem()
{

	if (a == 0 && b == 0) cout << "\nPhuong Trinh Vo So Nghiem\n\n\n";
	else if (a == 0 && b != 0) cout << "\nPhuong Trinh Vo Nghiem\n\n\n";
	else cout << "\nNghiem cua phuong trinh: x = " << -b / a << "\n\n\n";

}