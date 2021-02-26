  
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
        //in so ky tu sao
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        //xuong dong ke tiep
        cout << endl;
    }
	return 0;
}