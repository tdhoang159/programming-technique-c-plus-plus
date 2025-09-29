#include <iostream>
using namespace std;

int giaiThua(int n)
{
	if (n <= 1)
		return n;
	return giaiThua(n - 1) * n;
}

int main()
{
	cout << "1! = " << giaiThua(1) << endl;	
	cout << "3! = " << giaiThua(3) << endl;
	cout << "5! = " << giaiThua(5) << endl;
	system("pause");
	return 0;
}