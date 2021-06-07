/*
 상속(ingeritance) : 기반클래스, 파생클래스 
 직원(Employee) : 이름

 정규직(Permanent) : 이름 ,급여(기본급)
	영업직(Sales) : 이름, 급여(기본급+수당(판매실적*보너스))

 임시적(Temporary) : 이름, 급여(근무시간*시간당급여)
 해외영업직(ForeignSales) : 이름, 급여 (기본급 + 수당 + 특별수당)
						    특별수당(위험수당)
							A지역: 기본급 + 수당의 총합의 3% 더한 특별수당
							B지역: 5%
							C지역: 7%

 */

#include<iostream>
#include<string>
using namespace std;

/*

  클래스 이름 : Employee
  클래스 유형 : Entity 클래스

*/

class Employee {
	string name;

public:
	Employee(string name) : name(name) {}

	void setName(string name) {
		this->name = name;
	}
	string getName() const {
		return name;
	}

	virtual void disp() const {
		
	}

	void showName() const {
		cout << "이름 : " << name << endl;
	}

	// 추상메서드(가상함수) abstract
	virtual int getPay() const {   // virtual 추상메서드
		return 0;
	}
	

};

/*

 클래스 이름 : Permanent
 클래스 유형 : Entity 클래스

*/

class Permanent : public Employee {
	int salary;

public:
	Permanent(string name, int pay)
		: Employee(name), salary(pay){}

	void setPay(int pay)  {
		salary = pay;
	}

	int getPay() const {
		return salary;
	}
	/*
	
	오버로딩 : 동일한 이름을 가진 메서드를 여러개 생성
	          단 , 매개변수의 개수가 다르거나 데이터 타입이 달라야한다.

	오버라이딩 : 부모와 자녀가 같은 이름의 메서드를 가지고 있는 경우
	             자녀 메서드가 실행된다.
	*/
	
	void disp() const {

		showName();
		cout << "급여 : " << getPay() << endl << endl;
	}


};


class Sales : public Employee {
	int salary;
	int salesResult; // 매출실적
	int bonus;      // 수당

public:

	Sales(string name, int salary, int result, int bonus)
		: Employee(name), salary(salary), salesResult(result), bonus(bonus){}

	int getPay() const {
		return salary + (salesResult * bonus);
	}

	void disp() const {

		showName();
		cout << "급여 : " << getPay() << endl << endl;
	}

};

class Temporary : public Employee {
	int times;   // 근무시간
	int pay;    //시간당 급여

public:

	Temporary(string name, int times, int pay)
		: Employee(name), times(times), pay(pay){}

	int getPay() const {
		return times * pay;
	}

	void disp() const {
		showName();
		cout << "급여 : " << getPay() << endl << endl;
	}

};

class ForeignSales : public Employee {
	int pay;
	int result;
	int bonus;
	char rate;

public:

	ForeignSales(string name, int pay, int result, int bonus, char rate)
		: Employee(name), pay(pay), result(result), bonus(bonus), rate(rate){}

	int getPay() const {

		if (rate == 'A') {
			return (pay + (result * bonus)) * 1.3;
		}
		else if (rate == 'B') {

			return (pay + (result * bonus)) * 1.5;
		}

		else  {
			return (pay + (result * bonus)) * 1.7;
		}
	}

	void disp() const {
		showName();
		cout << "급여 : " << getPay() << endl << endl;
	}

};



/*
 클래스 이름 : EmployeeManager
 클래스 유형 : Handler or Conrtol 클래스
*/

class EmployeeManager {

	// 객체 동적 배열
	Employee* empList[100]; // 100명 직원을 관리   Employee라는  클래스안에 모두 관리
	int empNum;

public:

	EmployeeManager() :empNum(0) {}

	// 새로운 직원등록을 위한 메서드
	void addEmployee(Employee* emp) {

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
	
	manager.addEmployee(new Sales("lee", 100, 1000, 2 ));
	manager.addEmployee(new Sales("pack", 100, 3000, 2));
	manager.addEmployee(new Sales("kim", 100, 5000, 2));

	manager.addEmployee(new Temporary("1알바", 42, 80));
	manager.addEmployee(new Temporary("2알바", 60, 80));
	manager.addEmployee(new Temporary("3알바", 100, 80));

	manager.addEmployee(new ForeignSales("1해외", 1000, 80,100,'A'));
	manager.addEmployee(new ForeignSales("2해외", 1500, 80,200,'B'));
	manager.addEmployee(new ForeignSales("3해외", 1200, 80,300,'C'));


	// 급여총합
	manager.showTotalSalary();

	// 직원정보
	manager.showAllsalary();

	return 0;
}