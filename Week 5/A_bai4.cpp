#include <iostream>

using namespace std;

void arr(int array[])
{
    for (int i = 0; i < 4; i++){
        cout << &array[i] << " ";
    }
    cout << endl;
}

void str(string s)
{
    cout << &s << endl;
}

int main()
{
    int array[4] = { 1,2,3,4};
    for (int i = 0; i < 4; i++){
        cout << &array[i] << " ";
    }
    cout << endl;
    arr(array);

    string s;
    cout << &s << endl;
    str(s);
    
    return 0;
}
//mảng được truyền theo cơ chế pass by value
//string được truyền theo cơ chế pass by reference