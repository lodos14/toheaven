/*
istream& get(char& ch)�� �̿��ؼ� �� ������ ���ڸ� �о���� �۾�
*/

#include<iostream>
using namespace std;

int main() {
	char ch;

	while(true){
		cin.get(ch);  // �Է¹��� ���ڸ� ch�� �����Ͽ� ����

		if (cin.eof()) break; // EOF�� ������ �б� ����
		cout.put(ch);

		if (ch == '\n') break;
	}

	return 0;
}