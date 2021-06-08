/*

 STL(Standard Template Library) : �Ϲ�ȭ ���α׷���
 - �Ϲ�ȭ ���α׷����� �����͸� �߽��ϴ� ��ü���� ���α׷��ְ��� �޸�
   ���α׷��� �˰��� ������ �� ���

- C++ ǥ�� ���ø� ���̺귯�� �������
  �ݺ���(iterator)
  �����̳�(container) : ���� Ÿ���� ���� ��ü�� ���� Ŭ���� ���ø�

  �˰���(Algorithm) : �Լ��� 

  - �����̳� : ����(sequence), ����(associative), �����(adapter)

  - ���� �����̳� : vector, list , deque
  - ���� �������� : set, map
  - ������ �����̳� : stack, queue

*/

#include<iostream>
#include<vector>
using namespace std;



int main() {
	// ���Ͱ�ü ����

	vector<int> vc = { 19, 20, 30 };

	cout << "���� ������ ũ�� : " << vc.size() << endl;

	// ���� ��� �߰�
	vc.push_back(40);

	cout << "���� ������ ũ�� : " << vc.size() << endl;
	cout << "������ �׹�° ��� : " << vc[3] << endl;

	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, " ")); // 19 20 30 40

	return 0;
}