/*
   얕은복사와 깊은복사
   a = [1, 2, 3, 4, 5]
   b = a => 얕은복사 : 같은 공간
   b[2] = 10;
*/

// 복사 생성자와 객체 복사

#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(Circle& c);        // 복사생성자
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return radius * radius * 3.14; }
	void setRadius(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
};

Circle::Circle(Circle& c) { // & X -> 얕은복사, & O -> 깊은복사
	this->radius = c.radius;
}

int main() {
	Circle src(30); // Circle(int radius) 호출
	Circle dest(src); // Circle(Circle& c) 호출 - 복사생성자 호출

	cout << "원본의 면적 = " << src.getArea() << endl;
	cout << "사본의 면적 = " << dest.getArea() << endl; // 똑같은 결과


	return 0;
}