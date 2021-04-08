#include <iostream>

using namespace std;

int check1, check2;

int count_even(int* f, int n)
{
	int cout = 0;
	for (int i = check1; i <= check2; i++)
		if (f[i] % 2 == 0) cout++;
	return cout;
}

int main()
{
	int n;
	cin >> n;
	int* a = new int[n + 1];
	for (int i = 1; i <= n; i++) cin >> a[i];
	check1 = 1; check2 = 5;
	cout << count_even(a, n) << endl;
	check1 = n - 5 + 1;
	check2 = n;
	cout << count_even(a, n) << endl;

	return 0;
}