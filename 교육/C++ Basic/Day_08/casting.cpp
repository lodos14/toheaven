/*

 형변환(casting) : 자료의 형을 변환하는 작업
 - 자동형변환( 묵시적 형변환, promotion)
	: 큰 공간에 작은 데이터를 담는 행위
	: 데이터의 손실이 발생하지 않는다,
 - 강제형변환( 명시적형변환, casting)
	: 작은 공간에 큰 데이터를 담는 행위
	: 데이터의 손실이 발생한다.
- 자료형의 크기
	bool < chat < chort < int < long < long long < float < double
	1bit   1B       2B     4B     4B      8B        4B      8B
	     

*/
#include<iostream>
using namespace std;

int main() {

	char a = 100;
	char b = 'A';
	int c = 100;
	long d = 100L;
	float e = 3.14f;
	double f = 3.14;

	a = (char)d;  // 큰데이터를 작은데이터에 넣으려면 형변환
	c = (int)f;

	return 0;
}