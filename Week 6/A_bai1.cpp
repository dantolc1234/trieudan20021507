#include <iostream>

using namespace std;

void xuatmang(int f[])
{
   cout << &f << endl; 
   cout << &f[0] << endl;
}

int main()
{
    int f[5] = {1, 2, 3, 4, 5};
    xuatmang(f);
    cout << &f << endl; 
    cout << &f[0] << endl;

    return 0;
}
// địa chỉ của mảng và phần từ đầu tiên trong main giống nhau còn trong hàm thì khác nhau.
// mạng được truyền vào hàm theo cơ chế truyền tham số.