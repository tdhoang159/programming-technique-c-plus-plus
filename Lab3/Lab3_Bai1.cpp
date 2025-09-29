#include <iostream>
using namespace std;

int main()
{
	int x, y;
	int* p;
	p = &x;
	*p = 80; // tuong tu x = 80
	cout << "Dia chi cua bien x: " << &x << endl;
	cout << "Dia chi cua con tro p: " << p << endl;
	cout << "Gia tri cua bien ma p tro den: " << *p << endl;
	cout << "Gia tri cua bien x: " << x << endl;
	cout << "Day chinh la gia tri ma p luu tru.\n";
	delete p;
	return 0;
}