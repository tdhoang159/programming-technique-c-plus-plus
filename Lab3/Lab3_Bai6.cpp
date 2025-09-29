#include <iostream>
#include <ctime>
using namespace std;

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void khoiTao(int* p, int n)
{
	for (int i = 0; i < n; i++)
		*(p + i) = rand() % 100;
}

void xuat(int* p, int n)
{
	for (int i = 0; i < n; i++)
		cout << *(p + i) << " ";
	cout << endl;
}

void daoNguoc(int* p, int n)
{
	int left = 0;
	int right = n - 1;
	while (left < right)
	{
		swap(*(p + left), *(p + right));
		left++;
		right--;
	}
}

void daoNguoc2(int* p, int left, int right)
{
	if (left >= right)
		return;
	swap(*(p + left), *(p + right));
	daoNguoc2(p, left + 1, right - 1);
}

void daoNguoc3(int* left, int* right)
{
	if (left >= right)
		return;
	swap(*left, *right);
	daoNguoc3(left + 1, right - 1);
}

int main()
{
	srand(time(0));
	int* p = new int[10];
	khoiTao(p, 10);
	cout << "Mang truoc khi dao nguoc:\n";
	xuat(p, 10);
	daoNguoc(p, 10);
	//daoNguoc2(p, 0, 9);
	//daoNguoc3(p, p + 9);
	cout << "Mang sau khi dao nguoc:\n";
	xuat(p, 10);
	delete[] p;
	system("pause");
	return 0;
}