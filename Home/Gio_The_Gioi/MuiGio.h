#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Mui_Gio
{
private:
	int maSo;
	string tenNuoc;
	string tenThanhPho;
	float muiGio;
public: 
	void setValue(int ms, string tn, string ttp, float mg);
	void xuatValue();
	float getMuiGio()
	{
		return muiGio;
	}
	string getTenNuoc()
	{
		return tenNuoc;
	}
};

void Mui_Gio::setValue(int ms, string tn, string ttp, float mg)
{
	maSo = ms;
	tenNuoc = tn;
	tenThanhPho = ttp;
	muiGio = mg;
}

void Mui_Gio::xuatValue()
{
		cout << "\n" << setw(7) << left << maSo;
		cout << setw(15) << left << tenNuoc;
		cout << setw(25) << left << tenThanhPho;
		cout << setw(5) << right << muiGio;
}