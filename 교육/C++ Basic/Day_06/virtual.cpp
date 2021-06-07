/*

 �����Լ�(virtual Function)
 - �Ļ� Ŭ�������� �������� ������ ����ϴ� ��� �Լ�
 - �������̵�(overriding): �θ�� �ڽ� ������ �̸��� ������ �ִ� �޼���
   ���� : ����Ÿ�԰� �Ű������� ���ƾ� �Ѵ�.
		  �ڽİ�ü�� �޼���� ȣ��ȴ�.

- Ű����
  virtual ����Լ��� ����;

*/
#include<iostream>
using namespace std;


class A {
public:
	virtual void disp() {
		cout << "A Ŭ������ disp() �Լ�" << endl;

	}

};

class B : public A {
public:
	virtual void disp() {
		cout << "BŬ������ disp() �Լ�" << endl;
	}
};
int main() {
	// ������ : �θ�ü�� �ڽİ�ü�� ��Ƽ� ǥ���ϴ� ��
	A* ptr; // ��ü ������ 
	A obj_a;
	B obj_b;

	ptr = &obj_a;
	ptr->disp();
	
	ptr = &obj_b; // ������ / �θ�ü�� �ڽİ�ü�� ��� ��
	ptr->disp();

	return 0;


}
