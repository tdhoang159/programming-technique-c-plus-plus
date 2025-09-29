#include <iostream>
using namespace std;

int tong(int a[], int n)
{
	if (n == 1)
		return a[0];
	return tong(a, n - 1) + a[n - 1];
}

int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 36,64,25,75,53,47 };
	cout << "Tong cua a: " << tong(a, 5) << endl;
	cout << "Tong cua b: " << tong(b, 6) << endl;
	return 0;
}