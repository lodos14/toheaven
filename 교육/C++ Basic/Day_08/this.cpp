/*
  this ������
  - ������, ��ü �ڽ� ������
  - Ŭ������ ��� �Լ� �������� ���
  - �����Ϸ��� ������ ����(���������� ����Ǿ��ִ� ����)
  - �������
	����Լ��� �ƴ� �Լ����� this ��� �Ұ�
	static ����Լ����� this ��� �Ұ�
*/

#include <iostream>
using namespace std;

class Circle {
	int radius;

public:
	Circle() {
		this->radius = 1;
	}

	Circle(int radius) {
		this->radius = radius;
	}

	void setRadius(int radius) {
		this->radius = radius;
	}

	Circle* func() {
		return this;		// �ڽ��� �ּҸ� ������ ��
	}

};

int main() {
	Circle c1;
	Circle c2(2);
	Circle c3(3);

	c1.setRadius(4);

	return 0;
}