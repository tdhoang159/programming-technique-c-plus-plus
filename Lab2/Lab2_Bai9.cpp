#include <iostream>
using namespace std;

// Cach 1
int chuyen2sang10(int n, int mu = 0)
{
	if (n == 0)
		return 0;
	return chuyen2sang10(n / 10, mu + 1) + (n % 10) * pow(2, mu);
}

// Cach 2 - Don gian hon
int chuyen2sang10_2(int n)
{
	if (n == 0)
		return 0;
	return chuyen2sang10_2(n / 10) * 2 + n % 10;
}

int main()
{
	cout << "101 = " << chuyen2sang10(101) << endl;
	cout << "1110 = " << chuyen2sang10(1110) << endl;
	cout << "11011 = " << chuyen2sang10_2(11011) << endl;
	cout << "110011 = " << chuyen2sang10_2(110011) << endl;
	system("pause");
	return 0;
}