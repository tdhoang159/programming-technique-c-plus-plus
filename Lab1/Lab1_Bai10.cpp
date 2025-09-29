#include <iostream>
#include "utils.h"
using namespace std;

int main()
{
	int arr[MAX_ROW][MAX_COL];
	int n;
	nhapGiaTri("n", n, 2, 10);

	int dem = 1;
	int left = 0, right = n - 1, top = 0, bottom = n - 1;
	while (dem <= n * n) 
	{
		// left to right
		for (int i = left; i <= right; i++)
			arr[top][i] = dem++;
		top++;

		// top to bottom
		for (int i = top; i <= bottom; i++)
			arr[i][right] = dem++;
		right--;

		// right to left
		for (int i = right; i >= left; i--)
			arr[bottom][i] = dem++;
		bottom--;

		// bottom to top
		for (int i = bottom; i >= top; i--)
			arr[i][left] = dem++;
		left++;
	}

	xuatMang(arr, n, n);
	return 0;
}