#include <iostream>
#include <fstream>
using namespace std;

ofstream outFile;

int main()
{
	char* s = new char[20];
	cout << "Nhap chuoi ky tu: ";
	cin.getline(s, 20);
	
	outFile.open("BT4.txt", ios::out);
	if (!outFile.is_open())
	{
		cerr << "Khong the mo file de ghi\n";
		return 1;
	}

	for (int i = 0; i < strlen(s); i++)
	{
		s[i] = toupper(s[i]);
		outFile << s[i] << endl;
	}

	outFile.close();
	system("pause");
	return 0;
}