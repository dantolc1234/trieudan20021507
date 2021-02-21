#include <iostream>

using namespace std;

int main()
{
    int dd, mm, yyyy;
    cout << "Moi nhap ngay/thang/nam: " << endl;
    cin >> dd >> mm >> yyyy;
    int a[100];
    int i = 0;
    cout << "Moi nhap cac so nguyen: ";
    cin >> a[i];
    while (a[i] != 0){
        i++;
        cin >> a[i];
    }

    return 0;
}