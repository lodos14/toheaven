/*
ostream ��� �Լ� : put, write
*/

#include<iostream>
using namespace std;

int main() {
	// "Hello!"�� ����ϰ� ���� �ٷ� �ѱ�� �۾�
	cout.put('H');
	cout.put('e');
	cout.put('l');
	cout.put('l');
	cout.put('o');
	cout.put(33);  // ASCII �ڵ尪(!)
	cout.put('\n');

	// 'C++'�� ���
	cout.put('C').put('+').put('+').put(' ');
	cout << endl;

	char str[] = "I love programming";
	cout.write(str, 6);

	return 0;
}