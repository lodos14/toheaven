/*

 사각형(Rectangle) 객체를 구현하시오.
 멤버로는 너비(width)와 높이(height)를 필드를 가지고, 사각형의
 면적을 계산하여 되돌려주는 메서드 getArea()를 구현할 것.
 단, 클래스의 선언부와 구현부로 분리하여 구현할 것

*/


#include<iostream>
using namespace std;

class Rectangle {
public:

	int width;
	int height;


public:

	int getArea();

};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle exam;
	exam.width = 15;
	exam.height = 15;

	int area = exam.getArea();
	cout << "사각형 넓이 = " << area;


	return 0;
}

