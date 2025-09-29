#include <iostream>
using namespace std;

int daoNguoc(int n, int sdn = 0)
{
	if (n == 0)
		return sdn;
	return daoNguoc(n / 10, sdn * 10 + n % 10);
}

int main()
{
	cout << "123 = " << daoNguoc(123) << endl;
	cout << "45678 = " << daoNguoc(45678) << endl;
	cout << "12343215 = " << daoNguoc(12343215) << endl;
	return 0;
}