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
 
  �̹� ����� ������ �տ� &�����ڰ� ���� �ּ� ���� ��ȯ�� ��������� 
  ���� ����Ǵ� ������ �̸� �տ� ���� �������� ������ ���Ѵ�

  �׷��� int& num2 = num1; �̸� num1�� num2��� �����ڸ� �����ߴ�
 
 */