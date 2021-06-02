/*

 ��ü ������ : ��ü�� ���� ������ ������ �����Ͽ� ����ϴ°�
 ����Ʈ ���� : �޸��� �ּҸ� �����ϴ� ����
 �ڷ��� : �⺻�ڷ���, ��������� �ڷ���(�迭��, ����ü��, Ŭ����, ������...)

*/

#include<iostream>
using namespace std;

class Circle {
	int radius;

public:
	Circle();
	Circle(int radius);
	double getArea();
};

Circle::Circle() {

	radius = 1;
}

Circle::Circle(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}

int main() {
	Circle donut; // ��ü ����
	Circle pizza(30);
	Circle* p;     // ��ü �����ͺ��� ����

	p = &donut;

	//cout << "dount ��ü ���� = " << donut.getArea() << endl;
	cout << "p ������ ��ü ���� = " << p->getArea() << endl;
	cout << "p ������ ��ü ���� = " << (*p).getArea() << endl;

	p = &pizza;
	cout << "p ������ ��ü ���� = " << p->getArea() << endl;
	cout << "p ������ ��ü ���� = " << (*p).getArea() << endl;

	return 0;
}