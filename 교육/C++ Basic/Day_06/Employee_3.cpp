/*
 ���(ingeritance) : ���Ŭ����, �Ļ�Ŭ���� 
 ����(Employee) : �̸�

 ������(Permanent) : �̸� ,�޿�(�⺻��)
	������(Sales) : �̸�, �޿�(�⺻��+����(�ǸŽ���*���ʽ�))

 �ӽ���(Temporary) : �̸�, �޿�(�ٹ��ð�*�ð���޿�)
 �ؿܿ�����(ForeignSales) : �̸�, �޿� (�⺻�� + ���� + Ư������)
						    Ư������(�������)
							A����: �⺻�� + ������ ������ 3% ���� Ư������
							B����: 5%
							C����: 7%

 */

#include<iostream>
#include<string>
using namespace std;

/*

  Ŭ���� �̸� : Employee
  Ŭ���� ���� : Entity Ŭ����

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
		cout << "�̸� : " << name << endl;
	}

	// �߻�޼���(�����Լ�) abstract
	virtual int getPay() const {   // virtual �߻�޼���
		return 0;
	}
	

};

/*

 Ŭ���� �̸� : Permanent
 Ŭ���� ���� : Entity Ŭ����

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
	
	�����ε� : ������ �̸��� ���� �޼��带 ������ ����
	          �� , �Ű������� ������ �ٸ��ų� ������ Ÿ���� �޶���Ѵ�.

	�������̵� : �θ�� �ڳడ ���� �̸��� �޼��带 ������ �ִ� ���
	             �ڳ� �޼��尡 ����ȴ�.
	*/
	
	void disp() const {

		showName();
		cout << "�޿� : " << getPay() << endl << endl;
	}


};


class Sales : public Employee {
	int salary;
	int salesResult; // �������
	int bonus;      // ����

public:

	Sales(string name, int salary, int result, int bonus)
		: Employee(name), salary(salary), salesResult(result), bonus(bonus){}

	int getPay() const {
		return salary + (salesResult * bonus);
	}

	void disp() const {

		showName();
		cout << "�޿� : " << getPay() << endl << endl;
	}

};

class Temporary : public Employee {
	int times;   // �ٹ��ð�
	int pay;    //�ð��� �޿�

public:

	Temporary(string name, int times, int pay)
		: Employee(name), times(times), pay(pay){}

	int getPay() const {
		return times * pay;
	}

	void disp() const {
		showName();
		cout << "�޿� : " << getPay() << endl << endl;
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
		cout << "�޿� : " << getPay() << endl << endl;
	}

};



/*
 Ŭ���� �̸� : EmployeeManager
 Ŭ���� ���� : Handler or Conrtol Ŭ����
*/

class EmployeeManager {

	// ��ü ���� �迭
	Employee* empList[100]; // 100�� ������ ����   Employee���  Ŭ�����ȿ� ��� ����
	int empNum;

public:

	EmployeeManager() :empNum(0) {}

	// ���ο� ��������� ���� �޼���
	void addEmployee(Employee* emp) {

		empList[empNum++] = emp;


	}

	// ���޵Ǵ� ���� �޿��� ������ ���� �޼���
	void showTotalSalary() {

		int tot = 0;

		for (int i = 0; i < empNum; i++)

			tot += empList[i]->getPay();

		cout << " �޿��� ���� : " << tot << endl;

	}

	// ��ü ��ϵ� ������ ������ ����ϴ� �޼���
	void showAllsalary() {
		for (int i = 0; i < empNum; i++)
			empList[i]->disp();

	}
	~EmployeeManager() {
		// �������� �Ҵ���� ������ ��ȯ�ϴ� ����
		for (int i = 0; i < empNum; i++)
			delete empList[i];

	}


};

int main() {
	EmployeeManager manager;

	// ������� 

	manager.addEmployee(new Permanent("aaa", 10000));
	manager.addEmployee(new Permanent("bbb", 15000));
	manager.addEmployee(new Permanent("ccc", 20000));
	
	manager.addEmployee(new Sales("lee", 100, 1000, 2 ));
	manager.addEmployee(new Sales("pack", 100, 3000, 2));
	manager.addEmployee(new Sales("kim", 100, 5000, 2));

	manager.addEmployee(new Temporary("1�˹�", 42, 80));
	manager.addEmployee(new Temporary("2�˹�", 60, 80));
	manager.addEmployee(new Temporary("3�˹�", 100, 80));

	manager.addEmployee(new ForeignSales("1�ؿ�", 1000, 80,100,'A'));
	manager.addEmployee(new ForeignSales("2�ؿ�", 1500, 80,200,'B'));
	manager.addEmployee(new ForeignSales("3�ؿ�", 1200, 80,300,'C'));


	// �޿�����
	manager.showTotalSalary();

	// ��������
	manager.showAllsalary();

	return 0;
}