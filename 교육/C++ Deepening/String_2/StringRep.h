#pragma once
class StringRep {

friend class String;       // �ڵ�Ŭ����(String)�� �ٵ�Ŭ����(StringRep)
                 
public:


private:

	char* str_;
	int len_;
	int rc_;
	

	

	void init_str(const char* str);

	StringRep(const char* str = 0);
	StringRep(const char* s, bool);

};