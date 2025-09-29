#include <iostream>
#include "utils.h"
using namespace std;

void tinhTongHang(const int arr[MAX_ROW][MAX_COL], int r, int c)
{
	int hang;
	nhapGiaTri("hang tinh tong", hang, 0, r - 1);
	int tong = 0;	
	for (int i = 0; i < c; i++)
		tong += arr[hang][i];
	cout << "Tong cua hang " << hang << ": " << tong << endl;
}

void tinhTongCot(const int arr[MAX_ROW][MAX_COL], int r, int c)
{
	int cot;
	nhapGiaTri("cot tinh tong", cot, 0, c - 1);
	int tong = 0;
	for (int i = 0; i < r; i++)
		tong += arr[i][cot];
	cout << "Tong cua cot " << cot << ": " << tong << endl;
}

void timKiem(const int arr[MAX_ROW][MAX_COL], int r, int c)
{
	int x;
	cout << "Nhap x can tim: ";
	cin >> x;
	int dem = 0;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (arr[i][j] == x)
			{
				dem++;
				cout << "Tim thay " << x << " tai dong " << i << ", cot " << j << endl;
			}
	if (dem == 0)
		cout << "Khong tim thay " << x << endl;
	else
		cout << "Tim thay " << x << ": " << dem << " lan.\n";
}

int main()
{
	int arr[MAX_ROW][MAX_COL];
	int r, c;
	nhapGiaTri("hang", r, 1, 5);
	nhapGiaTri("cot", c, 1, 6);
	nhapMang(arr, r, c);
	xuatMang(arr, r, c);
	tinhTongHang(arr, r, c);
	tinhTongCot(arr, r, c);
	timKiem(arr, r, c);
	return 0;
}