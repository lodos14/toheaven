/*

 1�ܰ� : ����ó�� ���α׷�
 ����, ����, ���� ������ �Է¹޾� ������ ����� ����ϴ� ���α׷�

*/

#include<iostream>
using namespace std;

int main() {

	int kor, eng, math, tot;
	float avg;


	cout << "kor = ";
	cin >> kor;
	cout << "eng = ";
	cin >> eng;
	cout << "math = ";
	cin >> math;

	tot = kor + eng + math;
	avg = tot / 3.0f;

	cout << "���� : " << tot << " , ��� : " << avg << endl;

	return 0;
}