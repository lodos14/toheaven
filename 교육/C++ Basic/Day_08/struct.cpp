/*
  ����ü(structure type)
  - ��������� �ڷ���
  - ���� �ٸ� �ڷḦ ��� �ϳ��� ������ ó���ϴ� �ڷᱸ��
  - ���� : ������� or ����ʵ�
  - c++ ����ü ���� : ����ʵ�� ����޼���� �����ȴ�. // ���������ڴ� ����
  - Ű���� struct
*/

#include <iostream>
#include <cstring>      // c������ string.h ���ϰ� ������. c++�� �Ѿ���鼭 �̸��� ����
/*
strlen : ���ڿ� ����
strcpy : ���ڿ� ����, ���Կ�����(=) ������� ���ϹǷ�.
strcmp : ���ڿ� ��, 0(��ġ), 1, -1
*/

//#include <string>
using namespace std;
#pragma warning(disable:4996)


// ����ü ����
struct Employee {
    char name[20];      // 20byte, ������-19����, �ѱ�-9����
    int pay;

    void disp() {
        cout << "�����̸� : " << name << endl;
        cout << "�����޿� : " << pay << endl << endl;
    }
};

int main() {
    // ����ü���� : ��ü����
    Employee emp[3];

    /*Employee emp1;
    Employee emp2 = { "�庸��", 20000 };
    Employee emp3 ;*/
    emp[1] = { "�庸��", 20000 };

    // ����ü������ �̿��ؼ� ������� : dirct������(.)
    emp[0].pay = 10000;
    //emp.name = "kim";      ���Կ����ڸ� ����� �� ����
    strcpy(emp[0].name, "ȫ�浿");      // strcpy_s - ���ڿ� ũ�⸦ ���������� �ʾ�����..(���־�Ʃ����� -_-)

    cout << "�����̸� = ";
    cin >> emp[2].name;
    cout << "�����޿� = ";
    cin >> emp[2].pay;

    /*for (int i = 0; i < 3; i++) {
       cout << "�����̸� : " << emp[i].name << endl;
       cout << "�����޿� : " << emp[i].pay << endl << endl;
    }*/
    for (int i = 0; i < 3; i++)
        emp[i].disp();

    return 0;
}