#include <iostream>

using namespace std; 

struct Point
{
    int x;
    int y;
};
void thamtri(struct Point point)
{
    cout << "(" << &point.x << ", " << &point.y << ")";
}
void thamtrieu(struct Point* point)
{
     cout << "(" << &point->x << ", " << &point->y << ")";
}

int main()
{
    Point point;
    cin >> point.x >> point.y;
    cout << "(" << &point.x << ", " << &point.y << ")";
    thamtri(point);
    cout << endl;
    thamtrieu(&point);
    return 0;
}