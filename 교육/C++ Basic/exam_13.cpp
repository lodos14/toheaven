/*
 ���۷���(Reference) & NickName(��Ī)
 - �̸��� ���� ��� ������ �ٿ��ִ� ����
 - ���� : �޸� ������ �ٿ��� �̸�, ������(���)
 - ���� - int& ref = val;

 int& ref - val ;
*/

#include<iostream>
using namespace std;

int main() {
	int val = 10;
	int* pVal = &val; // ������ ����
	int& rVal = val; // ���۷��� ����

	cout << "val = " << val << endl;
	cout << "rVal = " << rVal << endl;
	cout << "val �ּ� : " << &val << endl;
	cout << "val �ּ� : " << pVal << endl;

	return 0;
}