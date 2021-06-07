/*
	����� ���� ����
	- ������� Ŭ������ ���踦 �����ϱ� ���ؼ��� ������ �ʿ�
	- ����� �⺻���� IS-A ������ ���� (IS-A : ~ �� ~ ��)
	- ��� : �Ļ�Ŭ������ ���Ŭ������ ��� ����� ���� - �θ��� ���� �ڽ��� �� �����ϰ� �־�� �Ѵ�.
	  ��ȭ��(���Ŭ����) -> ������, ����, ������.... (�Ļ�Ŭ����)
	  ����(���Ŭ����) -> �������, �޵γ���, �質��, ������.... (�Ļ�Ŭ����)
*/
#include<iostream>
#include<string>
using namespace std;

class Computer {
	string owner;

public:
	Computer(string name):owner(name){}

	void calculate() {
		cout << "��û ������ ����մϴ�.\n";
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
			cout << "���� �ʿ�";
			return;
		}
		cout << "�̵��ϸ鼭 ���\n";
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
			cout << "�����ʿ�.\n";
			return;
		}
		if(penNo.compare(p) != 0) {         // compare ���ϰ� ����
			cout << "��ϵ� ���� �ƴմϴ�.\n";
			return;
		}

		cout << "���� �̿��Ͽ� ���� ���ϴ�.\n";
		UseBattery();
	}
};

int main() {

	return 0;
}