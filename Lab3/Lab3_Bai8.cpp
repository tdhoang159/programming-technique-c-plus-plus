#include <iostream>
using namespace std;

int tichChap(int i, int j)
{
	if (j == 0 || j == i)
		return 1;
	return tichChap(i - 1, j - 1) + tichChap(i - 1, j);
}

void inPascal(int** p, int h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			p[i][j] = tichChap(i, j);
			cout << p[i][j] << "  ";
		}
		cout << endl;
	}
}

int main()
{
	int h;
	do
	{
		cout << "Nhap h: ";
		cin >> h;
		if (h < 1)
			cout << "Nhap sai!\n";
	} while (h < 1);

	int** p = new int* [h];
	for (int i = 0; i < h; i++)
		p[i] = new int[h];

	inPascal(p, h);

	for (int i = 0; i < h; i++)
		delete[] p[i];
	delete[] p;
	return 0;
}