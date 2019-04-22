#include "Quan_Ly.h"
#include <iomanip>

void CQuan_Ly::menu()
{
	for(;;)
	{
		system("cls");
		int luaChon;
		cout << "\n\t\t========== Quan Ly Danh Sach Hoa Don Tien Dien ==========\n";
		cout << "\t\t| 0. Thoat\n";
		cout << "\t\t| 1. Nhap Khach Hang Viet Nam\n";
		cout << "\t\t| 2. Nhap Khach Hang Nuoc ngoai\n";
		cout << "\t\t| 3. Xuat Khach Hang Viet Nam\n";
		cout << "\t\t| 4. Xuat Khach Hang Nuoc ngoai\n";
		cout << "\t\t| 5. So Luong Khach Hang Tung Loai\n";
		cout << "\t\t| 6. Trung Binh Thanh Tien Cua Nguoi Nuoc Ngoai\n";
		cout << "\n\t\t========================== END ==========================\n";
		cout << "Lua Chon cua ban: ";
		cin >> luaChon;

		CKhach_Hang *a;

		if(luaChon==0) break;
		else if(luaChon == 1)
		{
			a = new CKH_VN;
			a->nhap();
			ds.push_back(a);
		}
		else if(luaChon == 2)
		{
			a =new CKH_NN;
			a->nhap();
			ds.push_back(a);
		}
		else if(luaChon == 3)
		{
			cout << setw(5) << left << "Ma";
			cout << setw(20)<< left << "Ho Ten Khach Hang";
			cout << setw(12) << right << "Ngay ra hd";
			cout << setw(8) << right << "SL";
			cout << setw(8) << right << "Don Gia";
			cout << setw(10) << right << "D_Tuong";
			cout << setw(10) << right << "D_Muc" << endl;

			cout << setfill('-');
			cout << setw(73) << "-";
			cout << setfill(' ');
			
			for(int i=0; i< ds.size(); i++)
			{
				if(ds[i]->get_isVN() == true)
					ds[i]->xuat();
			}
			cout << endl;
			system("pause");
		}
		else if(luaChon == 4)
		{
			cout << setw(5) << left << "Ma";
			cout << setw(20)<< left << "Ho Ten Khach Hang";
			cout << setw(12) << right << "Ngay ra hd";
			cout << setw(8) << right << "SL";
			cout << setw(8) << right << "Don Gia";
			cout << setw(15) << right << "Quoc Tich" << endl;

			cout << setfill('-');
			cout << setw(68) << "-";
			cout << setfill(' ');

			for(int i=0; i< ds.size(); i++)
			{
				if(ds[i]->get_isVN() == false)
					ds[i]->xuat();
			}
			cout << endl;
			system("pause");
		}
		else if(luaChon == 5)
		{
			int slVN=0, slNN=0;
			for(int i=0; i< ds.size(); i++)
			{
				if(ds[i]->get_isVN() == true)
					slVN++;
				else slNN++;
			}
			cout << "So Luong Khach Hang Viet Nam: " << slVN << endl;
			cout << "So Luong Khach Hang Nuoc Ngoai: " << slNN << endl << endl;
			system("pause");
		}
		else if(luaChon == 6)
		{
			int slNN=0;
			long sum=0;
			for(int i=0; i< ds.size(); i++)
			{
				if(ds[i]->get_isVN() == false)
				{
					sum+=ds[i]->tinhTien();
					slNN++;
				}
			}
			cout << "Trung Binh Thanh Tien Cua Nguoi Nuoc Ngoai: " << (sum/(float)slNN) << endl << endl;
			system("pause");
		}
	}


}

