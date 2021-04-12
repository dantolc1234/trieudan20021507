#include <iostream>
#include <cmath>

using namespace std;

struct check
{
	int a[16];
};
struct Point
{
	int* x = new int;
	int y;
	check c;
};
int main()
{
	Point point;
	int n;
	cin >> n;
	*point.x = n;
    point.y = n;
    Point point2;
    point2 = point;
	cout << point.x << "; " << point2.x << endl;
	cout << point.c.a << "; " << point2.c.a << endl;
	return 0;
}