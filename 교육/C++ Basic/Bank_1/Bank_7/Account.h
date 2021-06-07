#pragma once
#include<iostream>
#include<string>

class Account {
	string name;
	int id;
	int balance;

public:
	Account(string name, int id, int money);

	void setName(string name);
	string getName() const;
	int getId() const;
	void inMoney(int money);
	int outMoney(int money);
	int getBalance() const;
	void showAccount() const;

	// Account => Nomal, High
	virtual void input(int money);
};
