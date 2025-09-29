#include <iostream>
#include "utils.h"
using namespace std;

double tinhTrungBinh(const int arr[MAX_ROW][MAX_COL], int r, int c)
{
	int tong = 0;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			tong += arr[i][j];
	return tong * 1.0 / (r * c);
}

pair<int, int> timKiem(const int arr[MAX_ROW][MAX_COL], int r, int c, int x)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (arr[i][j] == x)
				return { i, j };
	return { -1, -1 };
}

void swap(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

void hoanDoi(int arr[MAX_ROW][MAX_COL], int r, int c, int x, int y)
{
	pair<int, int> vtX = timKiem(arr, r, c, x);
	pair<int, int> vtY = timKiem(arr, r, c, y);
	
	if (vtX.first == -1 || vtY.first == -1)
		cout << "Khong the hoan doi!\n";
	else
	{
		swap(arr[vtX.first][vtX.second], arr[vtY.first][vtY.second]);
		cout << "Mang sau khi hoan doi:\n";
		xuatMang(arr, r, c);
	}	
}

void tinhTichCot(const int arr[MAX_ROW][MAX_COL], int r, int c)
{
	int cot;
	nhapGiaTri("cot can tinh tich", cot, 0, c - 1);
	int tich = 1;
	for (int i = 0; i < r; i++)
		tich *= arr[i][cot];
	cout << "Tich cua cot " << cot << ": " << tich << endl;
}

int main()
{
	int arr[MAX_ROW][MAX_COL];
	int r, c;
	nhapGiaTri("hang", r, 1, 100);
	nhapGiaTri("cot", c, 1, 100);
	nhapMang(arr, r, c);
	xuatMang(arr, r, c);
	cout << "Trung binh cua mang: " << tinhTrungBinh(arr, r, c) << endl;
	tinhTichCot(arr, r, c);
	hoanDoi(arr, r, c, 1, 4);	
	system("pause");
	return 0;
}