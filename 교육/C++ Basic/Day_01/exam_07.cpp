/*
 default parameter : ����Ʈ �Ű�����
 - �Ű������� ó������ �����ϴ� ���
 - �Լ��� �����ε��� Ȯ�����̶�� �����ص���
*/

#include<iostream>
using namespace std;

int function(int a = 10) {
	return a;
}

int main() {

	cout << function() << endl;
	cout << function(100) << endl;

	return 0;
}