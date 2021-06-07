/*

 친구 : 이름\
 중학교 : 이름, 연락처\
 고등학교 : 이름, 연락처, 주소
 대학교 : 이름 , 연락처, 학과
 사회 : 이름, 연락처, 직장, 직급

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
		:AAA(x),y(y) {} // 부모를 초기화 해야됨
};

class CCC: public BBB {

public :
	int z;
	CCC(int x, int y ,int z) 
		:BBB(x, y), z(z) {} // 부모를 초기화 해야됨
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