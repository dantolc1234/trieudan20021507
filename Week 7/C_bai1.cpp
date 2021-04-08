#include <iostream>

using namespace std;

void reverse(char a[])
{
    int cout = 0;
	while (a[cout] != '\0') cout++;
    char temp[cout];
	for (int i = 0; i < cout; i++)
	{
		 temp[i] = a[cout - 1 - i];
	}
    for (int i = cout - 1; i >= 0; i--)
    {
        cout << temp[i];
    }
}

int main()
{
    char a[100];
    cout << "Moi nhap xau a:";
    fgets(a, 100, stdin);
    reverse(a);
    return 0;
}