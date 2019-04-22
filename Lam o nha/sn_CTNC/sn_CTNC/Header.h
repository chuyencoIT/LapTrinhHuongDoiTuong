#include "TongHop.h"
#include <iostream>
#include <string>
using namespace std;

class SN : tonghop
{
private:
	int a, b;
public:
	void nhap();
	void thongtin();

	//--ham phu--
	int cong();
	int tru();
	long nhan();
	float chia();
	

};

void SN::nhap()
{
	float a;
	FLOAT_nhap(a, "Nhap a: ");

}


void SN::thongtin()
{
	cout << "\n" << a << " + " << b << " = " << cong();
	cout << "\n" << a << " - " << b << " = " << tru();
	cout << "\n" << a << " * " << b << " = " << nhan();
	cout << "\n" << a << " / " << b << " = " << chia();
}

//---ham phu
int SN::cong()
{
	return a + b;
}

int SN::tru()
{
	return a - b;
}

long SN::nhan()
{
	return a*b;
}

float SN::chia()
{
	return (float)a / b;
}