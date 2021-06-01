/*
 매크로 함수와 인라인 함수화
 - 장점 : 실행 속도가 빠르다.
 - 단점 : 한 줄에 기술해야 한다.
 
 */

#include<iostream>
#define SQUARE(x) (x * x) // 매크로 함수
using namespace std;

inline int SSS(int x) {
	return x * x;
}

int main() {

	
	cout << SQUARE(5.1f) << endl;
	cout << SSS(5.1f) << endl;

	return 0;
}