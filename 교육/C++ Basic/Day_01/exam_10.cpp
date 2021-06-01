/*
  const의 위치와 의미 그리고 사용법
  - const(=constant) : 상수, 변하지 않는 수(고정 수)

*/

#include<iostream>
using namespace std;

int main() {
	// const int num = 10;
	int const num = 10;

	// num = 20;   이렇게 못함
	cout << num << endl;

	return 0;
}