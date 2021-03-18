#include <iostream>

using namespace std;

int main()
{
    int a;
    int* b = new int;
    cout << &a << " " << b << endl;
    b = &a;
    cout << &a << " " << b << endl;

    int c;
    b = &c;
    cout << &c << " " << b << endl;

    return 0;
}
// a, biến  tham chiếu và biến của nó chiếu tới là 2 biến khác nhau trong bộ nhớ.
// b, có thể khai báo một tham chiếu mà chưa chiếu ngay tới nó
// c, có thể chiếu một tham chiếu tới một biến khác với đích ban đầu của nó.