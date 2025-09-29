#include<iostream>
#define MAX 100
using namespace std;

void nhapMangDeQuy(int a[MAX], int n, int i = 0){
    if(i == n){
        return;
    }else {
        cout << "Nhap phan tu a[" << i << "]: ";
        cin >> a[i];
        nhapMangDeQuy(a, n, i + 1);
    }
}

void xuatMang(int a[MAX], int n){
    for (int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main(){
    int a[MAX], n;
    cout << "Nhap n: ";
    cin >> n;
    nhapMangDeQuy(a, n);
    xuatMang(a, n);
    system("pause");
    return 0;
}