#include<iostream>
#include<string>
using namespace std;

#include"Account.h"

Account::Account(string name, int id, int money)
	:name(name), id(id), balance(money){}

void Account::setName(string name) {
	this->name = name;
}

string Account::getName() const {
	return name;
}

int Account::getId() const {
	return id;
}

void Account::inMoney(int money) {
	// �Ա�ó���� ���� �޼���
	balance += money;
}

int Account::outMoney(int money){
	// ���ó���� ���� �޼���
	if (balance < money)
		return 0;
	
	balance -= money;
	return money;
}

int Account::getBalance() const {
	return balance;
}

void Account::showAccount() const {
	cout << "���¹�ȣ : " << id << endl;
	cout << "���̸� : " << name << endl;
	cout << "���ݱݾ� : " << getBalance() << endl << endl;
}

void Account::input(int money) {}