#include <iostream>

using namespace std;

double H(int N) {
    if(N == 1) return 1.0;
    return H(N) + 1.0/N;
}

int main()
{
    int N = 5; 
    H(5);

    return 0;
}
//