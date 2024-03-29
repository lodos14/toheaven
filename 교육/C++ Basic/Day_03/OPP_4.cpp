/*

 동적 메모리 할당 및 변환
 동적 메로리 할당 : 프로그램을 작성하는 단계에서 메모리를 확보하는
 것이 아니라 프로그램을 수행하는 과정에서 필요한 공간을 확보

 - C언어 : malloc() -> 할당, free() => 반환
 - C++ : new() => 할당, delete() => 변환
 - JAVA : new() => 할당, JVM에서 자동으로 소멸(반환)

 C++ 동적메모리 할당 : new연산자, delete연산자
 데이터타입 *포인터변수 = new 데이터타입;
 delete 포인터변수;


*/

// 정수를 받아서 배열에 저장한 후 가장 큰 수를 출력하는 프로그램
// 이 때, 입력받은 정수를 배열에 담되 입력된 값이 0이면 종료
#include<iostream>
using namespace std;
#define MAX 100


int main() {
	int* p;

	p = new int; // int값 하나를 저장할 공간을 동적 할당
	if (!p) {
		cout << "동적메모리 할당이 되지 않았습니다." << endl;

		return 0;
	}

	*p = 5;
	int n = *p;

	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p;

	return 0;
}




















/*
int main() {
	int num[MAX];
	int su, i=0;

	while (true) {
		cout << "수 = ";
		cin >> su;
		if (su == 0)break;
		if (i > 2) {
			int num[5];
		}

		num[i] = su; // 0 1 2
		i++;
	}

	for (int j = 0; j < i; j++)
		cout << num[j] << endl;

	return 0;
}
*/