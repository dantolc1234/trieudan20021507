#include <iostream>

using namespace std; 

struct Point
{
    int x;
    int y;
};

int main()
{
    Point point;
    cin >> point.x >> point.y;
    cout << "(" << point.x << ", " << point.y << ")";
    return 0;
}