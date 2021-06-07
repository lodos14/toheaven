/*

 ��������� static
 - ���������� static : �ش� ���Ͽ����� ������ ����Ѵٴ� �ǹ�
 - ���������� static : �ѹ��� �ʱ�ȭ�ǰ�, �Ϲ����� ���������� 
					   �޸� �Լ��� ����� �Ҹ���� �ʴ´�.

*/

#include<iostream>
using namespace std;
// static���� ����� ������ ���������� ���������� �ʱ�ȭ���� ������
// 0���� �ʱ�ȭ �ȴ�.

void counter() {
	static int cnt; // 0
	cnt++;
	cout << "Current cnt = " << cnt << endl;

}


int main() {

	for (int i = 0; i < 10; i++)
		counter();


	return 0;
}

