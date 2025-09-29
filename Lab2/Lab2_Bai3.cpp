#include <iostream>
using namespace std;

int fibonacci(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	// 0, 1, 1, 2, 3, 5, 8,...
	cout << "Fibonacci(3) = " << fibonacci(3) << endl;
	cout << "Fibonacci(4) = " << fibonacci(4) << endl;
	cout << "Fibonacci(5) = " << fibonacci(5) << endl;
	return 0;
}