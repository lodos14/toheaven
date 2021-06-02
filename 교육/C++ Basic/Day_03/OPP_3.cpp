#include<iostream>
using namespace std;

class Circle {
	int radius;

public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int redius) { this->radius = radius; }
	double getArea();
};

//Circle::Circle() {
//
//	radius = 1;
//}
//
//Circle::Circle(int radius) {
//	this->radius = radius;
//}

double Circle::getArea() {
	return radius * radius * 3.14;
}

int main() {
	//Circle cArray[3]; // 기본생성자에 의해 배열
	Circle cArray[3] = { Circle(), Circle(5), Circle(10) };

	for (int i = 0; i < 3; i++) {
		cout << "Circle" << i << "의 면적 = " << cArray[i].getArea() << endl;
	}

		return 0;
	}