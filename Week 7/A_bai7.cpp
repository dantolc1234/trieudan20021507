#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	int cout = 0;
	int check;
	do
	{
		check = a.find(b);
		if (check >= 0)
		{
			cout++;
			a.erase(check, b.length());
		}
	} while (check >= 0);
	cout << cout;

	return 0;
}