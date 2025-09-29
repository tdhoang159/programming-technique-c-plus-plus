#include <iostream>
using namespace std;

int tongChan(int n)
{
	if (n == 0)
		return 0;
	else if ((n % 10) % 2 == 0)
		return tongChan(n / 10) + n % 10;
	return tongChan(n / 10);
}

int tongLe(int n)
{
	if (n == 0)
		return 0;
	else if ((n % 10) % 2 != 0)
		return tongLe(n / 10) + n % 10;
	return tongLe(n / 10);
}

int main()
{
	cout << "Tong chan cua 45678: " << tongChan(45678) << endl;
	cout << "Tong le cua 45678: " << tongLe(45678) << endl;
	return 0;
}