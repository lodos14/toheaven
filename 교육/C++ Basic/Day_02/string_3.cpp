/*

 Faling in love with you�� �θ� ������ �̸��� ���ߴ� ���α׷�
 string Ŭ������ �̿��Ͽ� ����

*/

#include<iostream>
#include<string>
using namespace std;

int main() {

	string song("Falling in love with you");
	string elvis("Elvis Presley");
	string singer;

	cout << song + " �� �θ� ������? ";
	cout << "(��Ʈ : ù ���ڴ� " << elvis[0] << ")";

	getline(cin, singer); 

	if (singer == elvis) // ���ڿ� ��
		cout << " ���� " << endl;

	else

		cout << " Ʋ�� " << endl;

	cout << " ������ " << elvis << " �Դϴ�. " << endl;

	return 0;
}