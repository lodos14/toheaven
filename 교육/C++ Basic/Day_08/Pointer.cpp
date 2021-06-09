/*

	포인터(Pointer) : 주소를 가리킨다.
	포인터변수
	포인터 연산자 : *(간접, 직접, 값), &(참조, 주소)

*/

#include<iostream>
using namespace std;

int main() {

	int a = 10; // 정수형 변수
	int* p = &a;

	cout << "a = " << a << endl;
	cout << "a주소 = " << &a << endl;

	cout << "a = " << *p << endl;
	cout << "a주소 = " << p << endl;
	

	return 0;
}