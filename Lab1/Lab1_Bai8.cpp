#include <iostream>
#include "utils.h"
using namespace std;

void khoiTaoMang(int arr[MAX_ROW][MAX_COL], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = rand() % 100; // sinh so ngau nhien tu 0 den 99
}

void tinhTongMT(int a[MAX_ROW][MAX_COL], int b[MAX_ROW][MAX_COL], int c[MAX_ROW][MAX_COL], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)		
			c[i][j] = a[i][j] + b[i][j];		
}

void tinhTichMT(int a[MAX_ROW][MAX_COL], int b[MAX_ROW][MAX_COL], int c[MAX_ROW][MAX_COL], int n)
{
	for (int i = 0; i < n; i++) // hang cua A
		for (int j = 0; j < n; j++) // cot cua B
		{
			c[i][j] = 0;
			for (int k = 0; k < n; k++) // cot cua A, hang cua B
				c[i][j] += a[i][k] * b[k][j];
		}
}

int main()
{	
	srand(time(0)); // Khoi tao seed cho ham rand() de moi lan chay chuong trinh se ngau nhien ra cac so khac
	int a[MAX_ROW][MAX_COL];
	int b[MAX_ROW][MAX_COL];
	int tong[MAX_ROW][MAX_COL];
	int tich[MAX_ROW][MAX_COL];
	int n;
	nhapGiaTri("n", n, 0, 100);
	khoiTaoMang(a, n);
	khoiTaoMang(b, n);
	cout << "Mang A:\n";
	xuatMang(a, n, n);
	cout << "Mang B:\n";
	xuatMang(b, n, n);
	cout << "Tong cua A va B:\n";
	tinhTongMT(a, b, tong, n);
	xuatMang(tong, n, n);
	cout << "Tich cua A va B:\n";
	tinhTichMT(a, b, tich, n);
	xuatMang(tich, n, n);
	return 0;
}