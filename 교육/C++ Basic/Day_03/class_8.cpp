/*
  ����������(or ����������)
  - ��ü ���� ������ ��ü�� ĸ��ȭ�ϰ�, �ܺο��� ������ �����Ѵ�.
  - private(�����) : Ŭ���� �������� ������ ���ȴ�. (�⺻��)
  - protected(��ȣ) : ��� ���迡���� ������ ���ȴ�.
  - public(����) : ��ü(instance)�� �����ϸ� ��𼭵� ������ ���
*/

#include <iostream>
using namespace std;

class Circle {
    int radius;         // private

public:
    Circle();
    Circle(int r);
    double getArea();

    void setRadius(int r) {
        radius = r;
    }

    int getRadius() {
        return radius;
    }
};

Circle::Circle() {
    radius = 1;
}

Circle::Circle(int r) {
    radius = r;
}

double Circle::getArea() {
    return radius * radius * 3.14;
}

int main() {
    Circle c;
    // c.radius = 5;       // radius�� private�� �Ǿ��־ �������ٺҰ�
    c.setRadius(5);
    cout << "������ = " << c.getRadius() << endl;
    cout << "���� = " << c.getArea() << endl;

    return 0;
}