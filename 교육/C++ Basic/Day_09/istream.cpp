/*
  istream ����Լ� - ���� �Է�, get()
*/

#include<iostream>
using namespace std;

int main() {
	int ch;
	// int get()�� �̿��ؼ� �� ������ ���ڸ� �о���� �۾�
	while ((ch = cin.get()) != EOF) { // EOF = -1
		cout.put(ch);  // �о�� ���� ���
		if (ch == '\n') break;
	}

	return 0;
}