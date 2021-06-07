#include<iostream>
#include<string>
using namespace std;

class Person {

protected:   // ��Ӱ��迡�� ���� �����ϰ� ����
	int age;
	string name;



public :
	Person(int age, string name)
		: age(age), name(name) {}

	void show() const {
		cout << "name : " << name << endl;
		cout << "age : " << age << endl;
	}


};

// �Ļ�Ŭ���� : ���� ������ �θ�Ŭ����

class Student : public Person{
	//int age;
	//string name;
	string major;

public:
	Student(int age, string name, string major)
		//:age(age), name(name), major(major){}    
		: Person(age,name), major(major) {}

	void show() const {
		//cout << "name : " << name << endl; // ��� ������ �θ� �����̺� �̸� �θ𲨸� �ڱⲨó�� ��� �Ұ���
		//cout << "age : " << age << endl;

		Person::show();
		cout << "major : " << major << endl;
	}

};

int main() {
	Student stu(11, "aaa", "�İ�");
	stu.show();

	Student stu2(22, "bbb", "����");
	stu2.show();

	
	return 0;
}