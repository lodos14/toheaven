#include<iostream>
#include<string>
using namespace std;

#include"Account.h"
#include"NomalAccount.h"
NormalAccount::NormalAccount(string name, int id, int money, int rate)
	:Account(name, id, money), rate(rate){}

void NormalAccount::input(int money) {
	// �Ա�ó�� ����
	//int don = money + (money * (rate / 100.0));
	Account::inMoney(money);  // �Աݾ�
	Account::inMoney(money * (rate / 100.0)); // ����
}