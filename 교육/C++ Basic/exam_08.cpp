/*
 ��ũ�� �Լ��� �ζ��� �Լ�ȭ
 - ���� : ���� �ӵ��� ������.
 - ���� : �� �ٿ� ����ؾ� �Ѵ�.
 
 */

#include<iostream>
#define SQUARE(x) (x * x) // ��ũ�� �Լ�
using namespace std;

inline int SSS(int x) {
	return x * x;
}

int main() {

	
	cout << SQUARE(5.1f) << endl;
	cout << SSS(5.1f) << endl;

	return 0;
}