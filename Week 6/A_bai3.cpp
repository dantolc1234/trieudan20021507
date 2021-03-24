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
// Tràn bộ nhớ do không thực hiện được 1 lần, không thể đi tới tầng tiếp theo và điều kiện thoát chưa đủ để thoát.