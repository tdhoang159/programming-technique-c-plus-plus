#include<iostream>
#define MAX 100
using namespace std;

void nhapMang(int a[MAX], int n){
    for(int i = 0; i < n; i++){
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void xuatMang(int a[MAX], int n){
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int timMaxDeQuy(int a[MAX], int n, int i = 0){
    if(i == n-1){
        return a[0];
    }else {
        int maxConLai = timMaxDeQuy(a, n, i + 1);
        return (a[i] > maxConLai)?a[i]:maxConLai;
    }
}

int main(){
    int a[MAX], n;
    cout << "Nhap n: ";
    cin >> n;
    nhapMang(a, n);
    xuatMang(a, n);
    cout << "Phan tu lon nhat mang la: " << timMaxDeQuy(a, n) << endl;
    system("pause");
    return 0;
}