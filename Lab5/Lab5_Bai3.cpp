#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int namHienTai()
{
	time_t t = time(0);
	tm* now = localtime(&t);
	// ngay: now->tm_mday
	// thang: now->tm_mon + 1
	// nam: now->tm_year + 1900
	return now->tm_year + 1900;
}

struct NhanVien
{
	string maNV;
	string tenNV;
	int namLam;
	int namSinh;	

	NhanVien() // ham khoi tao khong tham so
	{
		maNV = "";
		tenNV = "";
		namLam = 0;
		namSinh = 0;
	}

	NhanVien(string ma, string ten, int naml, int nams) // ham khoi tao co tham so
	{
		maNV = ma;
		tenNV = ten;
		namLam = naml;
		namSinh = nams;
	}

	int tuoiNV()
	{
		return namHienTai() - namSinh;
	}

	int thamNien()
	{
		return namHienTai() - namLam;
	}

	void nhapNV()
	{
		cout << "Nhap ma NV: ";
		getline(cin, maNV);
		cout << "Nhap ten NV: ";
		getline(cin, tenNV);
		cout << "Nhap nam vao lam viec: ";
		cin >> namLam;
		cout << "Nhap nam sinh: ";
		cin >> namSinh;
		cin.ignore();
	}

	void xuatNV()
	{
		cout << "Ma NV: " << maNV << endl;
		cout << "Ten NV: " << tenNV << endl;
		cout << "Nam vao lam viec: " << namLam << endl;
		cout << "Nam sinh: " << namSinh << endl;
		cout << "Tham nien: " << thamNien() << endl;
		cout << "Tuoi: " << tuoiNV() << endl;
	}
};


int main()
{
	NhanVien nv;
	nv.nhapNV();	
	nv.xuatNV();
	cout << "Nam hien tai: " << namHienTai() << endl;
	system("pause");
	return 0;
}