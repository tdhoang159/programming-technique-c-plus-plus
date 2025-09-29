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

int timViTriMinDeQuy(int a[MAX], int n, int i = 0){
    if(i == n-1){
        return i;
    }else {
        int vtMinConLai = timViTriMinDeQuy(a, n, i + 1);
        return (a[i] < a[vtMinConLai])? i : vtMinConLai;
    }
}

int main(){
    int a[MAX], n;
    cout << "Nhap n: ";
    cin >> n;
    nhapMang(a, n);
    xuatMang(a, n);
    cout << "Vi tri phan tu be nhat mang la: a[" << timViTriMinDeQuy(a, n) << "]" << endl;
    system("pause");
    return 0;
}