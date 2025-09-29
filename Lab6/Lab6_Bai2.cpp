#include <iostream>
#include <fstream>
using namespace std;

ifstream inFile;
ofstream outFile;

int main()
{
	// Mo file doc
	inFile.open("BT1.txt", ios::in);

	// Kiem tra mo file thanh cong hay khong?
	if (!inFile.is_open())
	{
		cerr << "Khong the mo file\n";
		return 1;
	}

	// Doc file
	int m;
	inFile >> m;
	cout << m << endl;
	
	// Dong file *quan trong*
	inFile.close();

	system("pause");
	return 0;
}