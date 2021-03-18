#include <iostream>

using namespace std;

void swapgiatri(int a, int b)
{
    int swap = a;
    a = b;
    b = swap;
    cout << "gia tri cua a = " << a << " " << "gia tri cua b = " << b << endl;
    cout << &a << " " << &b << endl;
}

void swapdiachi(int& a, int& b)
{
    int swap = a;
    a = b;
    b = swap;
    cout << "gia tri cua a = " << a << " " << "gia tri cua b = " << b << endl;
    cout << &a << " " << &b << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << &a << " " << &b << endl;
    swapgiatri(a, b);
    swapdiachi(a, b);

    return 0;
}
// Rõ ràng đối số và tham trị là hai biến độc lập có địa chỉ khác nhau, trong khi đối số và tham biến chính là một biến.