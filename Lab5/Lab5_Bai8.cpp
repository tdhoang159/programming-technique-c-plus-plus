#include <iostream>
using namespace std;

struct MaTran
{
	int r, c;
	int** p;

	MaTran() // ham khoi tao
	{
		cout << "Nhap so hang: ";
		cin >> r;
		cout << "Nhap so cot: ";
		cin >> c;

		// cap phat dong mang 2 chieu
		p = new  int* [r];
		for (int i = 0; i < r; i++)
			p[i] = new int[c];
	}


	~MaTran() // ham huy
	{
		for (int i = 0; i < r; i++)
			delete[] p[i];
		delete[] p;
	}

	void khoiTao()
	{
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				p[i][j] = rand() % 1000 + 1;
	}

	void xuat()
	{
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
				cout << p[i][j] << "\t";
			cout << endl;
		}
	}

	bool kiemTraDX(int n, int tmp, int sdn = 0)
	{
		if (tmp == 0)
			return n == sdn;
		return kiemTraDX(n, tmp / 10, sdn * 10 + n % 10);
	}

	int tongDX()
	{
		int tong = 0;
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				if (kiemTraDX(p[i][j], p[i][j]))
				{
					cout << p[i][j] << " ";
					tong += p[i][j];
				}
		cout << endl;
		return tong;
	}
};

int main()
{
	MaTran m;
	m.khoiTao();
	m.xuat();
	cout << "Tong so doi xung cua ma tran: " << m.tongDX() << endl;
	system("pause");
	return 0;
}