/*

 ��ü ���� ���α׷�(OOP, Object-Oriented Programming)
 - ��� �����͸� ��ü(Object)�� ����Ͽ� ó���ϴ� ��ü �߽� ���α׷�
 - ���� ��� ���� ��ü
 - Ư¡ : �߻�ȭ, ����ȭ, ��������, ��Ӱ�, ������

 Ŭ������ ��ü
 - Ŭ����(class) : ��ü(Object)�� �𵨸��Ѵ� ��
   �ڷᱸ�� : ����, �迭, ����ü
   �������(propery)-�Ӽ�, ����޼���(method, �Լ�)-������ �ൿ
   ����������(����������): private, public, protected

 - ��ü(Object)�� ��ü(instance)

*/

#include<iostream>
#include<string>
using namespace std;
#include"Person.h"

int main() {

	// ��ü(instance)�� �����ؾ� �Ѵ�.

	//Person p();
	//p.name = "ȫ�浿";
	Person p("ȫ�浿");
	
	//Person q;
	//q.name = "�庸��";
	Person q("�庸��");

	//Person w;
	// w.name = "������"
	Person w("������");

	// ��ü�� �̿��ؼ� ����� ���� : direct ������(.)
	p.walk(5);
	p.run(10);

	q.walk(10);
	q.run(15);

	w.walk(20);

	return 0;
}