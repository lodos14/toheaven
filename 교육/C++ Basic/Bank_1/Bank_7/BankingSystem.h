#pragma once
#include"Account.h"

class BankingSystem {
    // 객체 포인터 배열 : 동적할당
    Account* accList[100];
    int accNum;

public:
    BankingSystem();

    void showMenu() const; // 메뉴출력
    void makeAccount();   // 계좌개설
    void makeNomalAccount();
    void makeHighAccount();
    void depositMoney();  // 입금처리
    void withdrawMoney(); // 출금처리
    void showAllAccount() const; // 전체고객 잔액조회

    ~BankingSystem();
};
