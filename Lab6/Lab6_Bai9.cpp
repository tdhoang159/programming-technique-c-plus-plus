#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream inFile;
ofstream outFile;

string nhapChuoi()
{
	string s;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	return s;
}

void ghiFile(string tenFile, string s)
{	
	outFile.open(tenFile, ios::out);
	if (!outFile.is_open())
	{
		cerr << "Khong the mo file\n";
		return;
	}

	outFile << s;
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
	
	string s;
	getline(inFile, s);
	inFile.close();

	cout << s << endl;
}

int soSanh(string s1, string s2)
{
	return strcmp(s1.c_str(), s2.c_str());
}

string noiChuoi(string s1, string s2)
{
	return s1 + s2;
}

int demNguyenAm(string s)
{
	int dem = 0;
	for (int i = 0; i < s.length(); i++)
	{
		char c = s[i];
		if (c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o')
			dem++;
	}
	return dem;
}

int demTu(string s)
{
	int dem = 0;
	for (int i = 0; i < s.length(); i++)
		if (isalpha(s[i]) && (isspace(s[i + 1]) || s[i + 1] == '\0'))
			dem++;
	return dem;
}

int main()
{
	string s = nhapChuoi();
	ghiFile("BT9.txt", s);
	docFile("BT9.txt");
	system("pause");
	return 0;
}