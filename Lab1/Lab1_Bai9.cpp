#include <iostream>
#include "utils.h"
using namespace std;

int main()
{
	int arr[MAX_ROW][MAX_COL];
	int n;
	nhapGiaTri("n", n, 2, 10);
	
	int dem = 1;
	for (int j = 0; j < n; j++)
	{	
		if (j % 2 == 0)
			for (int i = 0; i < n; i++)
				arr[i][j] = dem++;
		else
			for (int i = n - 1; i >= 0; i--)
				arr[i][j] = dem++;
	}

	xuatMang(arr, n, n);
	return 0;
}