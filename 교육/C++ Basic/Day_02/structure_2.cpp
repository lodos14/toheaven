#include<iostream>
using namespace std;

struct Prop {

	int saving;
	int loan;

};

// �Լ� ����

int CalcProperty(int, int);

int main() {

	int hong;
	Prop aaa = { 10000000, 4000000 };


	hong = CalcProperty(aaa.saving, aaa.loan);

	cout << "ȫ�浿�� ����� ���� " << aaa.saving << "�� �̰�, " <<  endl;
	cout << "������ " << aaa.loan << "�� ������ �� " << hong;

	return 0;
}

// �Լ� ����

int CalcProperty(int s, int l) {
	return s - l;
}