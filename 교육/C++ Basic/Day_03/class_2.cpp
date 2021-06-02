/*

 원을 모델링하는 작업
 멤버로는 반지름을 담는 변수 radius의 원의 면적을 계산하여
 되돌려주는 메서드 getArea()를 구현

*/

#include<iostream>
using namespace std;
#define PI 3.14 

// 클래스 선언부
class Circle {
public:
	// 멤버필드
	int radius;

public:
	// 멤버메서드
	double getArea();

};

// 클래스 구현부
double Circle::getArea() { //:: 위에 클래스 꺼라는 표시 / 정의하는 내용을 밑으로 뻄
	return radius * radius * PI;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut객체 면적 = " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza객체 면적 = " << area << endl;

	return 0;
}