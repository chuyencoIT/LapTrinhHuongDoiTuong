#include "MuiGio.h"
#include "windows.h"
#include <iostream>
#include <fstream>
using namespace std;

void docFile(Mui_Gio mangCacNuoc[], int &soLuong);
void xuat(Mui_Gio mangCacNuoc[], int soLuong);
void input_country(int soLuong, int &nuoc, int &hour, int &minite);
void outnput_country(Mui_Gio mangCacNuoc[], int soLuong, int nuoc, int hour, int minite);


int main()
{
	Mui_Gio mangCacNuoc[30];
	int soLuong=0, nuoc, gio, phut, ct;

	docFile(mangCacNuoc, soLuong);
	for (;;)
	{
		system("cls");
		xuat(mangCacNuoc, soLuong);
		input_country(soLuong,nuoc, gio, phut);
		outnput_country(mangCacNuoc, soLuong, nuoc, gio, phut);

		cout << "\n\ncontinue or break? (1/0)";
		cin >> ct;
		if (ct != 1) break;
	}
	

	cout << "\n\n\n\n";
	system("pause");
	return 0;
}


void docFile(Mui_Gio mangCacNuoc[], int &soLuong)
{
	char tn[255], ttp[255], tam[255];
	float mg;
	fstream f;
	f.open("fileMuiGio.txt", ios::in);
	if (f.fail())
	{
		cout << "\nLoi mo file!";
	}
	else
	{
		while (!f.eof())
		{
			f.getline(tn, 255);
			f.getline(ttp, 255);
			f >> mg;
			soLuong++;
			f.getline(tam, 255);
			mangCacNuoc[soLuong].setValue(soLuong, (string)tn, (string)ttp, mg);	
		}
	}
	f.close();
}

void xuat(Mui_Gio mangCacNuoc[], int soLuong)
{
	cout << "\n" << setw(7) << left << "Ma So";
	cout << setw(15) << left << "Ten Nuoc";
	cout << setw(25) << left << "ten Thanh Pho";
	cout << setw(5) << right << "Mui Gio";
	cout << "\n"  << setfill('-') << setw(54) << '-' << setfill(' ');;
	
	for (int i = 1; i <= soLuong; i++)
	{
		mangCacNuoc[i].xuatValue();
	}
}

void input_country(int soLuong, int &nuoc, int &hour, int &minite)
{
	do 
	{
		cout << "\nChon nuoc: ";
		cin >> nuoc;
	} while (nuoc<=0 || nuoc >soLuong);
	do 
	{
		cout << "\tNhap Gio: ";
		cin >> hour;
	} while (hour<0 || hour>24);
	do 
	{
		cout << "\tNhap Phut: ";
		cin >> minite;
	} while (minite<0 || minite>60);
	
}

void outnput_country(Mui_Gio mangCacNuoc[], int soLuong, int nuoc, int hour, int minite)
{
	int nuoc_change;
	float muiGioInput, muiGioOutput;
	do
	{
		cout << "Chon nuoc: ";
		cin >> nuoc_change;
	} while (nuoc_change <= 0 || nuoc_change > soLuong);

	muiGioInput = mangCacNuoc[nuoc].getMuiGio();
	muiGioOutput = mangCacNuoc[nuoc_change].getMuiGio();

	cout << "Tai " << mangCacNuoc[nuoc].getTenNuoc() << ": " << hour << ":";
	if (minite <10) cout << "0" << minite;
	else cout << minite;

	if (muiGioInput > muiGioOutput)
	{
		while (muiGioOutput < muiGioInput)
		{
			hour--;
			if (hour < 0)
			{
				hour = 23;
			}
			muiGioInput--;
		}
		if ((((int)(muiGioInput * 100) % 100) - ((int)(muiGioOutput * 100) % 100)) == 30)
		{
			minite += 30;
			if (minite > 60)
			{
				minite -= 60;
				hour++;
			}

		}
		else if ((((int)(muiGioInput * 100) % 100) - ((int)(muiGioOutput * 100) % 100)) == -30)
		{
			minite -= 30;
			if (minite < 60)
			{
				minite += 60;
				hour--;
			}
		}
		cout << "\t =>Tai " << mangCacNuoc[nuoc_change].getTenNuoc() << ": " << hour << ":";
		if (minite < 10) cout << "0" << minite;
		else cout << minite;
	}
	else
	{
		while (muiGioInput < muiGioOutput)
		{
			hour++;
			if (hour >= 24)
			{
				hour -= 24;
			}
			muiGioInput++;
		}
		if ((((int)(muiGioOutput * 100) % 100) - ((int)(muiGioInput * 100) % 100) ) == 30)
		{
			minite += 30;
			if (minite > 60)
			{
				minite -= 60;
				hour++;
			}
				
		}
		else if ((((int)(muiGioOutput * 100) % 100) - ((int)(muiGioInput * 100) % 100)) == -30)
		{
			minite -= 30;
			if (minite < 60)
			{
				minite += 60;
				hour--;
			}
		}
		cout << "\t =>Tai " << mangCacNuoc[nuoc_change].getTenNuoc() << ": " << hour << ":";
		if(minite <10) cout << "0"<< minite;
		else cout << minite;
	}
}