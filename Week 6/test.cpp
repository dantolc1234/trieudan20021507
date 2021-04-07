#include <iostream>
#include<string.h>

using namespace std;

int main()
{
   char str[25];
   int i;
   cin >> str;
   for(i = 0; i <= strlen(str); i++){
        if(str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        else str[i] = str[i] - 32;
   }
   cout << str;
    
}