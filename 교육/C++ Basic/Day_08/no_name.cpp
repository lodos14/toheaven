/*
	�̸����� �̸� ����
*/

#include<iostream>
using namespace std;

namespace {

	//�� �Լ��� �� ���� �ȿ����� ����� �� �ִ�.
	//static int aaa()�� �����ϴ�.

	int aaa() {}

	//static int x�� �����ϴ�.
	int x = 0;

}

int main() {

	aaa();

	x = 3;
	


	return 0;
}