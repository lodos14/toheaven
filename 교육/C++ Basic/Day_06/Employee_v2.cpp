#include<iostream>
#include<string>
using namespace std;

/*

 Ŭ���� �̸� : Permanent
 Ŭ���� ���� : Entity Ŭ����

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

		cout << "�̸� : " << name << endl;
		cout << "�޿� : " << getPay() << endl << endl;

	}

};

/*
 Ŭ���� �̸� : EmployeeManager
 Ŭ���� ���� : Handler or Conrtol Ŭ����
*/

class EmployeeManager {

	Permanent* empList[100]; // 100�� ������ ����
	int empNum;

public:

	EmployeeManager():empNum(0){}

	// ���ο� ��������� ���� �޼���
	void addEmployee(Permanent* emp) {

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



	// �޿�����
	manager.showTotalSalary();

	// ��������
	manager.showAllsalary();

	return 0;
}