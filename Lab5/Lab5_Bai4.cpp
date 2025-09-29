#include <iostream>
#include <string>
using namespace std;

struct SinhVien
{
	string maSV;
	string tenSV;
	string diaChi;
	int namSinh;
	double toan;
	double van;
	double anh;

	SinhVien()
	{
		maSV = "";
		tenSV = "";
		diaChi = "";
		namSinh = 0;
		toan = 0;
		van = 0;
		anh = 0;
	}

	double diemTB()
	{
		return ((toan + van) * 2 + anh) / 5;
	}

	string xepLoai()
	{
		double d = diemTB();
		if (d >= 8)
			return "Gioi";
		else if (d >= 6.5)
			return "Kha";
		else if (d >= 5)
			return "TB";
		else
			return "Duoi TB";
	}

	void nhapSV()
	{	
		cout << "Nhap ma SV: ";
		getline(cin, maSV);
		cout << "Nhap ten SV: ";
		getline(cin, tenSV);
		cout << "Nhap dia chi: ";
		getline(cin, diaChi);
		cout << "Nhap nam sinh: ";
		cin >> namSinh;
		cout << "Nhap diem toan: ";
		cin >> toan;
		cout << "Nhap diem van: ";
		cin >> van;
		cout << "Nhap diem anh: ";
		cin >> anh;
		cin.ignore();
	}

	void xuatSV()
	{
		cout << "Ma SV: " << maSV << endl;
		cout << "Ten SV: " << tenSV << endl;
		cout << "Dia chi: " << diaChi << endl;
		cout << "Nam sinh: " << namSinh << endl;
		cout << "Diem toan: " << toan << endl;
		cout << "Diem van: " << van << endl;
		cout << "Diem anh: " << anh << endl;
		cout << "Diem TB: " << diemTB() << endl;
		cout << "Xep loai: " << xepLoai() << endl;
	}
};

struct LopHoc
{
	static const int MAX = 45; // so luong toi da
	SinhVien sv[MAX];
	int n; // so luong thuc te

	LopHoc()
	{
		cout << "Nhap so luong sinh vien: ";
		cin >> n;
		cin.ignore();
	}

	LopHoc(int sl)
	{
		n = sl;
	}

	void nhapLop()
	{
		for (int i = 0; i < n; i++)
		{
			cout << "============================\n";
			cout << "Nhap SV thu " << i + 1 << ":\n";
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

	void xuatSVtheoSTT()
	{
		int stt;
		cout << "Nhap so thu tu: ";
		cin >> stt;
		stt--;
		sv[stt].xuatSV();
	}
};

int main()
{
	LopHoc lop1;
	lop1.nhapLop();
	lop1.xuatLop();
	lop1.xuatSVtheoSTT();
	system("pause");
	return 0;
}