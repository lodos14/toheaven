/*

 map �����̳�
 - Ű�� ���� ���� ���ҷ� �����ϴ� �����̳�
 - Ű�� �ߺ��� ������� �ʴ´�.

*/

#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
	map<string, string>dic;

	// ��� ����
	dic.insert(make_pair("love", "���"));
	dic.insert(make_pair("deram", "��"));
	dic.insert(make_pair("dog", "������"));
	dic["cherry"] = "ü��";
	dic["cat"] = "�����";

	
	cout << "����� �ܾ� ���� : " << dic.size() << endl;


	// Ű�� �Է¹޾� �ش� ���� ����ϴ� ����
	string eng;

	while (true) {
		cout << "ã�� �ܾ� = ";
		getline(cin, eng);

		if (eng == "exit") break;

		/*
		   find(key_type& key) : iterator ����
		   �ʿ��� 'Ű'�� �ش��ϴ� ���Ҹ� ����Ű�� �ݺ��ڸ� ����
		*/
		if (dic.find(eng) == dic.end())  // ������ �˻��� �ߴٸ�
			cout << eng << "�� ������ �����" << endl;

		else
			cout << dic[eng] << endl;

	}

	cout << "���α׷��� �����մϴ�" << endl;
	

	return 0;
}