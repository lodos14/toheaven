#include<iostream>
#include<string>
#include<cstring>
using namespace std;
#include"Account.h"
#pragma warning(disable:4996)


// Account Ŭ���� ������
// ������ �޼���
Account::Account(int id, int money, char* cusName)
	:id(id), balance(money) {// id���� ���� ���� id, cstring�� ���Կ����ڸ� ���X
	// ���� �Ҵ�.
	name = new char[strlen(cusName) + 1]; // �����ְ� ���ڸ� �� ����� ��.
	strcpy(name, cusName);
}

// ���������
Account::Account(const Account& ref)               // �ٸ� ��ü�� ������ �ȵ�����.
	:id(ref.id), balance(ref.balance) {
	name = new char[strlen(ref.name) + 1];
	strcpy(name, ref.name);
}

int Account::getId() const { return id; }         // const
int Account::getBalance() const { return balance; }   // const
void Account::inBalance(int money) {         // �Ա�
	balance += money;
}
int Account::outBalance(int money) {         // ���
	if (balance < money)
		return 0;                 // �ܾ��� ������ ���
	else
		balance -= money;
	return money;
}

void Account::showAccount() const {                 // const -> const�ѰŴ� �����ֱ⸸ �ϴ� �Ŷ� const ���
	cout << id << " : " << name << " : " << balance << endl; //�Ѱ��� account�� ����ϴ� �޼���
}

Account::~Account() {
	delete[] name;
}
