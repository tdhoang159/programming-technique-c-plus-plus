#include<iostream>
#include<ctime>
#include<cstdlib>
#define MAXROW 50
#define MAXCOL 60
using namespace std;

void initRandomMatrix(int a[MAXROW][MAXCOL], int r, int c){
    srand(time(0));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            a[i][j] = rand() % 256;
        }
    }
}

void xuatMaTranChuyenVi(int a[MAXROW][MAXCOL], int r, int c){
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cout << a[j][i] << "\t";
        }
        cout << endl;
    }
}

void xuatMaTranXoay90(int a[MAXROW][MAXCOL], int r, int c){
    for(int i = c-1; i >= 0; i--){
        for(int j = 0; j < r; j++){
            cout << a[j][i] << "\t";
        }
        cout << endl;
    }
}

void xuatMaTranXoay180(int a[MAXROW][MAXCOL], int r, int c){
    for(int i = r-1; i >= 0; i--){
        for(int j = c-1; j >= 0; j--){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void xuatMaTranXoay270(int a[MAXROW][MAXCOL], int r, int c){
    for(int i = 0; i < c; i++){
        for(int j = r-1; j >= 0; j--){
            cout << a[j][i] << "\t";
        }
        cout << endl;
    }
}

void xuatMaTranLatNgang(int a[MAXROW][MAXCOL], int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = c - 1; j >= 0; j--){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void xuatMaTranLatDoc(int a[MAXROW][MAXCOL], int r, int c){
    for(int i = r-1; i >= 0; i--){
        for(int j = 0; j < c; j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void xuatMang(int a[MAXROW][MAXCOL], int r, int c){
    
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(){
    int a[MAXROW][MAXCOL], r, c;
    cout << "Nhap so dong: ";
    cin >> r;
    cout << "Nhap so cot: ";
    cin >> c;
    initRandomMatrix(a, r, c);
    xuatMang(a, r, c);
    cout << "\nMA TRAN CHUYEN VI" << endl;
    xuatMaTranChuyenVi(a, r, c);
    cout << "\nMA TRAN XOAY 90 DO" << endl;
    xuatMaTranXoay90(a, r, c);
    cout << "\nMA TRAN XOAY 180 DO" << endl;
    xuatMaTranXoay180(a, r, c);
    cout << "\nMA TRAN XOAY 270 DO" << endl;
    xuatMaTranXoay270(a, r, c);
    cout << "\nMA TRAN LAT NGANG" << endl;
    xuatMaTranLatNgang(a, r, c);
    cout << "\nMA TRAN LAT DOC" << endl;
    xuatMaTranLatDoc(a, r, c);
    system("pause");
    return 0;
}