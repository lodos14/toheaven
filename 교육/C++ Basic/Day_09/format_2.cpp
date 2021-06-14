/*
포맷 함수
- int width(int minWidth) : 출력되는 필드의 최소너비
- char fill(char cFill) : cFill 문자로 빈칸을 채운다
- int precision(int np) : 출력숫자의 유효숫자자리수 np 설정
  정수와 소수점 이하의 수의 자리르 모두 포함하고 소수점을 제외
*/

#include<iostream>
using namespace std;

int main() {
	cout.width(10); // 출력되는 값의 너비가 10칸으로 지정
	cout << "Hello" << endl; // 우측맞춤
	cout.width(5);
	cout << 12 << endl; // 우측맞춤

	cout.fill('^');
	cout.width(10); // 출력되는 값의 너비가 10칸으로 지정	
	cout << "Hello" << endl; // 우측맞춤
	cout.width(5);
	cout << 12 << endl; // 우측맞춤

	cout.precision(5); // 유효자릿수 5칸
	cout << 11.0 / 3.0 << endl; // 3.6667

	return 0;
}