#include<iostream>
using namespace std;

class SoSimple {

public:
	static int simObjcnt;

public:
	SoSimple() { simObjcnt++; } // ��ü ��������� ��

};

int SoSimple::simObjcnt = 0;

int main() {

	cout << SoSimple::simObjcnt << "��° SoSimple ��ü" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjcnt << "��° SoSimple ��ü" << endl;
	/*cout << sim1.simObjcnt << "��° SoSimple ��ü" << endl;
	cout << sim2.simObjcnt << "��° SoSimple ��ü" << endl;
	*/
	
	

	return 0;
}