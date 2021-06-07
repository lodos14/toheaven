#include<iostream>
#include<string>
using namespace std;
#include"AccountManager.h"
const int NAME_LEN = 20; //


// AccountManager Ŭ���� ������
AccountManager::AccountManager() :accNum(0) {}

AccountManager::~AccountManager() {
	for (int i = 0; i < accNum; i++)
		delete acclist[i];   // �����Ҵ� ��ȯ.
}


void AccountManager::showMenu() const {       // �޴����
	cout << "==== Bank Menu ====\n";
	cout << "1. ���°���\n";
	cout << "2. �Ա�ó��\n";
	cout << "3. ���ó��\n";
	cout << "4. �ܾ���ȸ\n";
	cout << "5. ���α׷� ����\n";
	cout << "===================\n";
}

void AccountManager::makeAccount() {  // ���°���
	/* ���¹�ȣ, ���̸�, ���ݱݾ� */
	int num;                     // ���¹�ȣ
	int money;                   // ���ݱݾ�
	char cusName[NAME_LEN];       // ���̸�

	cout << "== ���� ���� ==\n";
	cout << "���¹�ȣ = ";
	cin >> num;
	cout << "���̸� = ";
	cin >> cusName;
	cout << "���ݱݾ� = ";
	cin >> money;

	acclist[accNum++] = new Account(num, money, cusName); // ���� ������ �޼���� �������. => ���� ����
	//accNum++;	                                            ������ ������ �����Ҵ��� ��.
}

void AccountManager::depositMoney() {  // �Ա�ó��
	/* ���¹�ȣ�� �Է¹޾� �ش� ���¿� �ݾ��� �����ϴ� �۾� */
	int num;
	int money;

	cout << "== �Ա�ó�� ==\n";
	cout << "���¹�ȣ = ";
	cin >> num;

	for (int i = 0; i < accNum; i++) {  // ��
		if (acclist[i]->getId() == num) {    // acclist�� �����ͷ� �Ǿ��־ '->' ���,  
			cout << "�Աݱݾ� = ";
			cin >> money;

			// �ش� ���¿� �����ϴ� �۾�
			acclist[i]->inBalance(money);

			cout << "�Ա�ó���� �Ϸ� �Ǿ����ϴ�. \n";
			return; // ���� ���� ������ ������� �������� ���� ����.
		}
		/*else {
			cout << "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�.";  / for�� ���� ��� ��� -> ��ȿ����.
		}*/
	}
	cout << "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�.\n";         // for���� ������ ���� ���� ������ 1�� ��´�. , �׷��� ��ġ �ϴ��� ������.
}

void AccountManager::withdrawMoney() { // ���ó��
	/* ���¹�ȣ�� �Է¹ް� �ش���¿� �ݾ��� ����Ѵ�.
	   ��, �ش���¿� �ܾ��� ��ݱݾ׺��� Ŭ ���
	*/
	int num;
	int money;

	cout << "== ���ó�� ==\n";
	cout << "���¹�ȣ = ";
	cin >> num;

	for (int i = 0; i < accNum; i++) {  // ��
		if (acclist[i]->getId() == num) {
			cout << "��ݱݾ� = ";
			cin >> money;

			if (acclist[i]->outBalance(money) == 0) {
				cout << "�ܾ��� �����մϴ�." << endl;
				return;
			}
			cout << "���ó���� �Ϸ�Ǿ����ϴ�." << endl;
			return; //����� �Ϸᰡ �Ǿ��µ� "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�" �߸� �ȵǴ� return 
		}
	}
	cout << "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�.\n";
}

void AccountManager::showAllAccount() const { // ��ü�� �ܾ���ȸ
	cout << "== ��ü�� �ܾ� ��ȸ ==\n";
	for (int i = 0; i < accNum; i++) {
		acclist[i]->showAccount();
	}
}
