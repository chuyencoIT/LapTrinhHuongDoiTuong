#include"diemchu.h"

void menu(int &n);

int main()
{
	int n;
	menu(n);

	Diem per;
	


	system("pause");
	return 0;
}

void menu(int &n)
{
	cout << "\n 1.A \t 2.B+ \t 3.B \t 4.C+ \t 5.C \t 6.D+ \t 7.D \t 8.F\n";
	cout << "Chon Diem Can Biet: ";
	cin >> n;
}