#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream inFile;
ofstream outFile;
 
int main()
{
	outFile.open("BT3.txt", ios::out);
	if (!outFile.is_open())
	{
		cerr << "Khong the mo file de ghi\n";
		return 1;
	}

	int a, b, c;
	cout << "Nhap 3 so nguyen: ";
	cin >> a >> b >> c;
	outFile << a << '#' << b << '#' << c;
	outFile.close();

	inFile.open("BT3.txt", ios::in);
	if (!inFile.is_open())
	{
		cerr << "Khong the mo file de ghi\n";
		return 1;
	}

	string A, B, C;
	getline(inFile, A, '#');
	getline(inFile, B, '#');
	getline(inFile, C);

	a = stoi(A);
	b = stoi(B);
	c = stoi(C);
	cout << a << " " << b << " " << c << endl;
	cout << "Trung binh: " << static_cast<double>((a + b + c)) / 3 << endl;

	inFile.close();
	system("pause");
	return 0;
}