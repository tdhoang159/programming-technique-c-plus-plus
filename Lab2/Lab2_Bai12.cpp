#include <iostream>
using namespace std;

int timMin(int a[], int n)
{
	if (n == 1)
		return a[0];
	int min = timMin(a, n - 1);
	return a[n - 1] < min ? a[n - 1] : min;
}

int timMax(int a[], int n)
{
	if (n == 1)
		return a[0];
	int max = timMax(a, n - 1);
	return a[n - 1] > max ? a[n - 1] : max;
}

int main()
{
	int a[] = { 1,2,3,4,5,-5,-4,-3,-2,-1 };
	int b[] = { 36,64,25,75,53,47 };
	cout << "So nho nhat cua a: " << timMin(a, 10) << endl;
	cout << "So nho nhat cua b: " << timMin(b, 6) << endl;
	system("pause");
	return 0;
}