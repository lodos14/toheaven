/*

���� �޸� �Ҵ� : �������� �޸𸮸� �Ҵ� �޾� ����ϴ� ��
- heap ������ ����ȴ�.
- c : malloc() / free()
- c++ : new / delete
- new / delete
- ��Ÿ��� : new

*/

#include<iostream>
using namespace std;

int main() {
	// ���� �� ���� �����ϴ� ���� �Ҵ� �޸𸮸� ����
	int* p = new int;

	*p = 10;

	cout << *p << endl;


	delete p; //�����Ҵ� �޸� ��ȯ
	

	return 0;


}

