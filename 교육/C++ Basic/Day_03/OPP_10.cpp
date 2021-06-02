/*

 �������� == NickName
 - �̹� ����� ������ ������ ����� ���
 - &�����ڸ� ����Ѵ�.
 - ����� �ݵ�� �ʱ�ȭ �Ǿ� �־�� �Ѵ�.

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
	int getRadius() { return radius; }

};

int main() {
	int num = 5;
	int& ref = num; // ���������� �ݵ�� �ʱ�ȭ�� �ؾ��Ѵ�.

	ref++;

	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;

	return 0;
}