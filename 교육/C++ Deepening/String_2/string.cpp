#include"string.h"
#include<cstring>
#include<cassert>
#include<iostream>
using namespace std;


ostream& operator<<(ostream& out, const String& rhs) {

	
	return out << rhs.c_str();    
	
}



String::String(const char* s, bool) {   // 의미없는 인자 추가해서 오버로딩 방지// + 성능개선 코드랑 보기
	
	
	
	this->ptr_ = new StringRep(s, true);

	
	this->ptr_->rc_ = strlen(s);
	
	
	
}



String::String(const char* s) {

	this->ptr_ = new StringRep(s);
	this->ptr_->rc_ = 1;
	
}

String::String(const String& rhs) {        

	
	this->ptr_ = rhs.ptr_;
	++this->ptr_->rc_;

}
String::~String() {

	--this->ptr_->rc_;
	if (this->ptr_->rc_ == 0) {        // 더 이상 참조하는 포인터가 없으면
		
		
		delete[] this->ptr_;
	}
}

String& String::operator=(const String& rhs) {

	if (this != &rhs) {

		--this->ptr_->rc_;
		if (this->ptr_->rc_ == 0) {        // 더 이상 참조하는 포인터가 없으면
		
			delete[] this->ptr_;
		}
		this->ptr_ = rhs.ptr_;
		++this->ptr_->rc_;

	}
	return *this;

}

String& String::operator=(const char* str) {    // s3 = "greeting";  
												// String tmp("greeting"); s3 = tmp; tmp.~String()
												// 오버헤드를 줄임

	if (str != this->c_str()) {

		--this->ptr_->rc_;
		if (this->ptr_->rc_ == 0) {        // 더 이상 참조하는 포인터가 없으면
			
			delete[] this->ptr_;
		}
		this->ptr_ = new StringRep(str);
		this->ptr_->rc_ = 1;
	}
	

	return *this;

}

bool String::operator == (const String& rhs) const {

	return strcmp(this->ptr_->str_, rhs.ptr_->str_) == 0;

}


//const String String::operator+(const String& rhs)const {
//
//	char* buf= new char[this->ptr_->len_ + rhs.ptr_->len_ + 1];
//	assert(buf);
//	strcpy_s(buf, this->ptr_->len_ + 1, this->ptr_->str_);
//	strcat_s(buf, this->ptr_->len_ + rhs.ptr_->len_ + 1, rhs.ptr_->str_);
//
//	String result(buf);
//	delete[] buf;
//
//	return result;
//
//} //아래 코드 성능 개선 

const String String:: operator+(const String& rhs)const {

	char* buf= new char[ptr_->len_ + rhs.ptr_->len_ + 1];
	assert(buf);
	strcpy_s(buf, ptr_->len_ + 1, ptr_->str_);
	strcat_s(buf, ptr_->len_ + rhs.ptr_->len_ + 1, rhs.ptr_->str_);

	
	//String result(buf);
	String result(buf, true);
	//delete[] buf;
	
	return result;

}

char& String::operator[](int index) {

	return ptr_->str_[index];            // const 유무
}

const char& String::operator[](int index) const {

	return this->ptr_->str_[index];            // const 유무

}


const char* String::c_str() const {
	return this->ptr_->str_;
}
int String::size() const {
	return this->ptr_->len_;
}




