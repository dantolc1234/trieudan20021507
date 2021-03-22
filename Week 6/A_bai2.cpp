#include <iostream>

using namespace std;

double H(int N) {
        return H(N-1) + 1.0/N;
}

int main()
{
    int N = 4;
    H(N);    

    return 0;
}
// hàm đệ quy này th