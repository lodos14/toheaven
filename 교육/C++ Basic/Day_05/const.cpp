/*

const(= constant, 상수) : 값을 상수로 선언한다.
- 값을 변경할 수 없도록 한다.

*/

#include<iostream>
using namespace std;

int main() {
	int value1 = 5, value2 = 11;

	 const int* ptr = & value1;   

	//value1 = 10;
	// *ptr = 10;   값을 바꿀려면 value1에다가 직접 담아야함

	ptr = &value2;
	

	cout << value1 << " : " << *ptr << endl;
	

	return 0;

}