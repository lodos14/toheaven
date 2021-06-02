/*
   ��������� ��������
   a = [1, 2, 3, 4, 5]
   b = a => �������� : ���� ����
   b[2] = 10;
*/

// ���� �����ڿ� ��ü ����

#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(Circle& c);        // ���������
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return radius * radius * 3.14; }
	void setRadius(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
};

Circle::Circle(Circle& c) { // & X -> ��������, & O -> ��������
	this->radius = c.radius;
}

int main() {
	Circle src(30); // Circle(int radius) ȣ��
	Circle dest(src); // Circle(Circle& c) ȣ�� - ��������� ȣ��

	cout << "������ ���� = " << src.getArea() << endl;
	cout << "�纻�� ���� = " << dest.getArea() << endl; // �Ȱ��� ���


	return 0;
}