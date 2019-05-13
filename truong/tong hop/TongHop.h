#pragma 
#include <iostream>
#include <string>
#define COT 10
#define TANGDONG 0
#define TANGCOT 1
using namespace std;

class tonghop
{
public:
	//nhap so co kiem tra
	void INT_nhap(int &a, string title);
	void FLOAT_nhap(float &a, string title);

	//mang 2 chieu
	void Mang2Chieu_nhap(int a[][COT], int soDong, int soCot);
	void Mang2Chieu_xuat(int a[][COT], int soDong, int soCot);
	void Mang2Chieu_nhap(float a[][COT], int soDong, int soCot);
	void Mang2Chieu_xuat(float a[][COT], int soDong, int soCot);
	int Mang2Chieu_max(int a[][COT], int soDong, int soCot);
	int Mang2Chieu_min(int a[][COT], int soDong, int soCot);
	float Mang2Chieu_max(float a[][COT], int soDong, int soCot);
	float Mang2Chieu_min(float a[][COT], int soDong, int soCot);
	void Mang2Chieu_sapTangDongCaMang(int a[][COT], int n);
	void Mang2Chieu_sapTangCotCaMang(int a[][COT], int n);
	void Mang2Chieu_sapTangDongCaMang(float a[][COT], int n);
	void Mang2Chieu_sapTangCotCaMang(float a[][COT], int n);
	void Mang2Chieu_sapTang1chieu(int a[][COT], int soPhanTu, int num, int cachLam);  // cachLam: 0: tang dong, 1:tang cot
	void Mang2Chieu_sapTang1chieu(float a[][COT], int soPhanTu, int num, int cachLam);  // cachLam: 0: tang dong, 1:tang cot
	void Mang2Chieu_sapGiam1chieu(int a[][COT], int soPhanTu, int num, int cachLam);  // cachLam: 0: tang dong, 1:tang cot
	void Mang2Chieu_sapGiam1chieu(float a[][COT], int soPhanTu, int num, int cachLam);  // cachLam: 0: tang dong, 1:tang cot
	long Mang2Chieu_tinhTong1Dong(int a[][COT], int soPhanTu, int num);
	long Mang2Chieu_tinhTong1Cot(int a[][COT], int soPhanTu, int num);
	double Mang2Chieu_tinhTong1Dong(float a[][COT], int soPhanTu, int num);
	double Mang2Chieu_tinhTong1Cot(float a[][COT], int soPhanTu, int num);
	void Mang2Chieu_maxminChinhPhu(int a[][COT], int n);
	void Mang2Chieu_maxminChinhPhu(float a[][COT], int n);
	
	//mang 1 chieu
	void Mang1Chieu_nhap(int mang[], int soPhanTu);
	void Mang1Chieu_xuat(int mang[], int soPhanTu);
	void Mang1Chieu_sapMangTang(int mang[], int soPhanTu);
	void Mang1Chieu_sapMangGiam(int mang[], int soPhanTu);
	void Mang1Chieu_sapTang_soChan(int mang[], int soPhanTu);
	void Mang1Chieu_sapGiam_soLe(int mang[], int soPhanTu);

	void Mang1Chieu_nhap(float mang[], int soPhanTu);
	void Mang1Chieu_xuat(float mang[], int soPhanTu);
	void Mang1Chieu_sapMangTang(float mang[], int soPhanTu);
	void Mang1Chieu_sapMangGiam(float mang[], int soPhanTu);


	
	//ham kiem tra
	bool laSNT(int num);
	bool laSoChinhPhuong(int n);
	bool laSoHoanThien(int n);

	//tinh
	long tonghop::tinhGiaiThua(int num);
	void tonghop::giaiPhuongTrinhBacNhat(float a, float b);
	void tonghop::giaiPhuongTrinhBacHai(float a, float b, float c);

	//--ham phu--
	bool isINT(string str); //ham phu cua ham nhapINT
	bool isFLOAT(string str); //ham phu cua ham nhapFLOAT
};


