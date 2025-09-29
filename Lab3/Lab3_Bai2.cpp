#include <iostream>
#include <ctime>
using namespace std;

void khoiTao(int a[30])
{
	for (int i = 0; i < 30; i++)
		a[i] = rand() % 10;
}

int main()
{
	srand(time(0));
	int a[30];
	khoiTao(a);
	int* p = a; //  tuong tu p = a[0]

	cout << "Xuat mang theo ky phap do doi:\n";
	for (int i = 0; i < 30; i++)
		cout << *(p + i) << " ";
	cout << endl;

	cout << "Xuat mang theo ky phap chi so:\n";
	for (int i = 0; i < 30; i++)
		cout << p[i] << " ";
	cout << endl;

	delete p;
	return 0;
}