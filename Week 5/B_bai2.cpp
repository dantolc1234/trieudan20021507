#include <iostream>
#include <iomanip>

using namespace std;

bool eq(int a[], int b[], int n)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i] != b[j]) {return false; break;}
            else return true;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    cout << eq(a,b,n);

    return 0;
}