/*

	������(Pointer) : �ּҸ� ����Ų��.
	�����ͺ���
	������ ������ : *(����, ����, ��), &(����, �ּ�)

*/

#include<iostream>
using namespace std;

int main() {

	int a = 10; // ������ ����
	int* p = &a;

	cout << "a = " << a << endl;
	cout << "a�ּ� = " << &a << endl;

	cout << "a = " << *p << endl;
	cout << "a�ּ� = " << p << endl;
	

	return 0;
}