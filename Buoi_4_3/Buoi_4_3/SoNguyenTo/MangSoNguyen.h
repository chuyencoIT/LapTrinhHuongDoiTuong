#include <iostream>
using namespace std;

class MangSoNguyen
{
private:
	int array_SNT[10];
public:
	void nhapArray();
	void xuatArray();
	void xuat(int  mang[], int n);
	void thongTinVeMang();
	int max(int  mang[], int n);
	int min(int  mang[], int n);
	bool laSNT(int num);
	void thongTinVe_SNT_TrongMang();
};

void MangSoNguyen::nhapArray()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "\nNhap so thu " << (i + 1) << ": ";
		cin >> array_SNT[i];
	}
}

void MangSoNguyen::xuatArray()
{
	cout << "\n => Noi dung mang:  ";
	xuat(array_SNT, 10);
}

void MangSoNguyen::xuat(int  mang[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << mang[i] << "   ";
	}
}

void MangSoNguyen::thongTinVeMang()
{
	int  sumChan = 0, sumLe = 0;

	for (int i = 0; i < 10; i++)
	{
		if (array_SNT[i] % 2 == 0)
			sumChan += array_SNT[i];
		else sumLe += array_SNT[i];
	}

	cout << "\nThong tin trong mang: ";
	cout << "\n\t Max = " << max(array_SNT, 10);
	cout << "\n\t Min = " << min(array_SNT,10);
	cout << "\n\t Tong cac so chan = " << sumChan;
	cout << "\n\t Tong cac so le = " << sumLe;
}

int MangSoNguyen::max(int  mang[], int n)
{ 
	int max;
	max = mang[0];

	for (int i = 0; i < n; i++)
	{
		if (mang[i] > max)
			max = mang[i];
	}

	return max;
}

int MangSoNguyen::min(int  mang[], int n)
{
	int min;
	min = mang[0];

	for (int i = 0; i < n; i++)
	{
		if (mang[i] < min)
			min = mang[i];
	}

	return min;
}

bool MangSoNguyen::laSNT(int num)
{
	if (num <= 1) return false;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) return false;
	}
	return true;
}


void MangSoNguyen::thongTinVe_SNT_TrongMang()
{
	int cacSNT[10], soLuongSNT=0, sumSNT=0;

	cout << "\nThong tin cac so nguyen to trong mang: ";

	for (int i = 0; i < 10; i++)
	{
		if (laSNT(array_SNT[i]) == true)
		{
			cacSNT[soLuongSNT] = array_SNT[i];
			soLuongSNT++;
			sumSNT += array_SNT[i];
		}		
	}

	
	if (soLuongSNT > 0)
	{
		cout << "\n\t Co " << soLuongSNT << " So Nguyen To Trong Mang: ";
			xuat(cacSNT, soLuongSNT);

		cout << "\n\t Tong Cac So Nguyen To Trong Mang: " << sumSNT;
		cout << "\n\t Max = " << max(cacSNT, soLuongSNT);
		cout << "\n\t Min = " << min(cacSNT, soLuongSNT);
	}
	else cout << "\n\t Trong mang khong co so nguyen to nao!";
}
