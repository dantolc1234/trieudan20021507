#include <iostream>
#include <stdlib.h>

using namespace std; 

int main()
{
    int N;
    cout << "Moi nhap N: ";
    cin >> N;
    int M = rand();
    while(1>0)
    {
        if(M < N) {break;}
        else M = rand();
        
    }

    cout << M;
}