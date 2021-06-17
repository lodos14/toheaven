#include<iostream>
#include<typeinfo>
#include"Shape.h"
#include"Rectangle.h"
#include"Circle.h"
using namespace std;


void printArea(const Shape* ps) {

	// RTTI; runtime type identification  Rectangel?? Circle??

	if (typeid(*ps) == typeid(Rectangle)) // �����Ͱ� ����Ű�� Ŭ������ �´��� Ȯ��
	{
		cout << "rectangle ";

		Rectangle* p = (Rectangle*)ps;    // �θ�Ÿ���� Ŭ������ �ڽ��� ����Ű�°� �ڽ��� �ڽ��� ����Ű�� �ٲ�
										  // �θ� �ڽ��� ����ų �� �ڽ��� �Լ��� �θ� ���� ��� �ڽ��� �Լ��� ����
										 // ��ų �� ���

		cout << " width : " << p->width() << " height : " << p->height();
	}
	else if (typeid(*ps) == typeid(Circle)) {
		cout << " circle ";

		Circle* p = (Circle*)ps;
		cout << " radius : " << p->radius();
	}

	else {
		

	}
	cout << " area : " << ps->area()<<endl;
}


int main() {

	// Shape s; X
	Shape* shapes[5];
	shapes[0] = new Rectangle(50, 50, 100, 20);
	shapes[1] = new Rectangle(100, 20, 20, 10);
	shapes[2] = new Circle(10, 10, 5);
	shapes[3] = new Circle(200, 200, 15);
	shapes[4] = new Rectangle(300, 10, 5, 200);

	
	for (int i = 0; i < 5; ++i)
		printArea(shapes[i]);

	

	for (int i = 0; i < 5; ++i)
		delete shapes[i];


	

	return 0;
}