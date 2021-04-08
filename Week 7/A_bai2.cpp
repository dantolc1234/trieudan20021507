#include <iostream>

using namespace std;

void f(int a[])
{
    for (int i = 0; i < 4;i++) cout << " " << &a[i];
}

int main()
{
    int a[100];
    for(int i = 0; i < 4; i++){
        cout << " " << &a[i];
    }
    cout << endl;
    f(a);
    return 0;
}