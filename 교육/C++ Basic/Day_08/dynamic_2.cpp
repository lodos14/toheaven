/*

	 �迭�� ũ�⸦ �Է¹޾� �������� �Ҵ��� �� �����͸� �Է¹޾� ����ϴ� ���α׷�

*/

#include<iostream>
using namespace std;

int main() {

	int arr_size;
	
	cout << "�迭�� ũ�� = ";
	cin >> arr_size;



	int* list = new int[arr_size];
	for (int i = 0; i < arr_size; i++) {
		cout << i + 1 << "��° ������ = ";
		cin >> list[i]; //������ �迭ó�� ��밡��

	}

	cout << "�迭�� ��� : " << endl;
	for (int i = 0; i < arr_size; i++)
		cout << list[i] << " ";
	cout << endl;


	return 0;
}