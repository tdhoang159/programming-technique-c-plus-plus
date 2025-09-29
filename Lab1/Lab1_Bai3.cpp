#include <iostream>
#include "utils.h"
using namespace std;

int tinhTong(const int arr[MAX_ROW][MAX_COL], int r, int c)
{
	int tong = 0;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)	
			tong += arr[i][j];		
	return tong;
}

int timMin(const int arr[MAX_ROW][MAX_COL], int r, int c)
{
	int min = arr[0][0];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (arr[i][j] < min)
				min = arr[i][j];
	return min;
}

void timVTMin(const int arr[MAX_ROW][MAX_COL], int r, int c)
{
	int hang = 0, cot = 0;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (arr[i][j] < arr[hang][cot])
			{
				hang = i;
				cot = j;
			}				
	cout << "So nho nhat o hang " << hang << ", cot " << cot << endl;
}

int timMax(const int arr[MAX_ROW][MAX_COL], int r, int c)
{
	int max = arr[0][0];
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (arr[i][j] > max)
				max = arr[i][j];
	return max;
}

pair<int, int> timVTMax(const int arr[MAX_ROW][MAX_COL], int r, int c)
{
	int hang = 0, cot = 0;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (arr[i][j] > arr[hang][cot])
			{
				hang = i;
				cot = j;
			}
	return { hang, cot };
}

int main()
{
	int arr[MAX_ROW][MAX_COL];
	int r, c;
	nhapGiaTri("hang", r, 1, 10); // Xem them utils.h
	nhapGiaTri("cot", c, 1, 15); // Xem them utils.h
	nhapMang(arr, r, c); // Xem them utils.h
	xuatMang(arr, r, c); // Xem them utils.h
	cout << "Tong cua mang: " << tinhTong(arr, r, c) << endl;
	cout << "So nho nhat cua mang: " << timMin(arr, r, c) << endl;
	timVTMin(arr, r, c);
	cout << "So lon nhat cua mang: " << timMax(arr, r, c) << endl;
	pair<int, int> max = timVTMax(arr, r, c);
	cout << "So lon nhat o hang " << max.first << ", cot " << max.second << endl;
	
	return 0;
}