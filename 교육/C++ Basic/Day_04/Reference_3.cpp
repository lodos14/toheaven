#include<iostream>
using namespace std;

int main() {
	int num = 12; // ��) 100���� �ȿ� 12��
	int* ptr = &num;  // ������ - �ּҸ� ��´�.    ptr�� 100����      * �� �� �ּ��� ���� ����
	int** dptr = &ptr; // ���������� - �ּҿ� �ּҸ� ��´�.

	int& ref = num;  // ��������
	int* (&pref) = ptr; // ������ ������ ���������� ����
	int** (&dpref) = dptr; // ���������� �������� ����

	cout << "ref = " << ref << endl;
	cout << "*pref = " << *pref << endl;
	cout << "**dpref = " << **dpref << endl;


	return 0;
}