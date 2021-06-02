#include<iostream>
using namespace std;

void func() { // void : retunr 값이 없음

	cout << "첫번째 함수입니다.\n";
}

float func2() {

	return 3.14f; // 실수(float, double - 기본형)
}

int main() { // int  -> return 뒤 자료형
	// 선언문 : 변수나 상수의 자료형을 선언해주는 문장
	// python - 동적타이핑
	// c, c++, java - 정적타이핑
	int first, second, res;

	// 입력문
	cout << "두 개의 정수를 입력 = ";
	cin >> first >> second;

	// 처리문
	res = first + second;

	// 출력문
	cout << first << " + " << second << " = " << res;
	

	return 0; // 시스템을 종료한다.
}
