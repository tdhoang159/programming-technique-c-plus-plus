#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;

ifstream inFile;
ofstream outFile;

struct SinhVien
{
    string id;
    string name;
    int namSinh;
    float diem1;
    float diem2;
    float diem3;

    SinhVien()
    {
        id = "Khong co";
        name = "Khong co";
        namSinh = 0;
        diem1 = 0.0;
        diem2 = 0.0;
        diem3 = 0.0;
    }

    SinhVien(string ma, string ten, int namsinh, double d1, double d2, double d3)
    {
        id = ma;
        name = ten;
        namSinh = namsinh;
        diem1 = d1;
        diem2 = d2;
        diem3 = d3;
    }

    void nhapSV()
    {
        cout << "Nhap ma SV: ";
        getline(cin, id);
        cout << "Nhap ten SV: ";
        getline(cin, name);
        cout << "Nhap nam sinh: ";
        cin >> namSinh;
        cout << "Nhap diem mon 1: ";
        cin >> diem1;
        cout << "Nhap diem mon 2: ";
        cin >> diem2;
        cout << "Nhap diem mon 3: ";
        cin >> diem3;
        cin.ignore();
    }

    double tinhDiemTB()
    {
        return (diem1 + diem2 + diem3) / 3;
    }

    void xuatSV()
    {
        cout << id << " - " << name << " - " << namSinh << " - "
             << diem1 << ", " << diem2 << ", " << diem3 << endl;
    }

    void ghiSV()
    {
        outFile << id << " - " << name << " - " << namSinh << " - "
                << diem1 << ", " << diem2 << ", " << diem3 << endl;
    }
};

struct LopHoc
{
    SinhVien sv[40];
    int n = 40;

    void docDuLieu()
    {
        inFile.open("Data.txt", ios::in);
        if (!inFile.is_open())
        {
            cout << "Khong the mo file de doc! " << endl;
            return;
        }

        int soLuong = 0;
        while (!inFile.eof())
        {
            string s;
            getline(inFile, s);
            if (isdigit(s[0]))
            {
                char *dong = new char[s.length() + 1];
                strcpy(dong, s.c_str());

                char *token = strtok(dong, "-");
                char *arr[6];
                int i = 0;
                while (token != NULL)
                {
                    arr[i++] = token;
                    token = strtok(NULL, "-");
                }

                SinhVien tmp(arr[0], arr[1], atoi(arr[2]), atof(arr[3]), atof(arr[4]), atof(arr[5]));
                sv[soLuong] = tmp;
                soLuong++;
            }
        }
        inFile.close();
    }

    void xuatLop()
    {
        for (int i = 0; i < n; i++)
        {
            cout << "================================\n";
            cout << "Sinh vien thu " << i + 1 << ":\n";
            sv[i].xuatSV();
        }
    }

    void findSVByName()
    {
        string ten;
        cout << "Nhap ten sinh vien muon tim: ";
        getline(cin, ten);
        for (int i = 0; i < n; i++)
        {
            if (sv[i].name.find(ten) != string::npos)
            {
                sv[i].xuatSV();
            }
        }
    }

    void xoaSV(){
        string ma;
        cout << "Nhap ma sv muon xoa: ";
        getline(cin, ma);
        for(int i = 0; i < n; i++){
            if(sv[i].id == ma){
                xoa(i);
                cout << "Xoa thanh cong!\n";
                return;
            }
        }
    }

    void xoa(int VT){
        for(int i = VT; i < n-1; i++){
            sv[i] = sv[i+1];
        }
        n--;
    }

    void ghiLop(){
        outFile.open("newSV.txt", ios::out);
        if(!outFile.is_open()){
            cout << "Khong the mo file de ghi!" << endl;
            return;
        }
        for(int i = 0; i < n; i++){
            sv[i].ghiSV();
        }
    }
};

int main()
{
    LopHoc lop1;
    lop1.docDuLieu();
    lop1.xuatLop();
    lop1.xoaSV();
    lop1.ghiLop();
    system("pause");
    return 0;
}