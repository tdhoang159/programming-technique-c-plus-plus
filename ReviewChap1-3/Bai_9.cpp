#include <iostream>
#include<cmath>
using namespace std;

int he16SangHe10_DeQuy(const string& hex, int index) {
    if (index == hex.length()) return 0;

    char ch = toupper(hex[index]);
    int value;

    if (ch >= '0' && ch <= '9')
        value = ch - '0';
    else if (ch >= 'A' && ch <= 'F')
        value = ch - 'A' + 10;
    else {
        cout << "Ky tu khong hop le: " << ch << endl;
        return 0;
    }

    int mu = hex.length() - index - 1;
    return value * pow(16, mu) + he16SangHe10_DeQuy(hex, index + 1);
}

int main() {
    string hex;
    cout << "Nhap so he 16 (VD: 1A3F): ";
    cin >> hex;

    int ketQua = he16SangHe10_DeQuy(hex, 0);
    cout << "Gia tri he 10: " << ketQua << endl;

    return 0;
}
