/*
 10����, 8����, 16������ ��µǵ��� ���α׷��� ����
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	cout << showbase;

	// title 
	cout << setw(8) << "Number";
	cout << setw(10) << "Octal";
	cout << setw(10) << "Hexa" << endl;

	// number
	for (int i = 0; i < 50; i += 5) {
		cout << setw(8) << setfill('.') << dec << i;
		cout << setw(10) << setfill(' ') << oct << i;
		cout << setw(10) << setfill(' ') << hex << i << endl;
	}

	return 0;
}