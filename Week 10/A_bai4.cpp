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
    point.x = 16;
    point.y = 4;
    cout << &point.x << ";" << &point.y << endl;
    cout << &point;
    return 0;
    // Địa chỉ của struct point trùng với địa chỉ của trường đầu tiên trong point.
}