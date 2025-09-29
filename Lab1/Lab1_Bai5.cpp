#include <iostream>
#include "utils.h"
using namespace std;
const int MAX = 100;

int tinhTongDCChinh(const int arr[][MAX], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)	
		tong += arr[i][i];
	return tong;
}

int tinhTongDCPhu(const int arr[][MAX], int n)
{
	int tong = 0;	
	for (int i = 0; i < n; i++)
		tong += arr[i][n - 1 - i];
	return tong;
}

int main()
{
	int arr[MAX][MAX];
	int n;
	nhapGiaTri("n", n, 1, 100);
	nhapMang(arr, n, n);
	xuatMang(arr, n, n);
	cout << "Tong duong cheo chinh: " << tinhTongDCChinh(arr, n) << endl;
	cout << "Tong duong cheo phu: " << tinhTongDCPhu(arr, n) << endl;
	return 0;
}