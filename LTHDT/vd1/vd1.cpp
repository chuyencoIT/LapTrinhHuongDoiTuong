/*#include <stdafx.h>
#include <iostream>
using namespace std;

int main()
{

	return 0;
}*/

#include <stdafx.h>
#include<iostream> 
#include<conio.h> 
#include<stdio.h> 
#include<string.h> 
using namespace std;


class Person { public:    char HT[30];    char NS[30];    char Q[30]; }; 
class Kysu:public Person { public: char NH[30]; int NTN;  void nhap();    void xuat(); }; 
void Kysu::nhap() {  cout<<"Ho ten: ";gets(HT);fflush(stdin);    cout<<"Ngay sinh: ";gets(NS);fflush(stdin);    cout<<"Que quan: ";gets(Q);fflush(stdin);  cout<<"Nganh hoc: ";gets(NH);fflush(stdin);    cout<<"Nam tot nghiep: ";cin>>NTN; }
void Kysu::xuat() {  cout<<"Ho ten: "<<HT<<endl;    cout<<"Ngay sinh: "<<NS<<endl;    cout<<"Que quan: "<<Q<<endl;  cout<<"Nganh hoc: "<<NH<<endl;    cout<<"Nam tot nghiep: "<<NTN<<endl; }
void main() { int i,n; Kysu a[100];  cout<<"n= ";cin>>n;    for(i=0;i<n;i++)    {     cout<<"Ky su thu "<<(i+1)<<": \n";       a[i].nhap();    }    cout<<"Thong tin vua nhap:\n";    for(i=0;i<n;i++)     a[i].xuat();    int Max=a[0].NTN;    for(i=0;i<n;i++)    if(a[i].NTN>Max)     Max=a[i].NTN;    cout<<"Ky su co nam tot nghiep gan day nhat la: \n";    for(i=0;i<n;i++)    if(a[i].NTN==Max)     a[i].xuat(); getch(); }
