#include <iostream> 

using namespace std;

int main()
{
    int year;
    cout << "Year = ";
    cin >> year;
    if(year % 4 == 0 && year % 100 != 0) cout << "Day la nam nhuan";
    else cout << "Day khong phai la nam nhuan";

    return 0;
}