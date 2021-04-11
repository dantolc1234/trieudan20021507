#include <iostream>

using namespace std;

const char* concat(const char* s1, const char* s2)
{
	int count = 0;
	while (*(s1 + count) != '\0') count++;
	int n = count;
	count = 0;
	char * s = new char[40];
	while (*(s2 + count) != '\0') count++;
	for (int i = 0; i < n; i++) *(s + i) = *(s1 + i);
	for (int i = 0; i < count; i++) *(s + n + i) = *(s2 + i);
	*(s + n + count) = '\0';
	return s;
}
int main()
{
	char* s1 = new char[20];
	char* s2 = new char[20];
	cin >> s1;
	cin >> s2;
	const char* result = concat(s1, s2);
	cout << result;
	return 0;
}