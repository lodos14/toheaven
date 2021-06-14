/*
 �ؽ�Ʈ ������ ���� ������ �о���� �۾�
 - istream�� getline(char* line, int n) �Լ��� �̿��ϴ� ���
   fin.getline(char*, int)

 - �����Լ� getline(ifstream& fin, string& line)�� �̿��ϴ� ���
   getline(fin, line)
 */

#include<iostream>
#include<fstream>
using namespace std;

int main() {
	const char* file = "c:/windows/system.ini";

	ifstream fin(file);
	if (!fin) {
		cout << file << "���� ����\n";
		return 0;
	}

	/* �� ������ �о�� ����ϴ� �۾� */
	char buf[81]; // �ִ� 80��
	while (fin.getline(buf, 81)) {
		cout << buf << endl;
	}

	fin.close();
	return 0;
}