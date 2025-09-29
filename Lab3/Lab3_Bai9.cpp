#include <iostream>
using namespace std;

bool kiemTraNT(int n)
{
	if (n < 2)
		return false;
	if (n == 2)
		return true;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

void nhap(int** p, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "p[" << i << "][" << j << "] = ";
			cin >> p[i][j];
		}
	}
}

void xuat(int** p, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << p[i][j] << "\t";
		cout << endl;
	}
}

int tinhTongNT(int** p, int r, int c)
{
	int tong = 0;
	for (int i = 0; i < r; i++)	
		for (int j = 0; j < c; j++)
			if (kiemTraNT(p[i][j]))
				tong += p[i][j];
	return tong;
}

void xuatNT(int** p, int r, int c)
{	
	cout << "Cac so nguyen to trong mang: ";
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (kiemTraNT(p[i][j]))
				cout << p[i][j] << " ";	
	cout << endl;
}

int main()
{
	int r, c;
	do
	{
		cout << "Nhap r: ";
		cin >> r;
		if (r <= 0)
			cout << "Nhap sai!\n";
	} while (r <= 0);

	do
	{
		cout << "Nhap c: ";
		cin >> c;
		if (c <= 0)
			cout << "Nhap sai!\n";
	} while (c <= 0);

	int** p;
	p = new int* [r];
	for (int i = 0; i < r; i++)
		p[i] = new int[c];
	
	nhap(p, r, c);
	xuat(p, r, c);	
	xuatNT(p, r, c);
	cout << "Tong nguyen to trong mang: " << tinhTongNT(p, r, c) << endl;
	
	for (int i = 0; i < r; i++)
		delete[] p[i];
	delete[] p;
	system("pause");
	return 0;
}