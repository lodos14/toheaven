/*
  ��ü �迭 : ������ Ŭ������ ���� ������ ���� ���� ��ü�� ���� ��
*/

#include <iostream>
using namespace std;

class Circle {
    int radius;

public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea();
};

double Circle::getArea() {
    return radius * radius * 3.14;
}


int main() {
    Circle cArray[3];      // Circle a; Circle b; Circle c; // ��ü �迭 3��

    // ��ü�迭�� ��Ҹ� �̿��ؼ� ����
    cArray[0].setRadius(10);
    cArray[1].setRadius(20);
    cArray[2].setRadius(30);

    for (int i = 0; i < 3; i++) {
        cout << "Circle" << i << "�� ���� = " << cArray[i].getArea() << endl;
    }

    Circle* p;         // ������ ���� ����
    p = cArray;         // �迭���� �迭�� �����ּҿ� ����. (= &cArray[0])
    for (int i = 0; i < 3; i++) {
        cout << "Circle" << i << "�� ���� = " << p->getArea() << endl;
        p++;
    }

    return 0;
}