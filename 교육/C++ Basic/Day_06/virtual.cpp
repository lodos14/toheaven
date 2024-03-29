/*

 가상함수(virtual Function)
 - 파생 클래스에서 재정의할 것으로 기대하는 멤버 함수
 - 오버라이딩(overriding): 부모와 자식 동일한 이름을 가지고 있는 메서드
   조건 : 리턴타입과 매개변수가 같아야 한다.
		  자식개체의 메서드로 호출된다.

- 키워드
  virtual 멤버함수의 원형;

*/
#include<iostream>
using namespace std;


class A {
public:
	virtual void disp() {
		cout << "A 클래스의 disp() 함수" << endl;

	}

};

class B : public A {
public:
	virtual void disp() {
		cout << "B클래스의 disp() 함수" << endl;
	}
};
int main() {
	// 다형성 : 부모객체에 자식객체를 담아서 표현하는 것
	A* ptr; // 객체 포인터 
	A obj_a;
	B obj_b;

	ptr = &obj_a;
	ptr->disp();
	
	ptr = &obj_b; // 다형성 / 부모객체에 자식객체를 담는 것
	ptr->disp();

	return 0;


}
