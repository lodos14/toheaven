#include<iostream>
using namespace std;

struct Prop {

	int saving;
	int loan;

};

// 함수 선언

int CalcProperty(int, int);

int main() {

	int hong;
	Prop aaa = { 10000000, 4000000 };


	hong = CalcProperty(aaa.saving, aaa.loan);

	cout << "홍길동의 재산은 적금 " << aaa.saving << "원 이고, " <<  endl;
	cout << "대출은 " << aaa.loan << "을 제외한 총 " << hong;

	return 0;
}

// 함수 정의

int CalcProperty(int s, int l) {
	return s - l;
}