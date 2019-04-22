#include <iostream>

using namespace std;

class GiaiThua
{
private:
	int n;
public:
	void nhap();
	void giaiThua();
	void tinhTong();
};

void GiaiThua::nhap()
{
	do{
		cout << "\nNhap n: ";
		cin >> n;
		if (n <= 0) cout << "\n Nhap n>0!";
	} while (n<=0);
}

void GiaiThua::giaiThua()
{
	long long giaTri = 1;
	if (n == 0 || n == 1) cout <<"\n" << n << "! = 1";
	else{
		for (int i = 2; i <= n; i++)
		{
			giaTri *= i;
		}
		cout << "\n" << n << "! = " << giaTri;
	}
}

void GiaiThua::tinhTong()
{
	float sum = 1;
	cout << "\nSum = 1 ";
	if (n % 2 == 0)
	{
		for (int i = 2; i <= n; i += 2)
		{
			cout << " + " << "1/" << i;
			sum += ((float)1 / i);
		}
	}
	else
	{
		for (int i = 3; i <= n; i += 2)
		{
			cout << " + " << "1/" << i;
			sum += ((float)1 / i);
		}
	}
	cout << " = " << sum;
}