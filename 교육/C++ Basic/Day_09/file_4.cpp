/*
  get()을 이용해서 텍스트 파일
  c:\windows\system.ini 파일을 읽어 화면에 출력하는 프로그램을
  구현하시오.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main() {
	const char* file = "c:/windows/system.ini";

	//step1 + step2
	ifstream fin(file);
	if (!fin) {
		cout << file << "열기 실패\n";
		return 0;
	}

	//step3
	int byte = 0;
	int ch;
	while ((ch = fin.get()) != EOF) {
		cout.put(ch);
		byte++;
	}

	cout << "읽은 바이트 수 : " << byte << endl;

	//step4
	fin.close();

	return 0;
}