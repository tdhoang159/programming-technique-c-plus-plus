#include <iostream>
using namespace std;

int chuyen10sang2(int n)
{
	if (n == 0)
		return 0;
	return chuyen10sang2(n / 2) * 10 + n % 2;
}

int main()
{
	cout << "4 = " << chuyen10sang2(4) << endl;
	cout << "10 = " << chuyen10sang2(10) << endl;
	cout << "27 = " << chuyen10sang2(27) << endl;
	cout << "120 = " << chuyen10sang2(120) << endl;
	system("pause");
	return 0;
}