/*

 �簢��(Rectangle) ��ü�� �����Ͻÿ�.
 ����δ� �ʺ�(width)�� ����(height)�� �ʵ带 ������, �簢����
 ������ ����Ͽ� �ǵ����ִ� �޼��� getArea()�� ������ ��.
 ��, Ŭ������ ����ο� �����η� �и��Ͽ� ������ ��

*/


#include<iostream>
using namespace std;

class Rectangle {
public:

	int width;
	int height;


public:

	int getArea();

};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle exam;
	exam.width = 15;
	exam.height = 15;

	int area = exam.getArea();
	cout << "�簢�� ���� = " << area;


	return 0;
}

