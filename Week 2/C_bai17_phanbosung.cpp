#include <iostream>

using namespace std;

int main()
{
    double d1, d2, d3, d4, d5;
    cout << "Nhap diem mon 1: ";
    cin >> d1;
    cout << "Nhap diem mon 2: ";
    cin >> d2;
    cout << "Nhap diem mon 3: ";
    cin >> d3;
    cout << "Nhap diem mon 4: ";
    cin >> d4;
    cout << "Nhap diem mon 5: ";
    cin >> d5;
    double tb;
    tb = (d1 + d2 + d3 + d4 + d5) / 5;
    cout << "Diem trung binh 5 mon se la: ";
    cout << tb;

    return 0;
}