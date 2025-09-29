#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

bool kiemTraDX(char* s)
{
	char* left = s;
	char* right = s + strlen(s) - 1;
	while (left < right)
	{
		if (tolower(*left) != tolower(*right))
			return false;
		left++;
		right--;
	}
	return true;
}

int main()
{
	char* s = new char[100];	
	cout << "Nhap chuoi: ";
	cin.getline(s, 100);	

	if (kiemTraDX(s))
		cout << "Chuoi palindrome\n";
	else
		cout << "Khong phai chuoi palindrome\n";

	delete[] s;
	system("pause");
	return 0;
}