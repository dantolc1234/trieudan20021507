#include <iostream>

using namespace std;

int UCLN(int a, int b)
{
    if (a == b) {return a;}
    else if(a != b){
        if (a > b) {a -= b;}
        if (a < b) {b -= a;}
    }
    return a;
}


int main()
{
    int a, b;
    cin >> a >> b;
    if (UCLN(a, b) == 1) cout << "a va b la 2 so nguyen to cung nhau";
    else cout << "a va b khong phai 2 so nguyen to cung nhau";

    return 0;
}