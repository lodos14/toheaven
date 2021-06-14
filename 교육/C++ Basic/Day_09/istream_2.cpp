/*
istream& get(char& ch)을 이용해서 한 라인의 문자를 읽어오는 작업
*/

#include<iostream>
using namespace std;

int main() {
	char ch;

	while(true){
		cin.get(ch);  // 입력받은 문자를 ch에 저장하여 리턴

		if (cin.eof()) break; // EOF를 만나면 읽기 종료
		cout.put(ch);

		if (ch == '\n') break;
	}

	return 0;
}