/*
���� �Լ�
- int width(int minWidth) : ��µǴ� �ʵ��� �ּҳʺ�
- char fill(char cFill) : cFill ���ڷ� ��ĭ�� ä���
- int precision(int np) : ��¼����� ��ȿ�����ڸ��� np ����
  ������ �Ҽ��� ������ ���� �ڸ��� ��� �����ϰ� �Ҽ����� ����
*/

#include<iostream>
using namespace std;

int main() {
	cout.width(10); // ��µǴ� ���� �ʺ� 10ĭ���� ����
	cout << "Hello" << endl; // ��������
	cout.width(5);
	cout << 12 << endl; // ��������

	cout.fill('^');
	cout.width(10); // ��µǴ� ���� �ʺ� 10ĭ���� ����	
	cout << "Hello" << endl; // ��������
	cout.width(5);
	cout << 12 << endl; // ��������

	cout.precision(5); // ��ȿ�ڸ��� 5ĭ
	cout << 11.0 / 3.0 << endl; // 3.6667

	return 0;
}