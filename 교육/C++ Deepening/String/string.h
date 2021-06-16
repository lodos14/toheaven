#pragma once
#include<iostream>
using namespace std;
class String {

	friend ostream& operator<<(ostream& out, const String& rhs);

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

	char* str_;
	int len_;

	void init_str(const char* str);
	String(const char* s, bool);

};


 /*
 
  �̹� ����� ������ �տ� &�����ڰ� ���� �ּ� ���� ��ȯ�� ��������� 
  ���� ����Ǵ� ������ �̸� �տ� ���� �������� ������ ���Ѵ�

  �׷��� int& num2 = num1; �̸� num1�� num2��� �����ڸ� �����ߴ�
 
 */