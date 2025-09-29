#include<iostream>
#include<cmath>
using namespace std;

bool isNguyenTo(int n, int uocSo = 2){
    if(n < 2){
        return false;
    }
    if(uocSo > sqrt(n)){
        return true;
    }
    if(n % uocSo == 0){
        return false;
    }
    return isNguyenTo(n, uocSo + 1);
}
int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    bool result = isNguyenTo(n);
    cout << result << endl;
    system("pause");
    return 0;
}