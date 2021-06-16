#include"string.h"
#include<cstring>
#include<cassert>
#include<iostream>
using namespace std;


ostream& operator<<(ostream& out, const String& rhs) {

	return out << rhs.str_;

}





//String::String() {
//
//	str_ = new char[1];
//	assert(str_);
//	str_[0] = '\0';
//	len_ = 0;
//
//}

String::String(const char* s, bool) {   // �ǹ̾��� ���� �߰��ؼ� �����ε� ����// + ���ɰ��� �ڵ�� ����

	this->str_ = (char*)s;
	this->len_ = strlen(s);
}

void String::init_str(const char* s) {

	if (s) {
		str_ = new char[strlen(s) + 1];
		assert(str_ != NULL);     //!=NULL ��������
		strcpy_s(str_, strlen(s) + 1, s);
		len_ = strlen(s);
	}
	else {
		str_ = new char[1];
		assert(str_);
		str_[0] = '\0';
		len_ = 0;
	}
}

String::String(const char* s) {

	init_str(s);
	
}

String::String(const String& rhs) {        

	/*str_ = new char[rhs.len_ + 1];
	assert(str_);
	strcpy_s(str_, rhs.len_+1, rhs.str_);
	len_ = rhs.len_;*/
	init_str(rhs.str_);

}
String::~String() {

	delete[] this->str_;

}

String& String::operator=(const String& rhs) {

	if (this != &rhs) {

		delete[] str_;

		init_str(rhs.str_);
	}
	return *this;

}

String& String::operator=(const char* str) {    // s3 = "greeting";  
												// String tmp("greeting"); s3 = tmp; tmp.~String()
												// ������带 ����

	if (str != this->c_str()) {

		delete[] str_;
		init_str(str);
	}

	return *this;

}

bool String::operator == (const String& rhs) const {

	return strcmp(str_, rhs.str_) == 0;

}


//const String String:: operator+(const String& rhs)const {
//
//	char* buf= new char[len_ + rhs.len_ + 1];
//	assert(buf);
//	strcpy_s(buf, len_ + 1, str_);
//	strcat_s(buf, len_ + rhs.len_ + 1, rhs.str_);
//
//	String result(buf);
//	delete[] buf;
//
//	return result;
//
//} �Ʒ� �ڵ� ���� ���� 

const String String:: operator+(const String& rhs)const {

	char* buf= new char[len_ + rhs.len_ + 1];
	assert(buf);
	strcpy_s(buf, len_ + 1, str_);
	strcat_s(buf, len_ + rhs.len_ + 1, rhs.str_);

	String result(buf, true);
	//delete[] buf;

	return result;

}

char& String::operator[](int index) {

	return str_[index];            // const ����
}

const char& String::operator[](int index) const {

	return str_[index];            // const ����

}


const char* String::c_str() const {
	return str_;
}
int String::size() const {
	return len_;
}




