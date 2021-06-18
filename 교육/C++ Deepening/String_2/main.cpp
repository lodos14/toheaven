#include<iostream>
#include"string.h"
using namespace std;

int main() {

	String s1 = "hello, world";            // String s1("hello, world");
	const String s2 = s1;
	String s3;

	s3 = s1;
		
	//s1 = s1     // 자기 자신을 날려버림
	s3 = "greeting";  // String tmp("greeting"); s3 = tmp; tmp.~String()

	if (s1 == s3)
		cout << "s1 and s3 are equal" << endl;
	else
		cout << "s1 and s3 are not equal" << endl;


	const String s4 = " ai robot";
	s3 = s1 + s4;

	for (int i = 0; i != s1.size(); ++i)
		cout << s1[i] << " ";     // const 유무
	cout << endl;

	for (int i = 0; i != s2.size(); ++i)
		cout << s2[i] << " ";     // const 유무
	cout << endl;



	//cout << "s1 : " << s1.c_str() << " / s1 len : " << s1.size() << endl;
	cout << "s3 : " << s3 << endl;

	return 0;
}