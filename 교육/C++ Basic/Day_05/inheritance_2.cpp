/*

 ģ�� : �̸�\
 ���б� : �̸�, ����ó\
 ����б� : �̸�, ����ó, �ּ�
 ���б� : �̸� , ����ó, �а�
 ��ȸ : �̸�, ����ó, ����, ����

*/

#include<iostream>
#include<string>
using namespace std;

class AAA {
public:
	int x;
	AAA(int x):x(x){}   

};

class BBB:public AAA {
public:
	int y;
	BBB(int x, int y) 
		:AAA(x),y(y) {} // �θ� �ʱ�ȭ �ؾߵ�
};

class CCC: public BBB {

public :
	int z;
	CCC(int x, int y ,int z) 
		:BBB(x, y), z(z) {} // �θ� �ʱ�ȭ �ؾߵ�
};


int main() {
	//AAA ap;
	//ap.x = 1;
	//BBB bp;
	//bp.y = 2;

	CCC cp;
	cp.z = 3;
	cp.x = 1;
	cp.y = 2;

	return 0;
}