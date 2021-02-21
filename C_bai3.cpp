#include <iostream>

using namespace std;

int main()
{
    int hang;

    hang = 5; 

    for(int i = 1, k = 0; i <= hang; i++, k = 0){
        for(int j = 1; j <= hang-i; j++){
            cout <<"  "; // in 4 ô trắng từ trái sang (dòng 1)
        }

        while(k != 2*i-1){
            cout << "* "; // in 1 dấu chấm bên trái 4 ô trắng (dòng 1)
            k++;
        }
        cout << endl;
    }

    return 0;
}