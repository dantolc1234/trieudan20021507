#include <iostream>

using namespace std;

int main()
{
    double n, numb1, numb2, a , i=0, dem = 0;
    cout << "Nhap vao 1 so nguyen duong N bat ki: ";
    cin >> n;
    while(dem != n){
    	cout << "Nhap vao so thu " << dem+1 << ": ";
        cin >> a;

        if(i == 0) {
            numb1=a;
            numb2=a;
        }

        if(numb1<a) numb1=a;
        if(numb2>a) numb2=a;
        i++;
        dem++;
    }

    cout << "So lon nhat trong day n so la: " << numb1 << endl;
    cout << "So nho nhat trong day n so la: " << numb2 << endl;

    return 0;
}