/*
 �Լ� �����ε�(Function Overloading)
 - ������ �̸��� �Լ��� �ߺ��ؼ� �����ϴ� ��
 - ���� : �Ű������� ������ �ٸ��ų� �ڷ����� �޶�� �Ѵ�.
 - �Լ��� ȣ���� �� �Լ��� �̸��� �Ű������� �������� �����ؼ�
*/

#include<iostream>
using namespace std;

int function() {
	return 10;
}

int function(int a) {
	return a;
}

int function(int a, int b) {
	return a + b;
}

float function(float a) {
	return a;
}

int main() {
	cout << function() << endl; // �Լ� ȣ��
	cout << function(10, 20) << endl;
	cout << function(3.1f) << endl;

	return 0;
}