/*
 삼항연산자 : c / c++ 만히 갖고 있는 톡특한 연산자
 - if연산자의 모체가 된다.
 - 조건형? 변환값1 : 반환값2;
   조건항이 참이면 반환값1, 거짓이면 반환값2
*/

#include<iostream>
using namespace std;

int main() {
	int num1 = 11;
	int num2 = 10;
	int res;

	res = (num1 < num2) ? num1 : num2;
	cout << " 두 수중 작은수는 " << res << endl;

	return 0;

}