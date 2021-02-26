#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int cp;
    do{
    cout << "nhap vao ban phim 1 so nguyen duong: ";
    cin >> cp;
    } while(cp <= 0);

    if(sqrt(cp) * sqrt(cp) == cp) cout << "So da nhap la so chinh phuong";
    else cout << "So da nhap khong phai la so chinh phuong";

    return 0;
}