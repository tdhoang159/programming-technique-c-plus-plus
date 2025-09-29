#include <iostream>
#include <string>
using namespace std;

struct PhongBan
{
	string maPB;
	string tenPB;

	void nhapPB()
	{
		cout << "Nhap ma PB: ";
		getline(cin, maPB);
		cout << "Nhap ten PB: ";
		getline(cin, tenPB);
	}

	void xuatPB()
	{
		cout << "Ma PB: " << maPB << endl;
		cout << "Ten PB: " << tenPB << endl;
	}
};


int main()
{
	PhongBan pb;
	pb.nhapPB();
	pb.xuatPB();
	system("pause");
	return 0;
}