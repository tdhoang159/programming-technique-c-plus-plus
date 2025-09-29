#include <iostream>
using namespace std;

void chuyenHe16DeQuy(int n) {
    if (n == 0) return;

    chuyenHe16DeQuy(n / 16);

    int du = n % 16;
    if (du < 10)
        cout << du;
    else
        cout << char('A' + (du - 10));
}

int main() {
    int n;
    cout << "Nhap so nguyen khong am: ";
    cin >> n;

    if (n == 0) {
        cout << "He 16: 0" << endl;
    } else {
        cout << "He 16: ";
        chuyenHe16DeQuy(n);
        cout << endl;
    }

    return 0;
}
