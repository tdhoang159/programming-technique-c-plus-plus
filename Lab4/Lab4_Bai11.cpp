#include <iostream>
#include <string>
using namespace std;

int main()
{
	string ho, tenLot, ten;
	cout << "Nhap ho: ";
	getline(cin, ho);
	cout << "Nhap ten lot: ";
	getline(cin, tenLot);
	cout << "Nhap ten: ";
	getline(cin, ten);
	cout << "Ho ten: " << ho + " " + tenLot + " " + ten << endl;
	return 0;
}