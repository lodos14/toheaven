/*
 ���������� : ++/--
 - �ǿ����ڸ� 1�� ���� or ���ҽ�ų �� ����ϴ� ������
 - ���� ������
 - ������ ������������ �켱������ ����!!

*/

#include<iostream>
using namespace std;

int main() {
	int num1 = 8, num2 = 8;
	int x = 10;
	int res1, res2, y;

	res1 = -- num1 + 5; // 12, num1 = 7
	res2 = num2-- + 5; // 13, num2 = 7
	y = x-- + 5 + --x; // 10 + 5 + 8

	cout << "res1:" << res1 << ", num1 = " << num1 << endl;
	cout << "res2:" << res2 << ", num2 = " << num2 << endl;
	cout << "y :" << y << ", x = " << x << endl;

	return 0;
}