#include<iostream>
#include<fstream>
using namespace std;

int main() {
	const char* first = "D:/C++_Programming/source/student.txt";
	const char* second = "c:/windows/system.ini";

	//step1 + step2
	fstream fout(first, ios::out | ios::app);
	if (!fout) {
		cout << first << "열기 실패\n";
		return 0;
	}

	fstream fin(second, ios::in);
	if (!fin) {
		cout << second << "열기 실패\n";
		return 0;
	}

	//step3.
	int ch;
	while ((ch = fin.get()) != EOF) {
		fout.put(ch);
	}

	//step4

	fin.close(); 
	fout.close();

	return 0;
}