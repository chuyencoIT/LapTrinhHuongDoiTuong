#include <iostream>

using namespace std;

class DATE
{
private:
	int ngay = 1, thang = 1, nam = 1990;
public:
	DATE(int _ngay, int _thang, int _nam);
	DATE(){};
	void setAll(int _ngay, int _thang, int _nam);
	friend ostream& operator <<(ostream &stream, DATE &dt);
	friend istream& operator >>(istream &stream, DATE &dt);
};

DATE::DATE(int _ngay, int _thang, int _nam)
{
	ngay = _ngay;
	thang = _thang;
	nam = _nam;
}

void DATE::setAll(int _ngay, int _thang, int _nam)
{
	ngay = _ngay;
	thang = _thang;
	nam = _nam;
}

ostream& operator <<(ostream &stream, DATE &dt)
{
	stream << dt.ngay << "/" << dt.thang << "/" << dt.nam;
	return stream;
}

istream& operator >>(istream &stream, DATE &dt)
{
	do{
		cout << "\tNhap ngay: ";
		stream >> dt.ngay;
		if (dt.ngay <= 0 || dt.ngay > 31) cout << "\tGia Tri Khong Hop Le!\n\n";
	} while (dt.ngay <= 0 || dt.ngay > 31);

	do{
		cout << "\tNhap thang: ";
		stream >> dt.thang;
		if (dt.thang <= 0 || dt.thang > 12) cout << "\tGia Tri Khong Hop Le!\n\n";
	} while (dt.thang <= 0 || dt.thang > 12);
	
	do{
		cout << "\tNhap nam: ";
		stream >> dt.nam;
		if (dt.nam <= 1900) cout << "\tGia Tri Khong Hop Le!\n\n";
	} while (dt.nam <= 1900);


	return stream;
}