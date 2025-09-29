#include <iostream>
using namespace std;

int demChuSo(int n)
{
	if (n < 10)
		return 1;
	return demChuSo(n / 10) + 1;
}

int main()
{
	cout << "0 = " << demChuSo(0) << " so" << endl;
	cout << "123 = " << demChuSo(123) << " so" << endl;
	cout << "45678 = " << demChuSo(45678) << " so" << endl;
	cout << "1234567890 = " << demChuSo(1234567890) << " so" << endl;
	system("pause");
	return 0;
}