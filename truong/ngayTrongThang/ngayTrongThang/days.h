#include <iostream>
using namespace std;

class DayInMonth
{
private:
	int month, nam;
public:
	void know_ifelse();
	void know_switch();
};

void DayInMonth::know_ifelse()
{
	cout << "\nToi su dung if - else nha!\n";
	cout << "\nNhap Thang Can Biet So Ngay: ";
	cin >> month;

	if ((int)month == 1)
	{
		cout << "\nNho nhe chua: Thang 1 co 31 ngay!\n\n";
	}
	else if ((int)month == 2)
	{
		cout << "Nam may nua ban oi! Nhap nam di: ";
		cin >> nam;

		if (((int)nam % 4 == 0 && (int)nam % 100 != 0) || (int)nam % 400 ==0)
		{
			cout << "\n\tThang 2 nam " << nam << " co 29 ngay (nam nhuan)!\n\n";
		}
		else
		{
			cout << "\n\tThang 2 nam " << nam << " co 28 ngay (nam khong nhuan)!\n\n";
		}
		
	}
	else if ((int)month == 3)
	{
		cout << "\nNho nhe chua: \n\tThang 3 co 31 ngay!\n\n";
	}
	else if ((int)month == 4)
	{
		cout << "\nNho nhe chua: \n\tThang 4 co 30 ngay!\n\n";
	}
	else if ((int)month == 5)
	{
		cout << "\nNho nhe chua: \n\tThang 5 co 31 ngay!\n\n";
	}
	else if ((int)month == 6)
	{
		cout << "\nNho nhe chua: \n\tThang 6 co 30 ngay!\n\n";
	}
	else if ((int)month == 7)
	{
		cout << "\nNho nhe chua: \n\tThang 7 co 31 ngay!\n\n";
	}
	else if ((int)month == 8)
	{
		cout << "\nNho nhe chua: \n\tThang 8 co 31 ngay!\n\n";
	}
	else if ((int)month == 9)
	{
		cout << "\nNho nhe chua: \n\tThang 9 co 30 ngay!\n\n";
	}
	else if ((int)month == 10)
	{
		cout << "\nNho nhe chua: \n\tThang 10 co 31 ngay!\n\n";
	}
	else if ((int)month == 11)
	{
		cout << "\nNho nhe chua: \n\tThang 11 co 30 ngay!\n\n";
	}
	else if ((int)month == 12)
	{
		cout << "\nNho nhe chua: \n\tThang 12 co 31 ngay!\n\n";
	}
	else
	{
		cout << "Chi co thang tu 1 - 12 khong co thang nay" << ". Nho nhe chua!\n\n";
	}
}


void DayInMonth::know_switch()
{
	cout << "\n\nToi su dung switch - case nha!\n";
	cout << "\nNhap Thang Can Biet So Ngay: ";
	cin >> month;

	switch (month)
	{
		case 1:
		{
			cout << "\nNho nhe chua: Thang 1 co 31 ngay!\n\n";
			break;
		}
		case 2:
		{
			cout << "Nam may nua ban oi! Nhap nam di: ";
			cin >> nam;

			if (((int)nam % 4 == 0 && (int)nam % 100 != 0) || (int)nam % 400 == 0)
			{
				cout << "\n\tThang 2 nam " << nam << " co 29 ngay (nam nhuan)!\n\n";
			}
			else
			{
				cout << "\n\tThang 2 nam " << nam << " co 28 ngay (nam khong nhuan)!\n\n";
			}
			break;
		}
		case 3:
		{
			cout << "\nNho nhe chua: \n\tThang 3 co 31 ngay!\n\n";
			break;
		}
		case 4:
		{
			cout << "\nNho nhe chua: \n\tThang 4 co 30 ngay!\n\n";
			break;
		}
		case 5:
		{
			cout << "\nNho nhe chua: \n\tThang 5 co 31 ngay!\n\n";
			break;
		}
		case 6:
		{
			cout << "\nNho nhe chua: \n\tThang 6 co 30 ngay!\n\n";
			break;
		}
		case 7:
		{
			cout << "\nNho nhe chua: \n\tThang 7 co 31 ngay!\n\n";
			break;
		}
		case 8:
		{
			cout << "\nNho nhe chua: \n\tThang 8 co 31 ngay!\n\n";
			break;
		}
		case 9:
		{
			cout << "\nNho nhe chua: \n\tThang 9 co 30 ngay!\n\n";
			break;
		}
		case 10:
		{
			cout << "\nNho nhe chua: \n\tThang 10 co 31 ngay!\n\n";
			break;
		}
		case 11:
		{
			cout << "\nNho nhe chua: \n\tThang 11 co 30 ngay!\n\n";
			break;
		}
		case 12:
		{
			cout << "\nNho nhe chua: \n\tThang 12 co 31 ngay!\n\n";
			break;
		}
		default: cout << "Chi co thang tu 1 - 12 khong co thang nay" << ". Nho nhe chua!\n\n";
	}
	
}