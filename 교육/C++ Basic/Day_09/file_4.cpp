/*
  get()�� �̿��ؼ� �ؽ�Ʈ ����
  c:\windows\system.ini ������ �о� ȭ�鿡 ����ϴ� ���α׷���
  �����Ͻÿ�.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main() {
	const char* file = "c:/windows/system.ini";

	//step1 + step2
	ifstream fin(file);
	if (!fin) {
		cout << file << "���� ����\n";
		return 0;
	}

	//step3
	int byte = 0;
	int ch;
	while ((ch = fin.get()) != EOF) {
		cout.put(ch);
		byte++;
	}

	cout << "���� ����Ʈ �� : " << byte << endl;

	//step4
	fin.close();

	return 0;
}