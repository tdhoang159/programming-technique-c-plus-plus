#include <iostream>
#include <ctime>
using namespace std;

void khoiTao(int* p, int n)
{
	for (int i = 0; i < n; i++)
		*(p + i) = rand() % 10;
}

void xuat(int* p, int n)
{
	for (int i = 0; i < n; i++)
		cout << *(p + i) << " (" << p + i << ") ";
	cout << endl;
}

int* timKiem(int* p, int n, int x)
{
	for (int i = 0; i < n; i++)
		if (*(p + i) == x)
			return p + i;
	return NULL;
}

int* timKiem2(int* p, int n, int x, int i = 0)
{
	if (i == n)
		return NULL;
	if (*(p + i) == x)
		return p + i;
	return timKiem2(p, n, x, i + 1);
}

int* timKiem3(int* p, int n, int x)
{
	if (n == 0)
		return NULL;
	if (*p == x)
		return p;
	return timKiem3(p + 1, n - 1, x);
}

int main()
{
	srand(time(0));
	int* p = new int[20];
	khoiTao(p, 20);
	xuat(p, 20);
	int* vt = timKiem(p, 20, 2); // Tim kiem so 2
	//int* vt = timKiem2(p, 20, 2); 
	//int* vt = timKiem3(p, 20, 2);
	if (vt)
		cout << "Tim thay so 2 o " << vt << endl;
	else
		cout << "Khong tim thay so 2\n";
	delete[] p;
	system("pause");
	return 0;
}