#include <iostream>
#include <stdlib.h>

using namespace std;

int minum; // tạo mìn

void taoMap(int m, int n)
{
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << "*" << " ";
        }
        cout << endl;
    }
}

void taoMin(int m, int n)
{
    int i, j;
    time_t t;
    int r;
    int row, col;
    int iminum = 0;
    srand((unsigned) time(&t));
    while (iminum < minum) {
    r = rand() % ((m + 1) * (n + 1));
    row = (r - 1) / (n + 1);
    col = r - row * (m + 1) - 1;
    }
}

int main()
{
    int m, n, K;
    cin >> m >> n >> K;
    taoMap(m, n);

    int array[m][n];

    return 0;
}