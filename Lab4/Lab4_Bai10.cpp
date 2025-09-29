#include <iostream>
#include <string>
using namespace std;

int main()
{
	char* ngay = new char[3];
	char* thang = new char[3];
	char* nam = new char[5];
	cout << "Nhap thang ngay nam (MM-DD-YYYY): ";
	cin.getline(thang, 3, '-');
	cin.getline(ngay, 3, '-');
	cin.getline(nam, 5);
	int d = atoi(ngay);
	int m = atoi(thang);
	int y = atoi(nam);
	
	string thangTrongNam[] = { "", "January", "Febuary", "March", "April", "May",
	"June", "July", "August", "September", "Octocber", "November", "December" };

	cout << thangTrongNam[m] << " " << d << ", " << 1900 + y << endl;

	delete[] ngay;
	delete[] thang;
	delete[] nam;
	system("pause");
	return 0;
}