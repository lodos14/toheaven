// ����

#include<iostream>
#include<string>
using namespace std;

class Person {
	string name;
	int id;

public:
	Person(int id, string name); // ������
	Person(Person& person);     // ���� ������
	~Person();                 // �Ҹ���

	void setName(string name);
	void disp();
};

Person::Person(int id, string name) {
	this->id = id;
	this->name = name;
}

Person::Person(Person& person) { // �������� : �������� ���� ���. (������ �޸�) - �������� ����
	this->id = person.id;
	this->name = person.name;
}

Person::~Person() {
	cout << "��ü �Ҹ�" << endl;
}

void Person::setName(string name) {
	this->name = name;
}
void Person::disp() {
	cout << id << " : " << name << endl;
}

int main() {
	Person father(1, "kitae");  // �Ϲݻ�����
	Person son(father);         // ���� ������

	father.disp();
	son.disp();

	son.setName("gildong");
	father.disp();
	son.disp();


	return 0;
}