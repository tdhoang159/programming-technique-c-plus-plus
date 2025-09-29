#include<iostream>
#define MAX 100
using namespace std;

void nhapMang(int a[MAX][MAX], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Nhap a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
}

int tongHang(int a[MAX][MAX], int n, int r){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[r][i];
    }
    return sum;
}

int tichHang(int a[MAX][MAX], int n, int r){
    int tich = 1;
    for(int i = 0; i < n; i++){
        tich *= a[r][i];
    }
    return tich;
}

int tongCot(int a[MAX][MAX], int n, int c){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i][c];
    }
    return sum;
}

int tichCot(int a[MAX][MAX], int n, int c){
    int tich = 1;
    for(int i = 0; i < n; i++){
        tich *= a[i][c];
    }
    return tich;
}

pair<int, int> findPositionOfMax(int a[MAX][MAX], int n){
    int maxValue = a[0][0];
    pair<int, int> position = {0, 0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > maxValue){
                maxValue = a[i][j];
                position = {i, j};
            }
        }
    }
    return position;
}

pair<int, int> findPositionOfMin(int a[MAX][MAX], int n){
    int minValue = a[0][0];
    pair<int, int> position = {0, 0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] < minValue){
                minValue = a[i][j];
                position = {i, j};
            }
        }
    }
    return position;
}

bool isDoiXung(int a[MAX][MAX], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != a[j][i]){
                return false;
            }
        }
    }
    return true;
}

void xuatMang(int a[MAX][MAX], int n){
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int main(){
    int a[MAX][MAX], n, r, c;
    cout << "Nhap n: ";
    cin >> n;

    nhapMang(a, n);
    xuatMang(a, n);

    cout << "Nhap hang: ";
    cin >> r;
    cout << "Nhap cot: ";
    cin >> c;

    cout << "Tong cot thu " << c << " la: " << tongCot(a, n, c) << endl;
    cout << "Tich cot thu " << c << " la: " << tichCot(a, n, c) << endl;
    cout << "Tong dong thu " << r << " la: " << tongHang(a, n, r) << endl;
    cout << "Tich dong thu " << r << " la: " << tichHang(a, n, r) << endl;

    pair <int, int> positionOfMax = findPositionOfMax(a, n);
    cout << "Vi tri cua phan tu lon nhat la: a[" <<  positionOfMax.first << "][" << positionOfMax.second << "]" << endl;

    pair <int, int> positionOfMin = findPositionOfMin(a, n);
    cout << "Vi tri cua phan tu be nhat la: a[" <<  positionOfMin.first << "][" << positionOfMin.second << "]" << endl;

    if(isDoiXung(a, n)){
        cout << "Ma tran doi xung!" << endl;
    }else {
        cout << "Ma tran khong doi xung !!" << endl;
    }
    system("pause");
    return 0;
}