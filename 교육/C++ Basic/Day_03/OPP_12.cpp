// ��ü����

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

int main() {
	Circle c; // ������ 1�� �� ����
	Circle& ref = c;

	ref.setRadius(10);

	cout << ref.getRadius() << " : " << c.getRadius() << endl;
	return 0;
}