//nhap so co kiem tra
void tonghop::INT_nhap(int &a, string title)
{
	string tam;
	do{
		cout << title;
		getline(cin, tam);
		if (isINT(tam) == true)
			a = atoi((char*)tam.c_str());
		else cout << "\tGia tri khong hop le. Vui long kiem tra lai!\n";
	} while (isINT(tam) == false);
}

void tonghop::FLOAT_nhap(float &a, string title)
{
	string tam;
	do{
		cout << title;
		getline(cin, tam);
		if (isFLOAT(tam) == true)
			a = atof((char*)tam.c_str());
		else cout << "\tGia tri khong hop le. Vui long kiem tra lai!\n";
	} while (isFLOAT(tam) == false);
}


// mang 2 chieu
void tonghop::Mang2Chieu_nhap(int a[][COT], int soDong, int soCot)
{
	string ChuoiCout = "";
	for (int i = 0; i < soDong; i++)
	{
		for (int j = 0; j < soCot; j++)
		{
			//cout << "A[" << i + 1 << "][" << j + 1 << "] = ";
			ChuoiCout = "A[" + to_string(i + 1) + "][" + to_string(j+1) + "] =";
			INT_nhap(a[i][j], ChuoiCout);
		}
	}
}

void tonghop::Mang2Chieu_xuat(int a[][COT], int soDong, int soCot)
{
	for (int i = 0; i < soDong; i++)
	{
		for (int j = 0; j < soCot; j++)
		{
			cout << a[i][j] << "   ";
		}
		cout << "\n";
	}
}

void tonghop::Mang2Chieu_nhap(float a[][COT], int soDong, int soCot)
{
	string ChuoiCout = "";
	for (int i = 0; i < soDong; i++)
	{
		for (int j = 0; j < soCot; j++)
		{
			//cout << "A[" << i + 1 << "][" << j + 1 << "] = ";
			ChuoiCout = "A[" + to_string(i + 1) + "][" + to_string(j + 1) + "] =";
			FLOAT_nhap(a[i][j], ChuoiCout);
		}
	}
}
void tonghop::Mang2Chieu_xuat(float a[][COT], int soDong, int soCot)
{
	for (int i = 0; i < soDong; i++)
	{
		for (int j = 0; j < soCot; j++)
		{
			cout << a[i][j] << "   ";
		}
		cout << "\n";
	}
}

int tonghop::Mang2Chieu_max(int a[][COT], int soDong, int soCot)
{
	int max = a[0][0];

	for (int i = 0; i < soDong; i++)
	{
		for (int j = 0; j < soCot; j++)
		{
			if (a[i][j] > max)
				max = a[i][j];
		}
	}
	return max;
}

int tonghop::Mang2Chieu_min(int a[][COT], int soDong, int soCot)
{
	int min = a[0][0];

	for (int i = 0; i < soDong; i++)
	{
		for (int j = 0; j < soCot; j++)
		{
			if (a[i][j] < min)
				min = a[i][j];
		}
	}
	return min;
}

float tonghop::Mang2Chieu_max(float a[][COT], int soDong, int soCot)
{
	float max = a[0][0];

	for (int i = 0; i < soDong; i++)
	{
		for (int j = 0; j < soCot; j++)
		{
			if (a[i][j] > max)
				max = a[i][j];
		}
	}
	return max;
}

float tonghop::Mang2Chieu_min(float a[][COT], int soDong, int soCot)
{
	float min = a[0][0];

	for (int i = 0; i < soDong; i++)
	{
		for (int j = 0; j < soCot; j++)
		{
			if (a[i][j] < min)
				min = a[i][j];
		}
	}
	return min;
}



long tonghop::Mang2Chieu_tinhTong1Dong(int a[][COT], int soPhanTu, int num)
{
	long sum = 0;
	for (int i = 0; i < soPhanTu; i++)
	{
		sum += a[num-1][i];
	}
	return sum;
}

