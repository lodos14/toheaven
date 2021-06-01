/*
   point(포인터) : 메모리를 가르키는 키워드
   - 메모리의 주소값을 저장하는 변수(포인터 변수)
*/


#include<iostream>
using namespace std;

int main() {
	int a = 10; // 일반 변수 선언
	int b = 20;
	int*p = &a; // 포인터 변수 선언

	cout << *p << endl;
	*p = 2;
	cout << "*p = " << *p << endl;
	cout << "a = "<< a << endl;

	p = &b;
	cout << "*p = " << *p << endl;
	cout << "*b = " << p << endl;


	return 0;

}