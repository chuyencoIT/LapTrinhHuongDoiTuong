#include <iostream>
using namespace std;

class SOPHUC{
private:
	float thuc, ao;
public:
	SOPHUC();
	void nhapSP();
	void xuatSP();
	SOPHUC tinhTong(SOPHUC sp); 
	SOPHUC tinhHieu(SOPHUC sp);
	~SOPHUC();
};

SOPHUC::SOPHUC()
{
	thuc = ao = 0;
}

void SOPHUC::nhapSP()
{
	cout << "Nhap lan luot phan thuc va ao: ";
	cin >> thuc >> ao;
}

void SOPHUC::xuatSP()
{
	cout << thuc;
	if (ao < 0) cout << " - " << ao*-1 << "i";
	else cout << " + " << ao << "i";
}

SOPHUC SOPHUC::tinhTong(SOPHUC sp)
{
	SOPHUC tong;
	tong.thuc = sp.thuc + thuc;
	tong.ao = sp.ao + ao;
	return tong;
}

SOPHUC SOPHUC::tinhHieu(SOPHUC sp)
{
	SOPHUC hieu;
	hieu.thuc = thuc - sp.thuc;
	hieu.ao = ao - sp.ao;
	return hieu;
}

SOPHUC::~SOPHUC(){}