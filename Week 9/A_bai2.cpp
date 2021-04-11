#include <iostream>

using namespace std;

int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    cout << *p2;
    // Do p2 va p cung tro den 1 vi tri nen khi xoa p thi p2 cung mat du lieu.
    delete p2;

}