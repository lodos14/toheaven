/*

 ������� �� ���� ��üȭ�ϴ� Ŭ���� Point�� �Ϲ�ȭ�ϴ� ���ø����� �����Ͻÿ�.

*/
#include<iostream>
using namespace std;

template<typename T>
class Point {
	T x;
	T y;

public:

	Point(T x , T y );
	void setX(T x);
	void setY(T y);
	T getX();
	T getY();

};
template<typename T>
Point<T>::Point (T x , T y)
	: x(x), y(y){}

template<typename T>
void Point<T>::setX(T x) {
	this->x = x;
}

template<typename T>
void Point<T>::setY(T y) {
	this->y = y;
}

template<typename T>
T Point<T>::getX() {
	return x;
}

template<typename T>
T Point<T>:: getY() {
	return y;
}

int main() {
	Point<double> pos1(1.5, 2);

	cout << "x = " << pos1.getX() << endl;
	cout << "y = " << pos1.getY() << endl;

	return 0;
}