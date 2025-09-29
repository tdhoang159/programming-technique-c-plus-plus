#include<iostream>
#include<ctime>
#include<cmath>
#include<cstdlib>
using namespace std;

bool isNguyenTo(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void initRandomMangDong(int** p, int r, int c){
    srand(time(0));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            p[i][j] = rand() % 10;
        }
    }
}

void xuatMangDong(int** p, int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << p[i][j] << "\t";
        }
        cout << endl;
    }
}


int main(){
    int** p;
    int r, c;
    cout << "Nhap hang: ";
    cin >> r;
    cout << "Nhap cot: ";
    cin >> c;
    p = new int* [r];
    for(int i = 0; i < r; i++){
        p[i] = new int[c];
    }
    initRandomMangDong(p, r, c);
    xuatMangDong(p, r, c);
    for(int i = 0; i < r; i++){
        delete[] p[i];
    }
    delete[] p;
    system("pause");
    return 0;
}