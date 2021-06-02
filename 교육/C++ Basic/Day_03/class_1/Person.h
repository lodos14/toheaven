#pragma once

#include<iostream>
#include<string>
using namespace std;

class Person { // 사람을 모델링

public:
	string name;

public: // 접근제한자
	// 생성자 메서드 : 객체가 생성될 때 자동으로 호출되는 메서드
	Person(string irum) { // default construtor(디폴트 생성자) (생략됨)
	// 객체가 생성될 때 수행할 작업을 기술
	// 멤버필드를 초기화 시켜주는 역할
		name = irum;
	}

	void walk(int speed) {
		cout << name << "이(가) " << speed << "의 속도로 걸어갑니다." << endl;
	}

	void run(int speed) {
		cout << name << "이(가) " << speed << "의 속도로 뛰어갑니다" << endl;
	}

};
