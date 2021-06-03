#include<iostream>
#include<cstring>
#pragma warning(disable:4996)
using namespace std;

class Person {
	char* name; // �����Ҵ�
	int age;

public:
	Person() {
		name = NULL;
		age = 0;

	}

	Person(char* curName, int curAge) {
		age = curAge;
		name = new char[strlen(curName) + 1];
		strcpy(name, curName);
	}
	void setPerson(char* curName, int curAge) {
		age = curAge;
		name = new char[strlen(curName) + 1];
		strcpy(name, curName);
	}

	void setName(char* curName) {
		name = curName ;
	}

	char* getName() {
		return name;   
	}

	void setAge(int age) {
		this->age = age;
	}

	int getAge() {
		return age;
	}

	void showPerson() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl << endl;
	}

	~Person() {

		delete[] name;
		cout << "�Ҹ��� ȣ��" << endl;
	}

};

int main() {
	Person arr[3];  // ��ü �迭
	char curName[100];  //  ������ 99��, �ѱ� 49��
	char* str;
	int age;
	int len;

	for (int i = 0; i < 3; i++) {
		cout << "�̸� = ";
		cin >> curName;
		cout << "���� = ";
		cin >> age;

		len = strlen(curName) + 1;
		str = new char[len];
		strcpy(str, curName);


		arr[i].setPerson(str, age);
	
	}
	for (int i = 0; i < 3; i++) {
		arr[i].showPerson();
	}

	return 0;
}