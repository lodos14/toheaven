#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return radius * radius * 3.14; }
	void setRadius(int radius) { this->radius = radius; }
	int getRadius() { return radius; }

};

Circle getCircle() {
	Circle tmp(30);
	return tmp;
}

int main() {
	Circle c; // ��ü����(������ 1)

	cout << c.getRadius() << endl;

	c = getCircle(); // ��ü����
	cout << c.getRadius() << endl;

	return 0;
}