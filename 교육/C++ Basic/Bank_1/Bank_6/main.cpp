#include<iostream>
#include<string>
using namespace std;
#include"AccountManager.h"
#include"Account.h"

// ������
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

int main() {
	int menu;
	AccountManager manager;

	while (true) {
		manager.showMenu();
		cout << "�޴� = ";
		cin >> menu;

		switch (menu) {
		case MAKE:                   // ���°���
			manager.makeAccount(); break;
		case DEPOSIT:                // �Ա�ó��
			manager.depositMoney(); break;
		case WITHDRAW:               // ����ó��
			manager.withdrawMoney(); break;
		case INQUIRE:                // �ܾ���ȸ
			manager.showAllAccount(); break;
		case EXIT:                   // �۾�����
			//// �����Ҵ� ��ȯ
			//for (int i = 0; i < accNum; i++) {   ===> AccountManager �Ҹ��ڷ� ���� ���� ��������.
			//	delete acclist[i];
			//}
			cout << "���α׷��� �����մϴ�.\n";
			return 0;
		default:
			cout << "�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n";
		}
	}

	return 0;
}