long tonghop::Mang2Chieu_tinhTong1Cot(int a[][COT], int soPhanTu, int num)
{
	long sum = 0;
	for (int i = 0; i < soPhanTu; i++)
	{
		sum += a[i][num-1];
	}
	return sum;
}

double tonghop::Mang2Chieu_tinhTong1Dong(float a[][COT], int soPhanTu, int num)
{
	float sum = 0;
	for (int i = 0; i < soPhanTu; i++)
	{
		sum += a[num - 1][i];
	}
	return sum;
}

double tonghop::Mang2Chieu_tinhTong1Cot(float a[][COT], int soPhanTu, int num)
{
	float sum = 0;
	for (int i = 0; i < soPhanTu; i++)
	{
		sum += a[i][num - 1];
	}
	return sum;
}

void tonghop::Mang2Chieu_sapTang1chieu(int a[][COT], int n, int num, int cachLam)
{
	num--;
	if (cachLam == 0)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[num][i] > a[num][j])
					swap(a[num][i], a[num][j]);
			}
		}
	}
	else if (cachLam == 1)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i][num] > a[j][num])
					swap(a[i][num], a[j][num]);
			}
		}
	}

}

void tonghop::Mang2Chieu_sapTang1chieu(float a[][COT], int n, int num, int cachLam)
{
	num--;
	if (cachLam == 0)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[num][i] > a[num][j])
					swap(a[num][i], a[num][j]);
			}
		}
	}
	else if (cachLam == 1)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i][num] > a[j][num])
					swap(a[i][num], a[j][num]);
			}
		}
	}

}

void tonghop::Mang2Chieu_sapGiam1chieu(int a[][COT], int n, int num, int cachLam)
{
	num--;
	if (cachLam == 0)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[num][i] < a[num][j])
					swap(a[num][i], a[num][j]);
			}
		}
	}
	else if (cachLam == 1)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i][num] < a[j][num])
					swap(a[i][num], a[j][num]);
			}
		}
	}

}

void tonghop::Mang2Chieu_sapGiam1chieu(float a[][COT], int n, int num, int cachLam)
{
	num--;
	if (cachLam == 0)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[num][i] < a[num][j])
					swap(a[num][i], a[num][j]);
			}
		}
	}
	else if (cachLam == 1)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i][num] < a[j][num])
					swap(a[i][num], a[j][num]);
			}
		}
	}

}

void tonghop::Mang2Chieu_maxminChinhPhu(int a[][COT], int n)
{
	cout << "\n\n Duong cheo chinh-phu: ";
	int maxC, minC, maxP, minP;
	maxC = minC = a[0][0];
	maxP = minP = a[0][n - 1];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j && a[i][j] > maxC) maxC = a[i][j];
			else if (i == j && a[i][j] < minC) minC = a[i][j];
			else if ((i + j) == n - 1 && a[i][j] > maxP) maxP = a[i][j];
			else if ((i + j) == n - 1 && a[i][j] < minP) minP = a[i][j];
		}
	}
	cout << "\n\t Max duong cheo chinh: " << maxC;
	cout << "\n\t Min duong cheo chinh: " << minC;
	cout << "\n\t Max duong cheo phu: " << maxP;
	cout << "\n\t Min duong cheo phu: " << minP;

}

void tonghop::Mang2Chieu_maxminChinhPhu(float a[][COT], int n)
{
	cout << "\n\n Duong cheo chinh-phu: ";
	float maxC, minC, maxP, minP;
	maxC = minC = a[0][0];
	maxP = minP = a[0][n - 1];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j && a[i][j] > maxC) maxC = a[i][j];
			else if (i == j && a[i][j] < minC) minC = a[i][j];
			else if ((i + j) == n - 1 && a[i][j] > maxP) maxP = a[i][j];
			else if ((i + j) == n - 1 && a[i][j] < minP) minP = a[i][j];
		}
	}
	cout << "\n\t Max duong cheo chinh: " << maxC;
	cout << "\n\t Min duong cheo chinh: " << minC;
	cout << "\n\t Max duong cheo phu: " << maxP;
	cout << "\n\t Min duong cheo phu: " << minP;

}

