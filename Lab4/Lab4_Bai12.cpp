#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
	string s;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	reverse(s.begin(), s.end());
	cout << "Chuoi sau khi dao nguoc: " << s << endl;
	return 0;
}