/*
 ���������� �������� 
 scope ������(����������, ::, ~��)
 std::
*/

#include<iostream>
using namespace std;

int a = 10; // ��������

namespace BBB {
	int a = 20;
}

int main() {
	int a = 100; //��������

	cout << "�������� =" << a << endl;
	cout << "�������� =" << ::a << endl; 
	cout << "�̸����� BBB.a = " << BBB::a << endl;
	return 0;
}