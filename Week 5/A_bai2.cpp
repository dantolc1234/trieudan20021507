#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 1) return 1;
    else
    {
        cout <<" n =" << n << "at" << &n << endl;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n = 4;
    
    factorial(n);

    return 0;
}
// Các giá trị của hàm đệ quy được lưu trữ ở các ô gần nhau