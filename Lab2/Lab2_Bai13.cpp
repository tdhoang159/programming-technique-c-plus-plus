#include <iostream>
using namespace std;

int tichChap(int i, int j) 
{
	if (j == 0 || j == i) // cot 0, duong cheo
		return 1;
	return tichChap(i - 1, j - 1) + tichChap(i - 1, j); // goc tren + goc tren trai
}

void inPascal(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << tichChap(i, j) << "  ";
		cout << endl;
	}
}

int main()
{
	inPascal(5);
	system("pause");
	return 0;
}