void tonghop::Mang2Chieu_sapTangDongCaMang(int a[][COT], int n)
{
	for (int i = 0; i < n; i++)
	{
		Mang2Chieu_sapTang1chieu(a, n, i+1, TANGDONG);
	}
}

void tonghop::Mang2Chieu_sapTangCotCaMang(int a[][COT], int n)
{
	for (int i = 0; i < n; i++)
	{
		Mang2Chieu_sapTang1chieu(a, n, i+1, TANGCOT);
	}
}

void tonghop::Mang2Chieu_sapTangDongCaMang(float a[][COT], int n)
{
	for (int i = 0; i < n; i++)
	{
		Mang2Chieu_sapTang1chieu(a, n, i + 1, TANGDONG);
	}
}

void tonghop::Mang2Chieu_sapTangCotCaMang(float a[][COT], int n)
{
	for (int i = 0; i < n; i++)
	{
		Mang2Chieu_sapTang1chieu(a, n, i + 1, TANGCOT);
	}
}




//mang 1 chieu
void tonghop::Mang1Chieu_nhap(int mang[], int soPhanTu)
{
	string ChuoiCout;
	for (int i = 0; i < soPhanTu; i++)
	{
		ChuoiCout = "A[" + to_string(i + 1) + "] =";
		INT_nhap(mang[i], ChuoiCout);
	}
}

void tonghop::Mang1Chieu_xuat(int mang[], int soPhanTu)
{
	for (int i = 0; i < soPhanTu; i++)
	{
		cout << "   " << mang[i];
	}
}


void tonghop::Mang1Chieu_sapMangTang(int mang[], int soPhanTu)
{
	for (int i = 0; i < soPhanTu - 1; i++)
	{
		for (int j = i + 1; j < soPhanTu; j++)
		{
			if (mang[i] > mang[j])
				swap(mang[i], mang[j]);
		}
	}
}

void tonghop::Mang1Chieu_sapMangGiam(int mang[], int soPhanTu)
{
	for (int i = 0; i < soPhanTu - 1; i++)
	{
		for (int j = i + 1; j < soPhanTu; j++)
		{
			if (mang[i] < mang[j])
				swap(mang[i], mang[j]);
		}
	}
}

void tonghop::Mang1Chieu_sapTang_soChan(int mang[], int soPhanTu)
{
	int chan[50], soLuong = 0;
	for (int i = 0; i < soPhanTu; i++)
	{
		if (mang[i] % 2 == 0)
		{
			chan[soLuong] = mang[i];
			soLuong++;
		}
	}
	if (soLuong > 0)
	{
		Mang1Chieu_sapMangTang(chan, soLuong);
		Mang1Chieu_xuat(chan, soLuong);
	}
	else cout << "Khong co so chan trong mang.";
}

void tonghop::Mang1Chieu_sapGiam_soLe(int mang[], int soPhanTu)
{
	int le[50], soLuong = 0;
	for (int i = 0; i < soPhanTu; i++)
	{
		if (mang[i] % 2 != 0)
		{
			le[soLuong] = mang[i];
			soLuong++;
		}
	}
	if (soLuong > 0)
	{
		Mang1Chieu_sapMangGiam(le, soLuong);
		Mang1Chieu_xuat(le, soLuong);
	}
	else cout << "Khong co so le trong mang.";
}


void tonghop::Mang1Chieu_nhap(float mang[], int soPhanTu)
{
	string ChuoiCout;
	for (int i = 0; i < soPhanTu; i++)
	{
		ChuoiCout = "A[" + to_string(i + 1) + "] =";
		FLOAT_nhap(mang[i], ChuoiCout);
	}
}

