#pragma once
class StringRep {

friend class String;       // 핸들클래스(String)와 바디클래스(StringRep)
                 
public:


private:

	char* str_;
	int len_;
	int rc_;
	

	

	void init_str(const char* str);

	StringRep(const char* str = 0);
	StringRep(const char* s, bool);

};