/*
A 회사의 직원 급여관리 프로그램
고용인 : Employee
정규직 : Permanent ~  직원이름, 급여(기본급)
영업직 : Sales - 직원이름, 급여(기본급 + 판매수당 * 보너스)
임시직 : Temporary - 직원이름, 급여(시급*근무시간)

*/
#include<iostream>
#include<string>
using namespace std;




class Employee { // 최상위 클래스
	string name;

public:
	Employee(string name):name(name){}

	int getPay() {  // 자식의 메서드를 담아야한다 형식상 그래야 자식의 메서드가 실행됨 / 추상메서드
		return 0;              
	}

	void show() {
		cout << "이름 :" << name << endl;

	}
	


};



/*
클래스 이름: Permanent
클래스 유형 : Entity 클래스
*/

class Permanent :public Employee {
	//string name;
	int salary;
	
public:
	Permanent(string name, int pay)
		:Employee(name), salary(pay){}

	int getPay() {
		return salary;
	}

	void show() {

		Employee::show;
		cout << "급여 : " << getPay() << endl;
 
	}

};

class Sales {
	string name;
	int salary;
	int salesResult; // 판매실적
	int bonus;       // 실적수당 

};

class Temporary {
	string name;
	int times;  //근무시간
	int pay;    //시간당 급여

};




/*
클래스 이름 : EmployeeManager
클래스 유형 : Handler 클래스
*/
class EmployeeManager {
	// 객체 동적 배열
	Employee* empList[100];
	int empNum;

public:
	EmployeeManager():empNum(0){}

	// 직원등록을 수행하는 메서드
	void addEmployee(Employee* p) {
		empList[empNum++] = p;

	}

	// 직원 급여의 총합을 출력하는 메서드
	void showTotalSalary() {

		int total = 0;
		for (int i = 0; i < empNum; i++)
			total += empList[i]->getPay();  // 부모에 추상으로 담아야함 메서드를

		cout << "급여총합 : " << total << endl;
	}

	// 모든 직원의 정보를 출력하는 메서드
	void showAllEmployee() {
		for (int i = 0; i < empNum; i++)
			empList[i]->show();

	}

};

int main() {
	EmployeeManager manager;


	// 직원등록
	manager.addEmployee(new Permanent("aaa", 1000));
	manager.addEmployee(new Permanent("bbb", 1500));
	manager.addEmployee(new Permanent("ccc", 2000));

	// 급여총합
	manager.showTotalSalary();

	// 모든 직원 정보
	manager.showAllEmployee();

}