#include <iostream>

using namespace std;

double H(int N) {
    if(N == 1) return 0.0;
    return H(N - 1) + 1.0/N;
}

int main()
{
    int N = 5000;
    H(N);

    return 0;
}
// hàm đệ quy quá nhiều lần làm tràn bộ nhớ