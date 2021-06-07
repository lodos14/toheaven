#include<iostream>
#include<string>
using namespace std;

#include"Account.h"
#include"NomalAccount.h"
#include"HighAccount.h"
#include"BankingSystem.h"

BankingSystem::BankingSystem():accNum(0){}

void BankingSystem::showMenu() const {      // �޴����
	cout << "==== Bank Menu ====\n";
	cout << "1. ���°���\n";
	cout << "2. �Ա�ó��\n";
	cout << "3. ���ó��\n";
	cout << "4. ��ü�� �ܾ���ȸ\n";
	cout << "5. ���α׷� ����\n";
	cout << "====================\n";
}

void BankingSystem::makeAccount() {   // ���°���
	cout << "==== ���°��� ====\n";
	cout << "1. ���뿹�� ���°���\n";
	cout << "2. �ſ뿹�� ���°���\n";
	cout << "=================\n";
	cout << "���� = ";
	int ch;
	cin >> ch;

	if (ch == 1) {
		makeNomalAccount();
	}
	else if (ch == 2) {
		makeHighAccount();
	}
	else {
		cout << "������ �ùٸ��� �ʽ��ϴ�.\n";
	}
}

void BankingSystem::makeNomalAccount() {
	string name;
	int id;
	int money;
	int rate;

	cout << "== ���뿹�� ���°��� ==\n";
	cout << "���¹�ȣ = ";
	cin >> id;
	cout << "���̸� = ";
	cin >> name;
	cout << "���ݱݾ� = ";
	cin >> money;
	cout << "������(%) = ";
	cin >> rate;

	// �θ� ��ü�� �ڽ� ��ü�� ��Ƽ� ���� - ���������� ǥ��
	accList[accNum++] = new NormalAccount(name, id, money, rate);
	cout << "���뿹�� ���°����� �Ϸ�Ǿ����ϴ�.\n";
}

void BankingSystem::makeHighAccount() {
	string name;
	int id;
	int money;
	int rate;
	int special;

	cout << "== �ſ뿹�� ���°��� ==\n";
	cout << "���¹�ȣ = ";
	cin >> id;
	cout << "���̸� = ";
	cin >> name;
	cout << "���ݱݾ� = ";
	cin >> money;
	cout << "������(%) = ";
	cin >> rate;
	cout << "�ſ���(1toA, 2toB, 3toC) = ";
	cin >> special;

	// �θ� ��ü�� �ڽ� ��ü�� ��Ƽ� ���� - ���������� ǥ��
	switch (special) {
	case 1:
		accList[accNum++] = new HighAccount(name, id, money, rate, 7);
		break;
	case 2:
		accList[accNum++] = new HighAccount(name, id, money, rate, 5);
		break;
	case 3:
		accList[accNum++] = new HighAccount(name, id, money, rate, 3);		
	}
	cout << "�ſ뿹�� ���°����� �Ϸ�Ǿ����ϴ�.\n";
}

void BankingSystem::depositMoney() {  // �Ա�ó��	 
	int num;
	int money;

	cout << "== �Ա�ó�� ==\n";
	cout << "���¹�ȣ = ";
	cin >> num;

	for (int i = 0; i < accNum; i++) {
		if (accList[i]->getId() == num) { // ���¹�ȣ�� �����Ѵٸ�
			cout << "�Աݱݾ� = ";
			cin >> money;

			// �ش� ���¿� �����ϴ� �۾�
			accList[i]->input(money);

			cout << "�Ա�ó���� �Ϸ�Ǿ����ϴ�.\n";
			return;
		}
		/*else {
			cout << "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�.\n";
		}*/
	}
	cout << "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�.\n";
}

void BankingSystem::withdrawMoney() { // ���ó��
	/* ���¹�ȣ�� �Է¹ް� �ش���¿� �ݾ��� ����Ѵ�.
	   ��, �ش���¿� �ܾ��� ��ݱݾ׺��� Ŭ ���
	*/
	int num;
	int money;

	cout << "== ���ó�� ==\n";
	cout << "���¹�ȣ = ";
	cin >> num;

	for (int i = 0; i < accNum; i++) {
		if (accList[i]->getId() == num) { // ���°� �����Ѵٸ�
			cout << "��ݱݾ� = ";
			cin >> money;

			if (accList[i]->outMoney(money) == 0) {
				cout << "�ܾ��� �����մϴ�.\n";
				return;
			}
			cout << "���ó���� �Ϸ�Ǿ����ϴ�.\n";
			return;
		}
	}
	cout << "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�.\n";
}

void BankingSystem::showAllAccount() const { // ��ü�� �ܾ���ȸ
	cout << "== ��ü�� �ܾ� ��ȸ ==\n";
	for (int i = 0; i < accNum; i++) {
		accList[i]->showAccount();
	}
}

BankingSystem::~BankingSystem(){
	for (int i = 0; i < accNum; i++)
		delete accList[i];
}
