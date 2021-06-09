/*
	이름없는 이름 공간
*/

#include<iostream>
using namespace std;

namespace {

	//이 함수는 이 파일 안에서만 사용할 수 있다.
	//static int aaa()와 동일하다.

	int aaa() {}

	//static int x와 동일하다.
	int x = 0;

}

int main() {

	aaa();

	x = 3;
	


	return 0;
}