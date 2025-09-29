#include <iostream>
using namespace std;
const int MAX_ROW = 4;
const int MAX_COL = 3;

void nhapMang(int arr[MAX_ROW][MAX_COL])
{
	int i = 0;
	while (i < MAX_ROW)
	{
		int j = 0;
		while (j < MAX_COL)
		{
			cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
			j++;
		}
		i++;
	}
}

void xuatMang(int arr[MAX_ROW][MAX_COL])
{
	int i = 0;
	while (i < 4)
	{
		int j = 0;
		while (j < 3)
		{
			cout << arr[i][j] << "\t";
			j++;
		}
		cout << "\n";
		i++;
	}
}

int main()
{
	int arr[MAX_ROW][MAX_COL];
	nhapMang(arr);
	xuatMang(arr);
	return 0;
}