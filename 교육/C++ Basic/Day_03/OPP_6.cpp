/*

 ��ü�� ��ü �迭�� ���� ���� �� ��ȯ
 Ŭ�����̸� *�����ͺ��� = new Ŭ�����̸�;
 Ŭ�����̸� *�����ͺ��� = new Ŭ�����̸�(�����ڸŰ�����);
 delete �����ͺ���;

 */
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return radius * radius * 3.14; }
	void setRadius(int radius) { this->radius = radius; }

};
// �������� �Է¹޾� Circle ��ü�� �������� �Ҵ��Ͽ� ������
// ����Ѵ�. ��, ���������� ������ �ԷµǸ� ���α׷��� �����Ѵ�.
/*
int main() {
	

	Circle *p, * q;
	p = new Circle;
	q = new Circle(30);
	

	cout << "p���� = " << p->getArea() << endl;
	cout << "q���� = " << q->getArea() << endl;


	delete p, q;
	return 0;
}
*/

int main() {
	int r;

	while (true) {
		cout << "������ = ";
		cin >> r;
		if (r < 0)break;
		Circle* p = new Circle(r);
		cout << "���� = " << p->getArea() << endl;

		delete p;

	}

	
	return 0;
}