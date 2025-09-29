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
	int* p = new int;
	int* q = new int;
	cout << "Nhap gia tri cua p: ";
	cin >> *p;
	cout << "Nhap gia tri cua q: ";
	cin >> *q;
		
	cout << "UCLN cua p va q: " << ucln(*p, *q) << endl;
	delete p;
	delete q;
	return 0;
}