/*

 상속과 다형성 그리고 추상메서드
 회사에서 직원들의 급여를 목적으로 프로그램 구현
 정규직(Permanent)으로 관리 -이름과 급여
 새로운 직원등록, 매달 지급되는 직원 급여의 총합, 직원정보

*/

#include<iostream>
#include<string>
using namespace std;

class Permanent {
	string name;
	int salary;


public:
	Permanent(string name, int pay)
		:name(name), salary(pay){}

	// getter or setter

	int getPay() {
		return salary;

	}

	void disp() {

		cout << "이름 : " << name << endl;
		cout << "급여 : " << getPay() << endl << endl;

	}

};

// 객체 동적 배열
Permanent* empList[100]; // 100명 직원을 관리
int empNum = 0;

// 새로운 직원등록을 위한 메서드
void addEmployee(Permanent *emp) {
	
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

int main() {
	// 직원등록 

	addEmployee(new Permanent("aaa", 10000));
	addEmployee(new Permanent("bbb", 15000));
	addEmployee(new Permanent("ccc", 20000));
	
	
	
	// 급여총합
	showTotalSalary();

	// 직원정보
	showAllsalary();

	return 0;
}