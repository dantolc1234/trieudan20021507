#include <iostream>

using namespace std;

int count = 0;

void check(int n)
{
    int array[1000];
    count++;
    cout << count << endl;
    check(n);
}

int main()
{
    int n;
    cin >> n;
    check(n);

    return 0;
}
// Với n bất kì, mảng gồm 1000 phần tử thì sau 515 lần hàm đệ quy gây ra tràn bộ nhớ.