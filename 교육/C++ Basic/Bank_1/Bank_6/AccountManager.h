#pragma once

#include"Account.h"

class AccountManager {
	// ��ü ������ �迭 :  
	Account* acclist[100];
	int accNum;

public:
	AccountManager();

	void showMenu() const;       // �޴����
	void makeAccount();    // ���°���
	void depositMoney();   // �Ա�ó��
	void withdrawMoney();  // ���ó��
	void showAllAccount() const; // ��ü�� �ܾ���ȸ

	~AccountManager();

};
