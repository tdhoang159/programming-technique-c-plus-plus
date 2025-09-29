#include <iostream>
#include <iomanip>
using namespace std;

int tong1(int n)
{
	if (n == 1)
		return 1;
	return tong1(n - 1) + n;
}

int tong2(int n)
{
	if (n == 1)
		return 1;
	return tong2(n - 1) + n * n;
}

double tong3(int n) // kiem tra n la so le o main
{
	if (n == 1)
		return 1;
	return tong3(n - 2) + 1.0 / n;
}

int giaiThua(int n)
{
	if (n <= 1)
		return n;
	return giaiThua(n - 1) * n;
}

int tong4(int n)
{
	if (n == 1)
		return 1;
	return tong4(n - 1) + giaiThua(n);
}

int main()
{
	cout << "S1(4) = " << tong1(4) << endl;
	cout << "S2(4) = " << tong2(4) << endl;
	cout << "S3(5) = " << fixed << setprecision(2) << tong3(5) << endl;
	cout << "S4(4) = " << tong4(4) << endl;
	system("pause");
	return 0;
}