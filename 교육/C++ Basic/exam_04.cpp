#include<iostream>
using namespace std;

int main() {
	/*
	  cin ��ü, console input ��ü, �Է¹��� ��( �Է� ��Ʈ��)
	  cin >> ������ ����;
	  ���⿬����(>>) : ����ڷκ��� �Է¹��� ���� �����ؼ� ������ ������ �����Ѵ�.
	*/

	// ���� : ������ ����� �ڷ����� ������ �� ����ϴ� ����
	int age;

	cout << "���̸� �Է����ּ��� : ";
	cin >> age;

	cout << "����� �Է��� ���̴�" << age << "�� �Դϴ�." << endl;
	
	// endl : end of line ���� ���� �ǹ� ��, ����(\n)
	return 0;
}