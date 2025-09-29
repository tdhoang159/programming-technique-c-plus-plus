#include <iostream>
using namespace std;

void fibonacci(int* p, int n)
{
	if (n > 0)
		p[0] = 0;
	if (n > 1)
		p[1] = 1;
	for (int i = 2; i < n; i++)
		p[i] = p[i - 1] + p[i - 2];
}

void xuatFibonacci(int* p, int n)
{
	for (int i = 0; i < n; i++)
		cout << *(p + i) << " ";
	cout << endl;
}

int main()
{
	int n;
	do
	{
		cout << "Nhap n >= 1: ";
		cin >> n;
	} while (n < 1);

	int* p = new int[n];
	fibonacci(p, n);
	xuatFibonacci(p, n);
	delete[] p;
	system("pause");
	return 0;
}