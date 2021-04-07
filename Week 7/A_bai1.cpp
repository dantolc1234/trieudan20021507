#include <iostream>

using namespace std;

void f(int xval)
{
	int x;
	x = xval;
	cout << &x << endl;
}

void g(int yval)
{
	int y;
	cout << &y << endl;
}

int main()
{
	f(7);
	g(11);
	return 0;
}
//Hai biến đều có cùng địa chỉ, có thể là do thông số truyền vào đều được gọi từ main