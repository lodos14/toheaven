#include<iostream>
using namespace std;


class Test {
	int num1;
	static int num2;

public:

	Test(int n):num1(n){}

	static void Adder(int n) {  // static�� ����� �Լ��� static�� ���� �� ����

		//num1 += n;
		num2 += n;
	}
};

int Test::num2 = 0;