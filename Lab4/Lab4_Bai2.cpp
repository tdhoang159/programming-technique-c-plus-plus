#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	char *s1 = new char[100];
	do
	{
		cout << "Nhap chuoi: ";
		cin.getline(s1, 100);
		if (strchr(s1, ',') == NULL)
			cout << "Nhap lai!\n";
	} while (strchr(s1, ',') == NULL);

	char *s2 = new char[strlen(s1)];
	strcpy(s2, "");

	char *token = strtok(s1, ",");
	while (token != NULL)
	{
		strcat(s2, token);
		token = strtok(NULL, ",");
	}

	cout << s2 << endl;

	delete[] s1;
	delete[] s2;
	system("pause");
	return 0;
}