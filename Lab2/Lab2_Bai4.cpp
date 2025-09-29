#include <iostream>
using namespace std;

double luyThua(int x, int n)
{
	if (n == 0)
		return 1;	
	if (n > 0)
		return luyThua(x, n - 1) * x;
	return 1.0 / luyThua(x, -n);
}

int main()
{	
	cout << "2^5 = " << luyThua(2, 5) << endl;	
	cout << "4^3 = " << luyThua(4, 3) << endl;
	cout << "10^-2 = " << luyThua(10, -2) << endl;
	system("pause");
	return 0;
}