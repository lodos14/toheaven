#include<iostream>
#include<string>
using namespace std;

class Person {

protected:   // 상속관계에서 접근 가능하게 해줌
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

// 파생클래스 : 접근 제한자 부모클래스

class Student : public Person{
	//int age;
	//string name;
	string major;

public:
	Student(int age, string name, string major)
		//:age(age), name(name), major(major){}    
		: Person(age,name), major(major) {}

	void show() const {
		//cout << "name : " << name << endl; // 상속 받은건 부모가 프라이빗 이면 부모꺼를 자기꺼처럼 사용 불가능
		//cout << "age : " << age << endl;

		Person::show();
		cout << "major : " << major << endl;
	}

};

int main() {
	Student stu(11, "aaa", "컴공");
	stu.show();

	Student stu2(22, "bbb", "전자");
	stu2.show();

	
	return 0;
}