#include<iostream>
using namespace std;
#include"Circle.h"
int main() {
    Circle c;
    // c.radius = 5;       // radius�� private�� �Ǿ��־ �������ٺҰ�
    c.setRadius(5);
    cout << "������ = " << c.getRadius() << endl;
    cout << "���� = " << c.getArea() << endl;

    return 0;
}