void tonghop::Mang1Chieu_xuat(float mang[], int soPhanTu)
{
	for (int i = 0; i < soPhanTu; i++)
	{
		cout << "   " << mang[i];
	}
}


void tonghop::Mang1Chieu_sapMangTang(float mang[], int soPhanTu)
{
	for (int i = 0; i < soPhanTu - 1; i++)
	{
		for (int j = i + 1; j < soPhanTu; j++)
		{
			if (mang[i] > mang[j])
				swap(mang[i], mang[j]);
		}
	}
}

void tonghop::Mang1Chieu_sapMangGiam(float mang[], int soPhanTu)
{
	for (int i = 0; i < soPhanTu - 1; i++)
	{
		for (int j = i + 1; j < soPhanTu; j++)
		{
			if (mang[i] < mang[j])
				swap(mang[i], mang[j]);
		}
	}
}





//kiem tra
bool tonghop::laSNT(int num)
{
	if (num <= 1) return false;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0) return false;
	}
	return true;
}

bool tonghop::laSoChinhPhuong(int n)
{
	int kq = sqrt(n);
	if (pow(kq, 2) == n)
		return true;
	else return false;
}

bool tonghop::laSoHoanThien(int n)
{
	int sum = 0;
	if (n < 1) return false;
	for (int i = 1; i < n; i++)
	{
		if (n%i == 0)
			sum += i;
	}
	if (sum == n) return true;
	else return false;
}




//tinh
long tonghop::tinhGiaiThua(int num)
{
	if (num < 0) return -1;
	long long giaTri = 1;
	if (num == 0 || num == 1) return 1;
	else{
		for (int i = 2; i <= num; i++)
		{
			giaTri *= i;
		}
	}
	return giaTri;
}

void tonghop::giaiPhuongTrinhBacNhat(float a, float b)
{
	cout << "\nPhuong Trinh: " << a << "x + " << b << " = 0";
	if (a == 0 && b == 0) cout << "\n\tPhuong Trinh Vo So Nghiem\n";
	else if (a == 0 && b != 0) cout << "\n\tPhuong Trinh Vo Nghiem\n";
	else cout << "\n\tNghiem cua phuong trinh: x = " << -b / a << "\n";

}

void tonghop::giaiPhuongTrinhBacHai(float a, float b, float c)
{
	if (a == 0)
	{
		giaiPhuongTrinhBacNhat(b, c);
	}
	else
	{
		cout << "\nPhuong Trinh: " << a << "x^2 + " << b << "x + "<< c <<" = 0";
		float delta;
		delta = b*b - 4 * a *c;
		if (delta < 0) cout << "\n\tPhuong Trinh Vo Nghiem\n";
		else if (delta == 0) cout << "\n\tPhuong trinh co nghiem kep: x1 = x2 = " << -b / (2 * a) << "\n";
		else cout << "\n\tPhuong trinh co 2 nghiem phan biet: x1 =" << (-b + sqrt(delta)) / (2 * a) << "\tx2 = " << (-b - sqrt(delta)) / (2 * a) << "\n";
	}



}

//-----------------ham phu---------------------
bool tonghop::isINT(string str)
{
	int chieuDaiChuoi = str.length();
	if (str == "")
		return false;
	for (int i = 0; i < chieuDaiChuoi; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return false;
	}
	return true;
}

bool tonghop::isFLOAT(string str)
{
	int chieuDaiChuoi = str.length();
	int demDauCham = 0;
	if (str == "")
		return false;
	if (str[0] == '.' || str[chieuDaiChuoi - 1] == '.')
		return false;
	for (int i = 0; i < chieuDaiChuoi; i++)
	{
		if (str[i] == '.')
		{
			demDauCham++;
			if (demDauCham > 1)
				return false;
		}
		else if (str[i] < '0' || str[i] > '9')
			return false;
	}
	return true;
}