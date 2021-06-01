/*
 전역변수와 지역변수 
 scope 연산자(소유연산자, ::, ~꺼)
 std::
*/

#include<iostream>
using namespace std;

int a = 10; // 전역변수

namespace BBB {
	int a = 20;
}

int main() {
	int a = 100; //지역변수

	cout << "지역변수 =" << a << endl;
	cout << "전역변수 =" << ::a << endl; 
	cout << "이름공간 BBB.a = " << BBB::a << endl;
	return 0;
}