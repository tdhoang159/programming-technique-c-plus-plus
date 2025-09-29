#include<iostream>
#define MAX 100
using namespace std;

void nhapMang(int a[MAX], int n){
    for(int i = 0; i < n; i++){
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}

void xuatMangDeQuy(int a[MAX], int n, int i = 0){
    if(i == n){
        cout << endl;
        return;
    }else{
        cout << a[i] << "\t";
        xuatMangDeQuy(a, n, i+1);
    }
}

int main(){
    int a[MAX], n;
    cout << "Nhap n: ";
    cin >> n;
    nhapMang(a, n);
    xuatMangDeQuy(a, n);
    system("pause");
    return 0;
}