#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
    cout << n;
	int* check = &n;
	delete check;
	cout << n;
	return 0;
    // Vung nho cua bien dia phuong cung bi xoa di khien du lieu that thoat.
}