#include <iostream>

using namespace std; 

int main()
{
    int a, b, c; 
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    if(a == b && b == c) cout << "True";
    else cout << "False";

    return 0;
}