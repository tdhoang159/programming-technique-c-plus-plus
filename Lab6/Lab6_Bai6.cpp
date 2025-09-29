#include <iostream>
#include <fstream>
using namespace std;

ifstream inFile;
ofstream outFile;

int main()
{
	inFile.open("BT4.txt", ios::in);
	if (!inFile.is_open())
	{
		cerr << "Khong the mo file de doc\n";
		return 1;
	}

	outFile.open("BT6.txt", ios::out);
	if (!outFile.is_open())
	{
		cerr << "Khong the mo file de ghi\n";
		return 1;
	}

	// Vi bai nay file doc va ghi la 2 file khac nhau nen co the doc va ghi cung mot luc
	while (!inFile.eof())
	{
		char c = '\0';
		inFile >> c;		
		char tmp = tolower(c);
		if (tmp == 'a' || tmp == 'e' || tmp == 'u' || tmp == 'i' || tmp == 'o')
			outFile << c << " ";
	}
	
	inFile.close();
	outFile.close();

	system("pause");
	return 0;
}