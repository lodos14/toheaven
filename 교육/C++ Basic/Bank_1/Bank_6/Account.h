#pragma once

// 클래스
class Account {
	int id;              // 계좌번호
	int balance;         // 예금잔고 
	char* name;  //고객이름

public:
	// 생성자 메서드
	Account(int id, int money, char* cusName);


	// 복사생성자
	Account(const Account& ref);


	int getId() const;       // const
	int getBalance() const;   // const
	void inBalance(int money);
	int outBalance(int money);

	void showAccount() const;
	~Account();
};
