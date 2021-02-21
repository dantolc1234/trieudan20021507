#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double k; 
    cin >> k;
    while(k > 0){
        k = (double) k / 3; 
        if (k < 3) break; 
    }

    cout << "Gia tri cuoi cung cua k la: " << setprecision(3) << k;
    return 0;
}