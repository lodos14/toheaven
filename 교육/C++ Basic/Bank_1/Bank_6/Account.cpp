#include<iostream>
#include<string>
#include<cstring>
using namespace std;
#include"Account.h"
#pragma warning(disable:4996)


// Account 클래스 구현부
// 생성자 메서드
Account::Account(int id, int money, char* cusName)
	:id(id), balance(money) {// id값에 내가 정한 id, cstring은 대입연산자를 사용X
	// 동적 할당.
	name = new char[strlen(cusName) + 1]; // 여유있게 한자리 더 만들어 줌.
	strcpy(name, cusName);
}

// 복사생성자
Account::Account(const Account& ref)               // 다른 객체가 들어오면 안됨으로.
	:id(ref.id), balance(ref.balance) {
	name = new char[strlen(ref.name) + 1];
	strcpy(name, ref.name);
}

int Account::getId() const { return id; }         // const
int Account::getBalance() const { return balance; }   // const
void Account::inBalance(int money) {         // 입금
	balance += money;
}
int Account::outBalance(int money) {         // 출금
	if (balance < money)
		return 0;                 // 잔액이 부족한 경우
	else
		balance -= money;
	return money;
}

void Account::showAccount() const {                 // const -> const한거는 보여주기만 하는 거라서 const 사용
	cout << id << " : " << name << " : " << balance << endl; //한개의 account을 출력하는 메서드
}

Account::~Account() {
	delete[] name;
}
