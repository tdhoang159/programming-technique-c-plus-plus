#include <iostream>
#include <string>
using namespace std;

bool kiemTraNguyenAm(char c)
{
	c = tolower(c);
	return (c == 'a' || c == 'e' || c == 'o' || c == 'i' || c == 'u');
}

string xoaNguyenAm(string s)
{
	string kq = "";
	for (int i = 0; i < s.length(); i++)
		if (!kiemTraNguyenAm(s[i]))
			kq += s[i];

	return kq;
}

int main()
{
	string s;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	cout << "Chuoi sau khi xoa nguyen am: " << xoaNguyenAm(s) << endl;
	return 0;
}