#include<iostream>
#include<fstream>
using namespace std;

int main() {
	//step1. 파일 객체 생성
	ifstream fin;

	//step2. 파일 열기
	fin.open("D:/C++_Programming/source/student.txt");
	if (!fin) {
		cout << "파일 열기 실패\n";
		return 0;
	}

	char name[20], major[50];
	int id;

	fin >> name;
	fin >> id;
	fin >> major;

	cout << "이름 : " << name << endl;
	cout << "학번 : " << id << endl;
	cout << "학과 : " << major << endl;

	//step4. 파일객체 닫기
	fin.close();

	return 0;
}