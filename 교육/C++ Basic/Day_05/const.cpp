/*

const(= constant, ���) : ���� ����� �����Ѵ�.
- ���� ������ �� ������ �Ѵ�.

*/

#include<iostream>
using namespace std;

int main() {
	int value1 = 5, value2 = 11;

	 const int* ptr = & value1;   

	//value1 = 10;
	// *ptr = 10;   ���� �ٲܷ��� value1���ٰ� ���� ��ƾ���

	ptr = &value2;
	

	cout << value1 << " : " << *ptr << endl;
	

	return 0;

}