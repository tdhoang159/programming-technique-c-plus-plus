#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	ofstream outFile;
	outFile.open("BT7.txt", ios::out);
	if (!outFile.is_open())
	{
		cerr << "Khong the mo file de ghi\n";
		return 1;
	}

	double n;
	cout << "Nhap he so luong: ";
	while (cin >> n)
	{
		if (n == -1)
			break;
		outFile << fixed << setprecision(2) << n << " ";
	}

	outFile.close();
	system("pause");
	return 0;
}