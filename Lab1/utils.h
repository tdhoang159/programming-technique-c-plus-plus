#include <iostream>
#include <string>
using namespace std;
const int MAX_ROW = 100;
const int MAX_COL = 100;

void nhapGiaTri(string s, int& x, int min, int max)
{
	do
	{
		cout << "Nhap " << s << " (" << min << " <= " << s << " <= " << max << "): ";
		cin >> x;
		if (x < min || x > max)
			cout << "Nhap sai!\n";
	} while (x < min || x > max);
}

void nhapMang(int arr[MAX_ROW][MAX_COL], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}
}

void xuatMang(const int arr[MAX_ROW][MAX_COL], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
}