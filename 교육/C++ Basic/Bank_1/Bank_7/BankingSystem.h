#pragma once
#include"Account.h"

class BankingSystem {
    // ��ü ������ �迭 : �����Ҵ�
    Account* accList[100];
    int accNum;

public:
    BankingSystem();

    void showMenu() const; // �޴����
    void makeAccount();   // ���°���
    void makeNomalAccount();
    void makeHighAccount();
    void depositMoney();  // �Ա�ó��
    void withdrawMoney(); // ���ó��
    void showAllAccount() const; // ��ü�� �ܾ���ȸ

    ~BankingSystem();
};
