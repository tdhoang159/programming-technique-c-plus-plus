#include <iostream>
using namespace std;

int ucln(int a, int b)
{
	if (b == 0)
		return a;
	return ucln(b, a % b);
}

int main()
{
	cout << "ucln cua 2 va 4: " << ucln(2, 4) << endl;
	cout << "ucln cua 27 va 81: " << ucln(27, 81) << endl;
	cout << "ucln cua 113 va 369: " << ucln(113, 369) << endl;
	return 0;
}