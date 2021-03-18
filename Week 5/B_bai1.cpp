#include <iostream>
#include <iomanip>

using namespace std;

bool majority(bool a, bool b, bool c)
{
    return (a + b + c >= 2);
}

int main()
{
    bool a, b, c;
    a = true;
    b = true;
    c = false;

    cout << majority(a, b, c);
    
    return 0;
}