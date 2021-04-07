#include <iostream>

using namespace std;

int main()
{
	char a[4] = "abc";
	for (char* cp = a; (*cp) != '\0'; cp += 1) {
		cout << (void*)cp << " : " << (*cp) << endl;
	}
	return 0;
}
// a. các địa chỉ của biến a cách nhau 1 giá trị.
// b. kiểu int có giá trị bằng 4
// c. kiểu double có giá trị bằng 8
// d. khoảng cách giữa địa chỉ các con trỏ tăng lên 1 đơn vị.