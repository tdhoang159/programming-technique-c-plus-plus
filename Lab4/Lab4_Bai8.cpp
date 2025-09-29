#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	char* s1 = new char[100];
	cout << "Nhap ho ten: ";
	cin.getline(s1, 100);

	char* token = strtok(s1, " ");
	while (token != NULL)
	{
		cout << token << endl;
		token = strtok(NULL, " ");
	}	

	delete[] s1;
	system("pause");
	return 0;
}