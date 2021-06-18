#pragma once
#include<iostream>
using namespace std;
#include "StringRep.h"

ostream& operator<<(ostream& out, const String& rhs);

class String {

	

public:

	//String();
	String(const char* s = 0);
	String(const String& rhs);
	~String();

	String& operator=(const String& rhs);
	String& operator=(const char* str);

	bool operator == (const String& rhs) const;

	const String operator+(const String& rhs)const;

	char& operator[](int index);
	const char& operator[](int index) const;

	const char *c_str() const;
	int size() const;


private:

	//char* str_;
	//int len_;
	StringRep* ptr_;


	
	String(const char* s, bool);

};


 /*
 
  이미 선언된 변수의 앞에 &연산자가 오면 주소 값의 반환을 명령하지만 
  새로 선언되는 변수의 이름 앞에 오면 참조자의 선언을 뜻한다

  그래서 int& num2 = num1; 이면 num1에 num2라는 참조자를 선언했다
 
 */