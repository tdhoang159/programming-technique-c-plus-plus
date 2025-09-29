#include <iostream>
using namespace std;

void nhapKichThuoc(int& r, int& c)
{
	do
	{
		cout << "Nhap r: ";
		cin >> r;
		if (r <= 0)
			cout << "Nhap sai!\n";
	} while (r <= 0);

	do
	{
		cout << "Nhap c: ";
		cin >> c;
		if (c <= 0)
			cout << "Nhap sai!\n";
	} while (c <= 0);
}

void khoiTao(int**& p, int r, int c)
{
	p = new int* [r];
	for (int i = 0; i < r; i++)
		p[i] = new int[c];

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			p[i][j] = rand() % 100;
}

void xuat(int** p, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
			cout << p[i][j] << "\t";
		cout << endl;
	}

}

void giaiPhong(int**& p, int r, int c)
{
	for (int i = 0; i < r; i++)
		delete[] p[i];
	delete[] p;
}

int congMT(int** a, int** b, int**& tong, int r, int c, int x, int y)
{
	if (r == x && c == y) // kich thuoc phai bang nhau moi duoc cong
	{
		tong = new int* [r];
		for (int i = 0; i < r; i++)
			tong[i] = new int[c];

		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				tong[i][j] = a[i][j] + b[i][j];
		cout << "Mang tong:\n";
		xuat(tong, r, c);
		return 1;
	}
	else
		return 0;
}

int nhanMT(int** a, int** b, int**& tich, int r, int c, int x, int y)
{
	if (c == x) // cot cua A phai bang voi hang cua B moi duoc nhan
	{
		tich = new int* [r]; // hang cua A
		for (int i = 0; i < r; i++)
			tich[i] = new int[y]; // cot cua B

		for (int i = 0; i < r; i++) // hang cua A
			for (int j = 0; j < y; j++) // cot cua B
			{
				tich[i][j] = 0;
				for (int k = 0; k < c; k++) // cot cua A, hang cua B
					tich[i][j] += a[i][k] * b[k][j];
			}
		cout << "Mang tich:\n";
		xuat(tich, r, y);
		return 1;
	}
	else
		return 0;
}

int main()
{
	srand(time(0));
	int** a;
	int** b;	
	int** tong;
	int** tich;
	int r, c, x, y;

	cout << "Mang A:\n";
	nhapKichThuoc(r, c);
	khoiTao(a, r, c);
	xuat(a, r, c);

	cout << "Mang B:\n";
	nhapKichThuoc(x, y);
	khoiTao(b, x, y);
	xuat(b, x, y);
	
	int cong = congMT(a, b, tong, r, c, x, y);
	int nhan = nhanMT(a, b, tich, r, c, x, y);
	
	giaiPhong(a, r, c);
	giaiPhong(b, x, y);

	if (cong == 0)
		cout << "Khong the cong 2 ma tran\n";
	else
		giaiPhong(tong, r, c);

	if (nhan == 0)
		cout << "Khong the nhan 2 ma tran\n";
	else
		giaiPhong(tich, r, y);

	return 0;
}
