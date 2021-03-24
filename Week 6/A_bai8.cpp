#include <iostream>

using namespace std;

int bool[100];
bool A[100];

// void try(int n, int k, int e)
// {
//     for (int i = e; i < n; i++)
//     if (A[i] == true)
//       {
//             A[i] = false;
//             bool[k] = i + 1;
//             cout << "[ ";
//             for (int j = 0; j <= k - 1; j++) cout << bool[j] << ", ";
//             cout << bool[k] << " ]" << endl;
//             try(n, k + 1, i + 1);
//             A[i] = true;
//        }
// }

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 100; i++) A[i] = true;
    try(n, 0, 0);
    return 0;
}