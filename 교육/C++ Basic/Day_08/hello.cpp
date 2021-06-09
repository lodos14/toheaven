// 전처리문 : preprocessor
#include<iostream>  // import와 동일한 의미를 지닌다.

/*
	ios : input output system, 최상위 객체
	istream/ostream = opstream
	stream(스트림) : 시냇물, 통로(데이터, 제어신호)
	c언어 #include<stdio.h>
	- string.h  : 문자열과 관련된 함수를 제공 => cstring(c++)
*/

// 전역함수 or 전역변수 or 매크로상수
/*
#define 상수명 = 값; 
const(=constant) : 상수
- 상수는 변하지 않는 수, 고정된 수
*/

namespace A {

	void aaa() {

	}

	void bbb() {


	}

	void ccc() {


	}
}
/*
	 이름 없는 이름 공간
	 - namespace {...}
	 - 모든 객체가 static 키워드가 붙어있는 효과를 낸다.
*/
namespace B {

	void aaa() {}
	void bbb() {}
	void ccc() {}

}


// main 함수 : 프로그램의 시작과 끝을 나타내는 함수
int main() { // 리턴타입 함수명(매개변수){....}
	/*
	이름공간(namespace)과 소유연산자(scope 연산자, ::) ~꺼
	*/

	//A::aaa();  // 협업할때 유용

	std::cout << "Hello" << std::endl;

	/*
	printf => cout객체와 << 연산자
	scanf => cin객체와 >> 연산자
	
	*/

	return 0;
}