/*

/*

 �ټ����� �̸��� �Է¹޾� ���Ϳ� ������ �� �������� ���� �޼���
 �ش��ϴ� ����� �̸��� ����Ͻÿ�

 */
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	// ���ڿ� ���� ����
	vector<string> sv;
	string name;

	cout << "�ټ����� �̸��� �Է��ϼ���." << endl;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "��° �̸� = ";
		//cin >> name;  �̸��� ���� ���� �Է��� �� �ȵ�
		getline(cin, name, '\n');
		sv.push_back(name);
	}

	// ó�� - �������� ���� �������� ������ �̸�
	name = sv.at(0); // ������ ù��° ��
	for (int i = 1; i < sv.size(); i++) {
		if (name < sv[i])
			name = sv[i];
	}
	cout << "�������� ���� �ڿ� ������ �̸� : " << name << endl;



	return 0;
}
