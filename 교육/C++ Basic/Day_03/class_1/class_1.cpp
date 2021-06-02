/*

 객체 지향 프로그램(OOP, Object-Oriented Programming)
 - 모든 데이터를 객체(Object)로 취급하여 처리하는 객체 중심 프로그램
 - 세상에 모든 것은 객체
 - 특징 : 추상화, 갭슐화, 정보은닉, 상속겅, 다형성

 클래스와 객체
 - 클래스(class) : 객체(Object)를 모델링한는 것
   자료구조 : 변수, 배열, 구조체
   멤버변수(propery)-속성, 멤버메서드(method, 함수)-행위나 행동
   접근제한자(접근지정자): private, public, protected

 - 객체(Object)와 객체(instance)

*/

#include<iostream>
#include<string>
using namespace std;
#include"Person.h"

int main() {

	// 객체(instance)를 생성해야 한다.

	//Person p();
	//p.name = "홍길동";
	Person p("홍길동");
	
	//Person q;
	//q.name = "장보고";
	Person q("장보고");

	//Person w;
	// w.name = "김유신"
	Person w("김유신");

	// 객체를 이용해서 멤버에 접근 : direct 연산자(.)
	p.walk(5);
	p.run(10);

	q.walk(10);
	q.run(15);

	w.walk(20);

	return 0;
}