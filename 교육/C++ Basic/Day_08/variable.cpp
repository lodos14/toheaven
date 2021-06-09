/*

변수의 유효범위 : 변수의 소멸시점
유형 : 지역변수와 전역변수

*/

#include<iostream>
using namespace std;

int g = 20; // 전역변수  초기화 하지 않으면 자동으로 0할당 지역변수는 초기화 해줘야함

int add(int x, int y){ //전역함수
	int z = 0;
	/*
	int x = a, int y = b;
	*/
	cout << "지역변수 z = " << z << endl;
	cout << "전역변수 g = " << g << endl;


	return x + y;

}

int main() {

	int a, b, sum; // 지역변수

	cout << "두 개의 정수 입력 = ";
	cin >> a >> b;
	sum = a + b;

	cout << "sum = " << sum << endl;
	cout << "sum = " << add(a, b) << endl;
	cout << "전역변수 g = " << g << endl;

	return 0;

}