/*
  ��� : ���ǹ�(���Ǵܹ� or ���ù�)
  - ��Ÿ��� : break, continue
  - ���ǹ� : ���ǽĿ� ���� ó���� ������ �����ϴ� ���
  - �ܼ� if�� : ���ǽ��� ���� �� ó���� ������ �����ϴ� ��
  - if~else�� : ���ǽ��� ���� ���� ������ �� ������ �����ϴ� ��
  - ���� if�� : ���� ���� ���ǽĿ� ���� ó���� ������ �����ϴ� ��
  - switch ~ case ~ break �� : ���� if�� Ȯ��, ó���ӵ��� ������.

  */

#include<iostream>
using namespace std;

// �ϳ��� ���ڸ� �Է¹޾� ¦������ �����ϴ� ���α׷�
/*
int main() {
	// ����
	int num;

	// �Է¹�
	cout << "num = ";
	cin >> num;

	// ó����

	if (!(num % 2) ) {

		cout << " �Է¹��� ���� " << num << "�� ¦���Դϴ�." << endl;
	}
	cout << "���α׷��� �����մϴ�";

	return 0;
}
*/

// �� ���� ���ڸ� �Է¹޾� ū ���� ����ϴ� ���α׷�

/*
int main() {
	int su1, su2;

	cout << " �� ���� ������ �Է��ϼ���. ";
	cin >> su1 >> su2;

	if (su1 > su2)
		cout << su1 << " �� " << su2 << " �� ū���� " << su1;

	else 
		cout << su1 << " �� " << su2 << " �� ū���� " << su2;

	return 0;
}
*/

// �� ���� ���ڸ� �Է¹޾� ū ������� ����ϴ� ���α׷�

/*
int main() {
	int first, second, third, tmp;

	cout << " �� ���� ���� �Է� : ";
	cin >> first >> second >> third;

	// ���� ū ���� first�� �Ǵ� ���
	

	if (second > first && second > third) {

		tmp = first;
		first = second;
		second = tmp;

	}
		
	else if (third > first && third > second) {
		tmp = first;
		first = third;
		third = tmp;
	}

	if (second < third) {
		tmp = second;
		second = third;
		third = tmp;
	}

	cout << first << " > " << second << " > " << third << endl;

	return 0;
}
*/



