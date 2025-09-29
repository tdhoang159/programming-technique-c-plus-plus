#include <iostream>
using namespace std;

void nhap(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap p[" << i << "] = ";
		cin >> p[i];
	}
}

void xuat(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(p + i) << " (" << p + i << ") ";
	}
	cout << endl;
}

void xuatLe(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		int tmp = *(p + i);
		if (tmp % 2 != 0)
			cout << tmp << " ";
	}
	cout << endl;
}

int* timMax(int* p, int n)
{
	int* max = p;
	for (int i = 0; i < n; i++)
		if (*(p + i) > *max)
			max = p + i;
	return max;
}

int main()
{
	srand(time(0));
	int n;
	do
	{
		cout << "Nhap n >= 1:";
		cin >> n;
	} while (n < 1);

	int* p = new int[n];
	nhap(p, n);
	xuat(p, n);
	xuatLe(p, n);	
	cout << "Gia tri lon nhat: " << *timMax(p, n) << endl;
	cout << "Dia chi cua gia tri lon nhat: " << timMax(p, n) << endl;
	delete[] p;
	system("pause");
	return 0;
}