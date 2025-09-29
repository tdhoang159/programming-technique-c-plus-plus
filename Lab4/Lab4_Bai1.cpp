#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void capital(char* s)
{	
	if (isalpha(s[0]))
		s[0] = toupper(s[0]);
	for (int i = 1; i < strlen(s); i++)	
		if (s[i - 1] == ' ' && isalpha(s[i]))
			s[i] = toupper(s[i]);						
}

int main()
{
	char* s1 = new char[100];
	char* s2 = new char[100];	

	cout << "Nhap chuoi 1: ";
	cin.getline(s1, 100);
	cout << "Nhap chuoi 2: ";
	cin.getline(s2, 100);
	if (strlen(s1) > strlen(s2))
		cout << "s1 dai hon s2\n";
	else if (strlen(s1) < strlen(s2))
		cout << "s1 ngan hon s2\n";
	else
		cout << "s1 bang s2\n";

	capital(s1);
	capital(s2);
	cout << s1 << endl;
	cout << s2 << endl;
	
	char* s3 = new char[strlen(s1) + strlen(s2) + 1];
	strcpy(s3, s1);	
	strncat(s3, s2, strlen(s2));
	cout << "Chuoi sau khi ghep: " << s3 << endl;

	delete[] s1;
	delete[] s2;
	delete[] s3;
	system("pause");
	return 0;
}