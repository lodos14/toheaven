/*
 ���׿����� : c / c++ ���� ���� �ִ� ��Ư�� ������
 - if�������� ��ü�� �ȴ�.
 - ������? ��ȯ��1 : ��ȯ��2;
   �������� ���̸� ��ȯ��1, �����̸� ��ȯ��2
*/

#include<iostream>
using namespace std;

int main() {
	int num1 = 11;
	int num2 = 10;
	int res;

	res = (num1 < num2) ? num1 : num2;
	cout << " �� ���� �������� " << res << endl;

	return 0;

}