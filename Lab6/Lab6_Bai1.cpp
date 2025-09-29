#include <iostream>
#include <fstream>
using namespace std;

ifstream inFile;
ofstream outFile;

int main()
{
	int a, b;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	
	// Mo file de ghi
	outFile.open("BT1.txt", ios::out);

	// Kiem tra co mo file thanh cong hay khong ?
	if (!outFile.is_open())
	{
		cerr << "Khong the mo file\n";
		return 1;
	}

	// Ghi xuong file
	outFile << a + b << endl;

	// Dong file *quan trong*
	outFile.close();
	system("pause");
	return 0;
}