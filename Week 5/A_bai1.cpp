#include <iostream>

using namespace std;

int main()
{
    int a[3];
    char b[3];

    for (int i = 0; i < 3; i++){
        cout << (void*)&a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++){
        cout << (void*)&b[i] << " ";
    }
    cout << endl;

    a[0] = 16;
    b[0] = 04;

    for (int i = 0; i < 3; i++){
        cout << (void*)&a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 3; i++){
        cout << (void*)&b[i] << " ";
    }
    
    return 0;
    // Vị trí các địa chỉ trước và sau khi nhập giá trị của mảng giống nhau.
    // Các biến địa chỉ có vị trí tương đối gần nhau.
}