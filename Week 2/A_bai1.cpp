#include <iostream>

using namespace std;

int main()
{
    int i = 1; 
    int n = 100;
    while (i <= n)
    {
        if(i > 0 && i % 2 == 0) cout << i << " ";
        i++;
    }
    
    return 0;
}