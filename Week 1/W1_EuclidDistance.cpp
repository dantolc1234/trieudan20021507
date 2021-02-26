#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2; 
    double space;
    space = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    cout << "space = " << space;
    
    return 0;
}