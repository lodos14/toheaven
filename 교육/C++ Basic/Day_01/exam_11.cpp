/*
   point(������) : �޸𸮸� ����Ű�� Ű����
   - �޸��� �ּҰ��� �����ϴ� ����(������ ����)
*/


#include<iostream>
using namespace std;

int main() {
	int a = 10; // �Ϲ� ���� ����
	int b = 20;
	int*p = &a; // ������ ���� ����

	cout << *p << endl;
	*p = 2;
	cout << "*p = " << *p << endl;
	cout << "a = "<< a << endl;

	p = &b;
	cout << "*p = " << *p << endl;
	cout << "*b = " << p << endl;


	return 0;

}