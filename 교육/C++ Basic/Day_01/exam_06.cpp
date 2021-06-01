/*
 함수 오버로딩(Function Overloading)
 - 동일한 이름의 함수를 중복해서 정의하는 것
 - 조건 : 매개변수의 개수가 다르거나 자료형이 달라야 한다.
 - 함수를 호줄할 때 함수의 이름과 매개변수의 정보까지 참조해서
*/

#include<iostream>
using namespace std;

int function() {
	return 10;
}

int function(int a) {
	return a;
}

int function(int a, int b) {
	return a + b;
}

float function(float a) {
	return a;
}

int main() {
	cout << function() << endl; // 함수 호출
	cout << function(10, 20) << endl;
	cout << function(3.1f) << endl;

	return 0;
}