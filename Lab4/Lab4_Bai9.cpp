#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

void layHo(char* s, char* ho)
{
	// lay vi tri cua khoang trang dau tien
	char* khoangTrangDau = strchr(s, ' ');
	if (khoangTrangDau)
	{
		strncpy(ho, s, khoangTrangDau - s);
		ho[khoangTrangDau - s] = '\0';
	}
	else
		strcpy(ho, s);
}

void layTen(char* s, char* ten)
{
	char* khoangTrangCuoi = strrchr(s, ' ');
	if (khoangTrangCuoi)
		strcpy(ten, khoangTrangCuoi + 1);
	else
		strcpy(ten, s);
}

void layTenLot(char* s, char* tenLot)
{
	char* khoangTrangDau = strchr(s, ' ');
	char* khoangTrangCuoi = strrchr(s, ' ');
	if (khoangTrangDau && khoangTrangCuoi && khoangTrangDau != khoangTrangCuoi)
	{
		int len = khoangTrangCuoi - khoangTrangDau - 1;
		strncpy(tenLot, khoangTrangDau + 1, len);
		tenLot[len] = '\0';
	}
	else
		strcpy(tenLot, "");
}

int main()
{
	char* hoTen = new char[100];
	char* ho = new char[100];
	char* tenLot = new char[100];
	char* ten = new char[100];
	cout << "Nhap ho ten: ";
	cin.getline(hoTen, 100);
	
	layHo(hoTen, ho);
	layTenLot(hoTen, tenLot);
	layTen(hoTen, ten);
	cout << ho << endl;
	cout << tenLot << endl;
	cout << ten << endl;
	
	delete[] hoTen;
	delete[] ho;
	delete[] tenLot;
	delete[] ten;
	return 0;
}
