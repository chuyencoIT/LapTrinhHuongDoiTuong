#pragma once
#include <iostream>
#include "math.h"
using namespace std;

class PTBH
{
private:
	float a, b, c;
public:
	void nhap();
	void tinhNghiem();

};


void PTBH::nhap()
{
	cout << "\nPhuong Trinh Bac Nhat: ax^2 + bx +c = 0";

	cout << "\nNhap he so a: ";
	cin >> a;

	cout << "Nhap he so b: ";
	cin >> b;

	cout << "Nhap he so c: ";
	cin >> c;
}

void PTBH::tinhNghiem()
{
	if (a == 0)
	{
		if (b == 0 && c == 0) cout << "\nPhuong Trinh Vo So Nghiem\n\n\n";
		else if (b == 0 && c != 0) cout << "\nPhuong Trinh Vo Nghiem\n\n\n";
		else cout << "\nNghiem cua phuong trinh: x = " << -c / b << "\n\n\n";
	}
	else
	{
		float delta;
		delta = b*b - 4 * a *c;
		if (delta < 0) cout << "\nPhuong Trinh Vo Nghiem\n\n\n";
		else if (delta == 0) cout << "\nPhuong trinh co nghiem kep: x1 = x2 = " << -b / (2 * a) << "\n\n\n";
		else cout << "\nPhuong trinh co 2 nghiem phan biet: x1 =" << (-b + sqrt(delta)) / (2 * a) << "\tx2 = " << (-b - sqrt(delta)) / (2 * a) << "\n\n\n";
	}



}