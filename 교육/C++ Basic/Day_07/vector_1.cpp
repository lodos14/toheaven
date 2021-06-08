/*

 vector : ���� ũ�� �迭

*/

#include<iostream>
#include<vector>
#include<algorithm>  
using namespace std;

/*
 push_back(���) : �������� �߰�
 at(�ε���) : ����, ����
 begin(), end()
 empyt(): ���Ͱ� ����ִ����� bool������ ���� turn/false
 erase(iterator it) : it�� ����Ű�� ���� ����
 insert(iterator it, element)
 size(): ������ ����
 */

int main() {
	vector<int> v;  // �������� ����

	// ���һ���
	v.push_back(1);
	v.push_back(2);
	v.push_back(3); // 1, 2, 3

	// ���Ұ����� �뷮
	int s = v.size();  // 3  ���� ũ��
	int c = v.capacity(); //  �ִ� ũ��

	// ��������
	v.at(2) = 5; // 2��° �ε����� 5�� ���� �־��   1, 2, 5
	int num = v.at(1);  // num = 2

	v[0] = 10; // 10, 2, 5
	int num2 = v[2];  // num2 = 5

	// ������ ��� ���
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
	cout << endl;



	return 0;
}

