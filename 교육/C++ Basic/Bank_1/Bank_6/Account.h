#pragma once

// Ŭ����
class Account {
	int id;              // ���¹�ȣ
	int balance;         // �����ܰ� 
	char* name;  //���̸�

public:
	// ������ �޼���
	Account(int id, int money, char* cusName);


	// ���������
	Account(const Account& ref);


	int getId() const;       // const
	int getBalance() const;   // const
	void inBalance(int money);
	int outBalance(int money);

	void showAccount() const;
	~Account();
};
