/* 
 �ڷ���(Data Type)
 - �⺻�ڷ��� : ������, �Ǽ���, ������, bool��(true/false)
 - ��������� �ڷ��� : �迭��, ����ü����, Ŭ������
 
 ������ : chat(1), short(2), int(4)- �⺻��, long(4), long long(8)
 �Ǽ��� : float(4), double(8) - �⺻��
 ������ : char(1)
*/

#include<iostream>
using namespace std;

int main() {
	int a = 0;
	float b = 1.0f;
	char c = 'A';

	cout<<"int = " << sizeof(a) << "byte" << endl;
	cout<<"float = "  << sizeof(float) << "byte" << endl;
	cout<<"double = "  << sizeof(double) << "byte" << endl;
	cout<<"char = "  << sizeof(char) << "byte" << endl;
	cout<<"bool =" << sizeof(bool) << "byte" << endl;
	cout<<"long = " << sizeof(long) << "byte" << endl;

	return 0;
}

