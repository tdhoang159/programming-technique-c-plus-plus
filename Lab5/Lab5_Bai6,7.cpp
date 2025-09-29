#include <iostream>
#include <string>
using namespace std;

struct SanPham
{
	char* maSP;
	string tenSP;
	double donGia;
	int soLuong;

	SanPham()
	{
		maSP = new char[10 + 1];
		tenSP = "";
		donGia = 0;
		soLuong = 0;
	}

	void nhapSP()
	{
		cout << "Nhap ma sp: ";
		cin.getline(maSP, 10);
		cout << "Nhap ten sp: ";
		getline(cin, tenSP);
		cout << "Nhap don gia: ";
		cin >> donGia;
		cout << "Nhap so luong: ";
		cin >> soLuong;
		cin.ignore();
	}

	void xuatSP()
	{
		cout << "Ma sp: " << maSP << endl;
		cout << "Ten sp: " << tenSP << endl;
		cout << "Don gia: " << donGia << endl;
		cout << "So luong: " << soLuong << endl;
	}
};

struct CuaHang
{
	static const int MAX = 30;
	SanPham* sp;
	int n;

	CuaHang()
	{
		do
		{
			cout << "Nhap so luong san pham: ";
			cin >> n;
			cin.ignore();
			if (n < 1 || n > MAX)
				cout << "So luong khong hop le\n";
		} while (n < 1 || n > MAX);
		
		// cap phat mot mang 1 chieu kieu SanPham voi kich thuoc la n
		sp = new SanPham[n]; 
	}

	void nhap()
	{		
		for (int i = 0; i < n; i++)
		{
			cout << "==========================\n";
			cout << "Nhap SP thu " << i + 1 << ":\n";
			sp[i].nhapSP();
		}
	}

	void xuat()
	{
		for (int i = 0; i < n; i++)
		{
			cout << "==========================\n";
			cout << "SP thu " << i + 1 << ":\n";
			sp[i].xuatSP();
		}
	}

	void suaSP()
	{
		char* ma = new char[10 + 1];
		cout << "Nhap ma sp can sua: ";
		cin.getline(ma, 10);
		

		for (int i = 0; i < n; i++)
		{
			if (strcmp(ma, sp[i].maSP) == 0)
			{
				cout << "Sua ten sp: ";
				getline(cin, sp[i].tenSP);
				cout << "Sua don gia: ";
				cin >> sp[i].donGia;
				cout << "Sua so luong ton kho: ";
				cin >> sp[i].soLuong;
				cout << "Sua thanh cong\n";
				cin.ignore();
				break;
			}
		}
	}

	void xoaSP()
	{
		char* ma = new char[10 + 1];
		cout << "Nhap ma sp can xoa: ";
		cin.getline(ma, 10);

		for (int i = 0; i < n; i++)
		{
			if (strcmp(ma, sp[i].maSP) == 0)
				xoa(i);
		}
	}

	void xoa(int vt)
	{
		for (int i = vt; i < n - 1; i++)
			sp[i] = sp[i + 1];
		n--;
	}

	void sapXepTheoSL()
	{
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				if (sp[i].soLuong > sp[j].soLuong)
					swap(sp[i], sp[j]);
	}
};

int main()
{
	CuaHang ch;
	ch.nhap();
	cout << "=========CUA HANG=========\n";
	ch.xuat();
	ch.suaSP();
	cout << "===CUA HANG SAU KHI SUA===\n";	
	ch.xuat();
	ch.xoaSP();
	cout << "===CUA HANG SAU KHI XOA===\n";
	ch.xuat();
	ch.sapXepTheoSL();
	cout << "===CUA HANG SAU KHI XEP===\n";
	ch.xuat();
	system("pause");
	return 0;
}