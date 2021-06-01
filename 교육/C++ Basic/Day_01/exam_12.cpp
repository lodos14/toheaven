/* 
 자료형(Data Type)
 - 기본자료형 : 정수형, 실수형, 문자형, bool형(true/false)
 - 사용자정의 자료형 : 배열명, 구조체형명, 클래스명
 
 정수형 : chat(1), short(2), int(4)- 기본형, long(4), long long(8)
 실수형 : float(4), double(8) - 기본형
 문자형 : char(1)
*/

#include<iostream>
using namespace std;

int main() {
	int a = 0;
	float b = 1.0f;
	char c = 'A';

	cout<<"int = " << sizeof(a) << "byte" << endl;
	cout<<"float = "  << sizeof(float) << "byte" << endl;
	cout<<"double = "  << sizeof(double) << "byte" << endl;
	cout<<"char = "  << sizeof(char) << "byte" << endl;
	cout<<"bool =" << sizeof(bool) << "byte" << endl;
	cout<<"long = " << sizeof(long) << "byte" << endl;

	return 0;
}

