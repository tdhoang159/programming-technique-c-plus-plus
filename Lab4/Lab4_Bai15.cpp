#include <iostream>
#include <string>
using namespace std;

int main()
{
	int vt;
	string s1, s2;
	cout << "Nhap s1: ";
	getline(cin, s1);
	cout << "Nhap s2: ";
	getline(cin, s2);

	do
	{
		cout << "Nhap vi tri: ";
		cin >> vt;
		if (vt < 0 || vt > s1.length() - 1)
			cout << "Nhap lai!\n";
	} while (vt < 0 || vt > s1.length() - 1);

	s1 = s1.insert(vt, s2);
	cout << "Chuoi sau khi chen: " << s1 << endl;
	return 0;
}