#include <iostream>
using namespace std;

struct NTN
{
	int ngay;
	int thang;
	int nam;
	
	NTN()
	{
		ngay = 1;
		thang = 1;
		nam = 1900;
	}

	void nhap()
	{		
		cout << "Nhap ngay: ";
		cin >> ngay;
		cout << "Nhap thang: ";
		cin >> thang;
		cout << "Nhap nam: ";
		cin >> nam;		
	}

	void xuat()
	{
		cout << ngay << "/" << thang << "/" << nam << endl;
	}
};

struct Sach
{
	char* tenSach;
	char* tacGia;
	NTN ngayXB;

	Sach()
	{
		tenSach = new char[20 + 1];
		tacGia = new char[20 + 1];
		ngayXB = NTN();
	}

	void nhapSach()
	{		
		cout << "Nhap ten sach: ";		
		cin.getline(tenSach, 20);
		cout << "Nhap tac gia: ";
		cin.getline(tacGia, 20);
		cout << "Nhap ngay xuat ban: " << endl;
		ngayXB.nhap();
		cin.ignore();
	}

	void xuatSach()
	{
		cout << "Ten sach: " << tenSach << endl;
		cout << "Tac gia: " << tacGia << endl;
		cout << "Ngay xuat ban: ";
		ngayXB.xuat();
	}
};

struct ThuVien
{
	static const int MAX = 50; // so luong toi da
	Sach s[MAX];
	int n; // so luong thuc te

	ThuVien()
	{
		cout << "Nhap so luong sach: ";
		cin >> n;
		cin.ignore();
	}

	ThuVien(int sl)
	{
		n = sl;
	}

	void nhap()
	{
		for (int i = 0; i < n; i++)
		{
			cout << "============================\n";
			cout << "Nhap sach thu " << i + 1 << ":\n";
			s[i].nhapSach();
		}
	}

	void xuat()
	{
		for (int i = 0; i < n; i++)
		{
			cout << "============================\n";
			cout << "Sach thu " << i + 1 << ":\n";
			s[i].xuatSach();
		}
	}

	void xuatTheoTacGia(string ten)
	{
		for (int i = 0; i < n; i++)
		{
			if (s[i].tacGia == ten)
				s[i].xuatSach();
		}
	}
};

int main()
{
	ThuVien tv;
	tv.nhap();
	tv.xuat();
	tv.xuatTheoTacGia("Tran Dung");
	system("pause");
	return 0;
}