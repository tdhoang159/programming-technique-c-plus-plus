#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream inFile;
ofstream outFile;

struct SinhVien
{
	string maSV;
	string tenSV;
	int namSinh;

	void nhapSV()
	{
		cout << "Nhap ma SV: ";
		getline(cin, maSV);
		cout << "Nhap ten SV: ";
		getline(cin, tenSV);
		cout << "Nhap nam sinh: ";
		cin >> namSinh;
		cin.ignore();
	}

	void xuatSV()
	{
		cout << "Ma SV: " << maSV << endl;
		cout << "Ten SV: " << tenSV << endl;
		cout << "Nam sinh: " << namSinh << endl;
	}

	void ghiSV()
	{
		outFile << maSV << ", " << tenSV << ", " << namSinh << endl;
	}
};

struct LopHoc
{
	SinhVien* sv;
	int n;

	LopHoc()
	{
		do
		{
			cout << "Nhap so luong sinh vien: ";
			cin >> n;
			if (n > 10)
				cout << "Toi da 10 sinh vien\n";
		} while (n > 10);
		cin.ignore();
		sv = new SinhVien[n];
	}

	~LopHoc()
	{
		delete[] sv;
	}

	void nhapLop()
	{
		for (int i = 0; i < n; i++)
		{
			cout << "============================\n";
			cout << "Nhap sv thu " << i + 1 << ":\n";
			sv[i].nhapSV();
		}
	}

	void xuatLop()
	{
		for (int i = 0; i < n; i++)
		{
			cout << "============================\n";
			cout << "SV thu " << i + 1 << ":\n";
			sv[i].xuatSV();
		}
	}

	void ghiLop()
	{
		for (int i = 0; i < n; i++)
		{
			sv[i].ghiSV();
		}
	}
};

int main()
{
	outFile.open("BT10.txt", ios::out);
	if (!outFile.is_open())
	{
		cerr << "Khong the mo file de ghi\n";
		return 1;
	}

	LopHoc lop1;
	lop1.nhapLop();
	lop1.xuatLop();
	lop1.ghiLop();

	outFile.close();

	inFile.open("BT10.txt", ios::in);
	if (!inFile.is_open())
	{
		cerr << "Khong the mo file de doc\n";
		return 1;
	}

	string ma;
	cout << "Nhap ma sv: ";
	getline(cin, ma);

	while (!inFile.eof())
	{
		string tmp;
		getline(inFile, tmp);
		if (tmp.find(ma) != -1)
			cout << tmp << endl;
	}
	
	system("pause");
	return 0;
}
