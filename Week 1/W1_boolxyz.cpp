#include <iostream>

using namespace std; 

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    bool b = (x > y && y > z || x < y && y < z);
    if (b) cout << "True";
    else cout << "False";
    
    return 0;
}