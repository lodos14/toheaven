/*
  "exit"�� �ԷµǸ� ���α׷��� �����ϴ� ���α׷� ����
  get(char* s, int n) : istream ����Լ�, ���ڿ������� ó��  

  getline(chr* s, int n, char delim = '\n')
  : get()�� ���������� delim�� ������ ���й��ڸ� ��Ʈ������ ����
*/

#include<iostream>
#include<cstring> // string.h�� ����
using namespace std;

int main() {
	char word[80];

	cout << "cin.get(char*, int)�� ���ڿ��� �о���� �۾�\n";
	while (true) {
		cout << "�����Ϸ��� exit�� �Է��ϼ���. => ";
		cin.get(word, 80); // 79���� ������, 39���� �ѱ�

		if (strcmp(word, "exit") == 0) {
			cout << "���α׷��� �����մϴ�.\n";
			return 0;
		}
		else 
			// �Է� ���ۿ� �����ִ� '\n'�� �����ϴ� �۾�
			// ���� ������ ������.
			cin.ignore(1);				
		 

	}

	return 0;
}