/*
  ios Ŭ������ ���ǵ� ���� �÷���
  - ios::skipws => �Է½� ���鹮�� ����
  - ios::unitbuf => ��½�Ʈ���� ������ �����͸� ���۸����� �ʰ� �ٷ� ���
  - ios::uppercase => 16����(0~9, A~F) ����ǥ���� �빮��
  - ios::dec => decimal, 10������ ���, �⺻��
*/

#include<iostream>
using namespace std;

int main() {
	cout << 30 << endl; // 10������ ���

	cout.unsetf(ios::dec); // 10���� ����
	cout.setf(ios::hex);  // 16������ ���
	cout << 30 << endl; // 1e 

	cout.setf(ios::showbase);
	cout << 30 << endl; // 0x1e

	cout.setf(ios::uppercase);
	cout << 30 << endl; // 0X1E

	cout.setf(ios::dec | ios::showpoint);
	cout << 23.5 << endl; // 23.5000

	cout.setf(ios::scientific); // �Ǽ� ǥ���� ���л���� ǥ��
	cout << 23.5 << endl;  // 23.50000E+001

	cout.setf(ios::showpos); // ��ȣ�� �Բ� ���
	cout << 23.5 << endl; // +23.50000E+001

	return 0;
}