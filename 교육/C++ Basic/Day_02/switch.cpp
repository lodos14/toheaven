/*

swich(��ġ or �� => ������){
case ��1 : ���๮��; break;
case ��2 : ���๮��; break;
case ��n : ���๮��; break;
default : ���๮��;  
}

*/

#include<iostream>
using namespace std;

/*

  �ֹε�Ϲ�ȣ: 123456 - abcdefg
  a : ���� �׸��� ����⵵
  0 - 9 : 1800
  1 - 2 : 1900
  3 - 4 : 2000

  8�� ° ���ڸ� �Է¹޾� ����⵵�� ������ �����ϴ� ���α׷�
*/

int main() {
	int num, year;
	char gender; // M or F

	cout << " �ֹι�ȣ 8�� ° ���� = ";
	cin >> num;

	
	switch (num) {
	case 9: case 0: year = 1800; break;
	case 1: case 2: year = 1900; break;
	case 3: case 4: year = 2000; break;
	default: year = 0000;
	}

	if (year == 0000) {
		cout << "���α׷��� �����մϴ�.";
		return 0;
	}

	if (num % 2) {// 0(¦��) or 1(Ȧ��)
		// ���� �� ����Ǵ� ���� : 1
	gender = 'M';
	}

	else {
	gender = 'F';
	}

	cout << "����� ����⵵�� " << year << "��� �Դϴ�. " << endl;
	cout << "����� ������ " << gender << " �Դϴ�. " << endl;

	return 0;
}