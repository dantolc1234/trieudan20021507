#include <iostream>

using namespace std;

int main()
{
    int soDong;
    
    soDong = 5;
  
    for(int i = 1; i <= soDong; i++){
        for(int j = 1; j < i; j++){
            cout << "  ";
        }
 
        for(int j = 1; j <= (soDong*2 -(2*i-1)); j++){
            cout << "* ";
        }
 
        cout << endl;
    }

    return 0;
}