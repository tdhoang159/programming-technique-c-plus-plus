#include <iostream>
using namespace std;

class GPG
{
private:
	int gio, phut, giay;

public:

	GPG()
	{
		gio = 0;
		phut = 0;
		giay = 0;
	}

	void nhap()
	{
		cout << "Nhap gio phut giay: ";
		cin >> gio >> phut >> giay;
	}

	void xuat()
	{
		cout << gio << ":" << phut << ":" << giay << endl;
	}

	int chuyenThanhGiay()
	{
		return gio * 3600 + phut * 60 + giay;
	}

	int tinhKhoangCach(GPG g)
	{
		return abs(chuyenThanhGiay() - g.chuyenThanhGiay());
	}
};

int main()
{
	GPG g1, g2;
	cout << "Nhap thoi diem 1:\n";
	g1.nhap();
	cout << "Nhap thoi diem 2:\n";
	g2.nhap();
	cout << "Khoang cach giua thoi diem 1 va 2: " << g1.tinhKhoangCach(g2) << endl;
	system("pause");
	return 0;
}