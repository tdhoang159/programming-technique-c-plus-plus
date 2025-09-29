#include <iostream>
#include <fstream>
using namespace std;

ifstream inFile;
ofstream outFile;

void ghiFile(string tenFile)
{
	int a, b, c;
	cout << "Nhap 3 so nguyen: ";
	cin >> a >> b >> c;
	outFile.open(tenFile, ios::out);
	if (!outFile.is_open())
	{
		cerr << "Khong the mo file\n";
		return;
	}

	outFile << a << " " << b << " " << c;
	outFile.close();
}

void docFile(string tenFile)
{
	inFile.open(tenFile, ios::in);
	if (!inFile.is_open())
	{
		cerr << "Khong the mo file\n";
		return;
	}

	int a, b, c;
	inFile >> a >> b >> c;
	inFile.close();

	cout << a << " " << b << " " << c << endl;
}

int main()
{
	ghiFile("BT8.txt");
	docFile("BT8.txt");
	system("pause");
	return 0;
}