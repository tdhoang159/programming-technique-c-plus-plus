#include <iostream>
#include <string>
using namespace std;

int demTu(string s, string tu) {
    int dem = 0;
    int vt = s.find(tu, 0); 

    while (vt != -1) {         
        bool dauDung = (vt == 0 || s[vt - 1] == ' '); 
        bool cuoiDung = (vt + tu.length() == s.length() || s[vt + tu.length()] == ' ');

        if (dauDung && cuoiDung)
            dem++;

        vt = s.find(tu, vt + 1); 
    }

    return dem;
}

int main()
{
	string s, tu;
	cout << "Nhap chuoi: ";
	getline(cin, s);
    cout << "Nhap tu: ";
    getline(cin, tu);
    cout << "So lan tu " << tu << " xuat hien: " << demTu(s, tu) << endl;
	return 0;
}