#include <iostream>
#include <fstream>
using namespace std;

ifstream inFile;

int main()
{	
	inFile.open("BT4.txt", ios::in);
	if (!inFile.is_open())
	{
		cerr << "Khong the mo file de doc\n";
		return 1;
	}

	int dem = 0;	
	while (!inFile.eof())
	{
		char c = '\0';
		inFile >> c;
		if (isalnum(c))
			dem++;
	}

	cout << "So ky tu trong file: " << dem << endl;
	inFile.close();
	system("pause");
	return 0;
}