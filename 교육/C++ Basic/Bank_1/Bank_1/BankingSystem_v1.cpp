#include<iostream>
#include<cstring> // string.h
#pragma warning(disable:4996)


/*

 strlen : ���ڿ� ����
 strcpy : ���ڿ� ����, ���ڿ��� ���Կ�����(=)�� ���Ұ�
 strcmp : ���ڿ� ��, ��� (1, 0:��ġ, -1)
		  strcmp(���ڿ�1, ���ڿ�2)

*/

using namespace std;
const int NAME_LEN = 20; // static, final ����

// #define NAME_LEN = 20

// �����Լ� �����
void showMenu(); // �޴����
void makeAccount(); // ���°輳
void depositMoney(); // �Ա�ó��
void withdraMoney(); //���ó��
void showAllAccount(); // ��ü�� �ܾ���ȸ

// ������
enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};  // {1, 2, 3, 4, 5}

// ����ü - ���� ���õ� �ڷ����� �ϳ��� ��� �����ϴ� �ڷᱸ��
struct Account {
	int id;   // ���¹�ȣ
	int balance;  // �����ܰ�
	char name[NAME_LEN];  // ���̸�

};

// �������� - ��� �Լ��� �����ؼ� ��� ������ ����
Account accList[100]; // Account ����ü�� �迭
int accIndex = 0;    // Account �迭�� �ε���
int main() {
	int menu;

	while (true) {
		showMenu();
		cout << "�޴� = ";
		cin >> menu;

		switch (menu) {

		case MAKE:  // ���°���
			makeAccount(); break;
		case DEPOSIT: // �Ա�ó��
			depositMoney(); break;
		case WITHDRAW: // ���ó��
			withdraMoney(); break;
		case INQUIRE: // �ܾ���ȸ
			showAllAccount(); break;
		case EXIT: // �۾�����
			cout << "���α׷��� �����մϴ�.\n";
			return 0;
		default:
			cout << "�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n";
		}

	}







	return 0;

}



// �Լ����� ����

void showMenu() {   // �޴����

	cout << "==== Bank Menu ====\n";
	cout << "1. ���°���\n";
	cout << "2. �Ա�ó��\n";
	cout << "3. ���ó��\n";
	cout << "4. �ܾ���ȸ\n";
	cout << "5. ���α׷� ����\n";

}

void makeAccount() { // ���°輳
	/* ���¹�ȣ, ���̸�, ���ݱݾ� */
	int num;                           // ���¹�ȣ
	int money;                         // ���ݱݾ�
	char cusName[NAME_LEN];            // ���̸�


	cout << "== ���°��� ==\n";
	cout << "���¹�ȣ = \n";
	cin >> num;
	cout << "���̸� = \n";
	cin >> cusName;
	cout << "���ݱݾ� = \n";
	cin >> money;


	accList[accIndex].id = num;
	accList[accIndex].balance = money;
	strcpy(accList[accIndex].name, cusName);   //                     �˾ƺ���
	accIndex++; // ���� �迭�� ��ġ�� �̵��ϱ� ���ؼ�

}
void depositMoney() { // �Ա�ó��
		/* ���¹�ȣ�� �Է¹޾� �ش� ���¿� �ݾ��� �����ϴ� �۾� */
	int num;
	int money;

	cout << "== �Ա�ó�� ==\n";
	cout << "���¹�ȣ = ";
	cin >> num;

	for (int i = 0; i < accIndex; i++) {
		if (accList[i].id == num) { // ���¹�ȣ�� �����Ѵٸ�
			cout << "�Աݱݾ� = ";
			cin >> money;

			// �ش���¿� �����ϴ� �۾�
			accList[i].balance += money;

			cout << "�Ա�ó���� �Ϸ�Ǿ����ϴ�.\n";
			return;

		}
		/*else {
			cout << "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�.\n";
		}*/


	}
	
	cout << "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�.\n";

}
void withdraMoney() { //���ó��
		/* ���¹�ȣ�� �Է¹ް� �ش���¿� �ݾ��� ����Ѵ�.
		    ��, �ش���¿� �ܾ��� ��� �ݾ׺��� Ŭ ���*/
	int num;
	int money;

	cout << "== ���ó�� ==\n";
	cout << "���¹�ȣ = ";
	cin >> num;

	for (int i = 0; i < accIndex; i++) {
		if (accList[i].id == num) { // ���°� ���� �Ѵٸ�
			cout << "��ݱݾ� = ";
			cin >> money;

			if (accList[i].balance < money) {
				cout << "�ܾ��� �����մϴ�.\n";
				return;

			}

			accList[i].balance -= money;
			cout << "���ó���� �Ϸ�Ǿ����ϴ�.\n";
			return;

		}
	}
	cout << "��ġ�ϴ� ���¹�ȣ�� �����ϴ�";
}

void showAllAccount() { // ��ü�� �ܾ���ȸ

	cout << "== ��ü�� �ܾ� ��ȸ ==\n";

	for (int i = 0; i < accIndex; i++) {
		cout << accList[i].id << ":" << accList[i].name;
		cout << ":" << accList[i].balance << endl;


	}


}
