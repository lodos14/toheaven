#include<cassert>
#include"StringRep.h"
#include<iostream>



void StringRep::init_str(const char* s) {

	if (s) {
		str_ = new char[strlen(s) + 1];
		assert(str_ != NULL);     //!=NULL 생략가능
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

StringRep::StringRep(const char* s) {

	this->init_str(s);
}

StringRep::StringRep(const char* s, bool) {

	//this->str_ = (char*)s;
	this->str_ = const_cast<char*>(s);
	this->len_ = strlen(s);

}