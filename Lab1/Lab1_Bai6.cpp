#include <iostream>
#include <ctime>
#include "utils.h"
using namespace std;

void khoiTaoMang(int arr[MAX_ROW][MAX_COL], int r, int c)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			arr[i][j] = rand() % 100; // sinh so ngau nhien tu 0 den 99
}

void tinhTongMT(int a[MAX_ROW][MAX_COL], int b[MAX_ROW][MAX_COL], int c[MAX_ROW][MAX_COL], int m, int n, int p, int q)
{
	if (m == p & n == q) // hang A == hang B && cot A == cot B
	{
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				c[i][j] = a[i][j] + b[i][j];
		cout << "Mang tong:\n";
		xuatMang(c, m, n);
	}
	else
		cout << "Khong thoa dieu kien tinh tong\n";
}

void tinhTichMT(int a[MAX_ROW][MAX_COL], int b[MAX_ROW][MAX_COL], int c[MAX_ROW][MAX_COL], int m, int n, int p, int q)
{
	if (n == p) // cot cua A == hang cua B
	{
		for (int i = 0; i < m; i++) // hang cua A
		{
			for (int j = 0; j < q; j++) // cot cua B
			{
				c[i][j] = 0;
				for (int k = 0; k < n; k++) // cot cua A, hang cua B
					c[i][j] += a[i][k] * b[k][j];
			}
		}
		cout << "Mang tich:\n";
		xuatMang(c, m, q);
	}
	else
		cout << "Khong thoa dieu kien tinh tich\n";
}

int main()
{
	// Khoi tao seed cho ham rand() de dam bao moi lan chay se tao ra cac so khac nhau
	srand(time(0));

	int a[MAX_ROW][MAX_COL];
	int b[MAX_ROW][MAX_COL];
	int tong[MAX_ROW][MAX_COL];
	int tich[MAX_ROW][MAX_COL];
	int m, n, p, q;
	nhapGiaTri("m", m, 1, 100);
	nhapGiaTri("n", n, 1, 100);
	nhapGiaTri("p", p, 1, 100);
	nhapGiaTri("q", q, 1, 100);
	khoiTaoMang(a, m, n);
	khoiTaoMang(b, p, q);
	cout << "Mang A:\n";
	xuatMang(a, m, n);
	cout << "Mang B:\n";
	xuatMang(b, p, q);
	tinhTongMT(a, b, tong, m, n, p, q);
	tinhTichMT(a, b, tich, m, n, p, q);
	system("pause");
	return 0;
}