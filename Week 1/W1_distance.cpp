#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; 

int main()
{
    int x, y;
    cout << "Moi nhap toa do (x,y): " << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y; 
    double distance; 
    distance = sqrt((x * x) + ( y * y));
    cout <<"Khoang cach den goc toa do la: " << setprecision(3)  << distance; 

    return 0;
}