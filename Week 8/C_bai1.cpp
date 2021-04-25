#include <iostream>
#include <stdio.h>

using namespace std;

void reverse(char a[])
{
    int count = 0;
	while (a[count] != '\0') count++;
    char * temp = new char[count + 1];
    //char temp[count + 1];
	for (int i = 0; i < count; i++)
	{
		 *(temp + i) = a[count - 1 - i];
	}
	temp[count] = '\0';
	for(int i = 0; i < count; i++){
		cout << *(temp + i);
	}
}
void delete_char(char a[], char c)
{
	int count = 0;
	while (a[count] != '\0') count++;
	for(int i = 0; i < count; i++){
		if(a[i] != c) cout << a[i];
	}
}
 void pad_right(char * s, int n)
{
 	int count = 0;
 	while (*(s + count) != '\0') count++;
 	if (count < n) {
		for (int i = count - 1; i <= n; i++) 
			*(s + i) = '_'; 
		*(s + n) = '\0';	
	}
 	cout << s;
}	
void truncate(char a[], int n)
{	
	int count = 0;
	while (a[count] != '\0') count++;
	if(count > n) {for (int i = 0; i < n; i++) {
		cout << a[i];
		}
	}
}
bool is_palindrome(char a[])
{
	int count = 0;
	while(a[count] != '\0') count++;
	char * temp = new char[count + 1];
	for(int i = 0; i < count; i++){
		*(temp + i) = a[i];
	}
	temp[count] = '\0';
	for(int i = 0; i < count; i++) {
		for(int j = count - 1; i >= 0; i--){
		if(a[i] != *(temp + j)) return false;
		else return true;
		}
	}
}
void trim_left(char a[])
{
	int count;
	while(a[count] != '\0') count++;
	for(int i = 0; i < count; i++){
		if(a[i] != '_') cout << a[i];
	}
}

int main()
{
    char a[100];
	char * s = a;
    char c = 'a';
    cout << "Moi nhap xau a:";
    fgets(a, 100, stdin); // lay ca dau enter, nen dung ham getline.
	reverse(a);
    cout << endl;
    delete_char(a, c);
    cout << endl;
    pad_right(s, 15);
	cout << endl;
	truncate(a, 10);
	cout << endl;
	if(is_palindrome(a)) cout << "Xau tren la xau doi xung";
	else cout << "Xau tren khong doi xung";
	trim_left(a);

    return 0;
}