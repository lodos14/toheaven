/*

 ��Ӱ� ������ �׸��� �߻�޼���
 ȸ�翡�� �������� �޿��� �������� ���α׷� ����
 ������(Permanent)���� ���� -�̸��� �޿�
 ���ο� �������, �Ŵ� ���޵Ǵ� ���� �޿��� ����, ��������

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

		cout << "�̸� : " << name << endl;
		cout << "�޿� : " << getPay() << endl << endl;

	}

};

// ��ü ���� �迭
Permanent* empList[100]; // 100�� ������ ����
int empNum = 0;

// ���ο� ��������� ���� �޼���
void addEmployee(Permanent *emp) {
	
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

int main() {
	// ������� 

	addEmployee(new Permanent("aaa", 10000));
	addEmployee(new Permanent("bbb", 15000));
	addEmployee(new Permanent("ccc", 20000));
	
	
	
	// �޿�����
	showTotalSalary();

	// ��������
	showAllsalary();

	return 0;
}