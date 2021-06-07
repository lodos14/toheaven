/*
	상속을 위한 조건
	- 상속으로 클래스와 관계를 구성하기 위해서는 조건이 필요
	- 상속의 기본조건 IS-A 관계의 성립 (IS-A : ~ 는 ~ 다)
	- 상속 : 파생클래스는 기반클래스의 모든 멤버를 포함 - 부모의 것을 자식이 다 포함하고 있어야 한다.
	  전화기(기반클래스) -> 갤럭시, 애플, 샤오미.... (파생클래스)
	  나무(기반클래스) -> 사과나무, 앵두나무, 배나무, 감나무.... (파생클래스)
*/
#include<iostream>
#include<string>
using namespace std;

class Computer {
	string owner;

public:
	Computer(string name):owner(name){}

	void calculate() {
		cout << "요청 내용을 계산합니다.\n";
	}
};

class NoteBook : public Computer {
	int battery;

public:
	NoteBook(string name, int initChag)
		: Computer(name), battery(initChag){}

	void Charging() { battery += 5; }
	void UseBattery() { battery -= 1; }
	int getBatteryInfo() {
		return battery;
	}
	void MoveindCal() {
		if (getBatteryInfo() < 1) {
			cout << "충전 필요";
			return;
		}
		cout << "이동하면서 사용\n";
		calculate();
		UseBattery();
	}
};


class TableNote : public NoteBook {
	string penNo;

public:
	TableNote(string name, int initChag, string pen)
		: NoteBook(name, initChag), penNo(pen){}

	void write(string p) {
		if (getBatteryInfo() < 1) {
			cout << "충전필요.\n";
			return;
		}
		if(penNo.compare(p) != 0) {         // compare 리턴값 정수
			cout << "등록된 팬이 아닙니다.\n";
			return;
		}

		cout << "팬을 이용하여 글을 씁니다.\n";
		UseBattery();
	}
};

int main() {

	return 0;
}