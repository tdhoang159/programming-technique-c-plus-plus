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

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void daoNguocMangDeQuy(int a[MAX], int left, int right){
    if(left >= right){
        return;
    }else{
        swap(a[left], a[right]);
        daoNguocMangDeQuy(a, left + 1, right - 1);
    }
}

int main(){
    int a[MAX], n;
    cout << "Nhap n: ";
    cin >> n;
    nhapMang(a, n);
    xuatMang(a, n);
    daoNguocMangDeQuy(a, 0, n-1);
    xuatMang(a, n);
    system("pause");
    return 0;
}