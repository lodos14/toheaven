/*

 ���� �𵨸��ϴ� �۾�
 ����δ� �������� ��� ���� radius�� ���� ������ ����Ͽ�
 �ǵ����ִ� �޼��� getArea()�� ����

*/

#include<iostream>
using namespace std;
#define PI 3.14 

// Ŭ���� �����
class Circle {
public:
	// ����ʵ�
	int radius;

public:
	// ����޼���
	double getArea();

};

// Ŭ���� ������
double Circle::getArea() { //:: ���� Ŭ���� ����� ǥ�� / �����ϴ� ������ ������ �M
	return radius * radius * PI;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut��ü ���� = " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza��ü ���� = " << area << endl;

	return 0;
}