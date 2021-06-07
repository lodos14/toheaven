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
	// 입금처리를 위한 메서드
	balance += money;
}

int Account::outMoney(int money){
	// 출금처리를 위한 메서드
	if (balance < money)
		return 0;
	
	balance -= money;
	return money;
}

int Account::getBalance() const {
	return balance;
}

void Account::showAccount() const {
	cout << "계좌번호 : " << id << endl;
	cout << "고객이름 : " << name << endl;
	cout << "예금금액 : " << getBalance() << endl << endl;
}

void Account::input(int money) {}