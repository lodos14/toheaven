#pragma once

#include<iostream>
#include<string>
using namespace std;

class Person { // ����� �𵨸�

public:
	string name;

public: // ����������
	// ������ �޼��� : ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �޼���
	Person(string irum) { // default construtor(����Ʈ ������) (������)
	// ��ü�� ������ �� ������ �۾��� ���
	// ����ʵ带 �ʱ�ȭ �����ִ� ����
		name = irum;
	}

	void walk(int speed) {
		cout << name << "��(��) " << speed << "�� �ӵ��� �ɾ�ϴ�." << endl;
	}

	void run(int speed) {
		cout << name << "��(��) " << speed << "�� �ӵ��� �پ�ϴ�" << endl;
	}

};
