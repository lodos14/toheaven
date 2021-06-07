#include<iostream>
#include<string>
using namespace std;

/*

 클래스 이름 : Permanent
 클래스 유형 : Entity 클래스

*/



class Permanent {
	string name;
	int salary;


public:
	Permanent(string name, int pay)
		:name(name), salary(pay) {}

	// getter or setter

	int getPay() {
		return salary;

	}

	void disp() {

		cout << "이름 : " << name << endl;
		cout << "급여 : " << getPay() << endl << endl;

	}

};

/*
 클래스 이름 : EmployeeManager
 클래스 유형 : Handler or Conrtol 클래스
*/

class EmployeeManager {

	Permanent* empList[100]; // 100명 직원을 관리
	int empNum;

public:

	EmployeeManager():empNum(0){}

	// 새로운 직원등록을 위한 메서드
	void addEmployee(Permanent* emp) {

		empList[empNum++] = emp;


	}

	// 지급되는 직원 급여의 총합을 위한 메서드
	void showTotalSalary() {

		int tot = 0;

		for (int i = 0; i < empNum; i++)

			tot += empList[i]->getPay();

		cout << " 급여의 총합 : " << tot << endl;

	}

	// 전체 등록된 직원의 정보를 출력하는 메서드
	void showAllsalary() {
		for (int i = 0; i < empNum; i++)
			empList[i]->disp();

	}
	~EmployeeManager() {
		// 동적으로 할당받은 공간을 반환하는 역할
		for (int i = 0; i < empNum; i++)
			delete empList[i];

	}


};

int main() {
	EmployeeManager manager;

	// 직원등록 

	manager.addEmployee(new Permanent("aaa", 10000));
	manager.addEmployee(new Permanent("bbb", 15000));
	manager.addEmployee(new Permanent("ccc", 20000));



	// 급여총합
	manager.showTotalSalary();

	// 직원정보
	manager.showAllsalary();

	return 0;
}