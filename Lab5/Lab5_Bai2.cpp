#include <iostream>
using namespace std;

struct PhanSo
{
	int tuSo;
	int mauSo;

	PhanSo()
	{
		tuSo = 0;
		mauSo = 1;
	}

	PhanSo(int ts, int ms)
	{
		if (ms == 0)
			throw invalid_argument("Mau so khong duoc la 0");
		tuSo = ts;
		mauSo = ms;
	}

	void nhap()
	{
		do
		{
			cout << "Nhap tu so: ";
			cin >> tuSo;
			cout << "Nhap mau so: ";
			cin >> mauSo;
			if (mauSo == 0)
				cout << "Mau so khong duoc la 0\n";
		} while (mauSo == 0);
	}

	void xuat()
	{
		cout << tuSo << "/" << mauSo << endl;
	}

	int ucln(int a, int b)
	{
		if (b == 0)
			return a;
		return ucln(b, a % b);
	}

	PhanSo rutGon()
	{
		int u = ucln(tuSo, mauSo);
		return PhanSo(tuSo / u, mauSo / u);
	}

	PhanSo nhan(PhanSo ps)
	{
		int ts = tuSo * ps.tuSo;
		int ms = mauSo * ps.mauSo;
		PhanSo kq(ts, ms);		
		return kq.rutGon();
	}

	PhanSo cong(PhanSo ps)
	{		
		int ts = tuSo * ps.mauSo + ps.tuSo * mauSo;
		int ms = mauSo * ps.mauSo;
		PhanSo kq(ts, ms);
		return kq.rutGon();
	}

	PhanSo tru(PhanSo ps)
	{		
		int ts = tuSo * ps.mauSo - ps.tuSo * mauSo;
		int ms = mauSo * ps.mauSo;
		PhanSo kq(ts, ms);
		return kq.rutGon();
	}

	PhanSo chia(PhanSo ps)
	{		
		int ts = tuSo * ps.mauSo;
		int ms = mauSo * ps.tuSo;
		PhanSo kq(ts, ms);
		return kq.rutGon();
	}	
};

int main()
{
	try
	{
		PhanSo ps1, ps2;
		cout << "Nhap phan so 1:\n";
		ps1.nhap();
		cout << "Nhap phan so 2:\n";
		ps2.nhap();
		ps1.xuat();
		ps2.xuat();
		PhanSo cong = ps1.cong(ps2);
		PhanSo nhan = ps1.nhan(ps2);
		PhanSo tru = ps1.tru(ps2);
		PhanSo chia = ps1.chia(ps2);
		cong.xuat();
		nhan.xuat();
		tru.xuat();
		chia.xuat();
	}
	catch (exception& e)
	{
		cerr << "Loi: " << e.what() << endl;
	}

	system("pause");
	return 0;
}


