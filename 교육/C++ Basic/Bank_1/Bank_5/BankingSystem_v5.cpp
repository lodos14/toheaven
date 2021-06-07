/*
   Entity Class�� Handler Class �и��ϴ� �۾�
   - Handler Class or Control Class
      : ���α׷� ��ü�� ����� ����ϴ� Ŭ����
      : ����� ������ ���� Ŭ����
   - Entity Class
      : �������� ������ ���ϴ�.
      : ���α׷��� ����� �ľ����� ���Ѵ�.
      : �ܼ��� �����͸� ��� �����ϴ� ��Ȱ�� �����Ѵ�.

   - �и��ؾ� Ȯ�忡 �����ϴ�.
*/

#include<iostream>
#include<cstring>      // string.h
#pragma warning(disable:4996)

using namespace std;
const int NAME_LEN = 20; //

// ������
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

/*
   Ŭ���� �̸� : Account
   Ŭ���� ���� : Entity Ŭ����
*/

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

// Account Ŭ���� ������
// ������ �޼���
Account::Account(int id, int money, char* cusName)
    :id(id), balance(money) {// id���� ���� ���� id, cstring�� ���Կ����ڸ� ���X
    // ���� �Ҵ�.
    name = new char[strlen(cusName) + 1]; // �����ְ� ���ڸ� �� ����� ��.
    strcpy(name, cusName);
}

// ���������
Account::Account(const Account& ref)               // �ٸ� ��ü�� ������ �ȵ�����.
    :id(ref.id), balance(ref.balance) {
    name = new char[strlen(ref.name) + 1];
    strcpy(name, ref.name);
}

int Account::getId() const { return id; }         // const
int Account::getBalance() const { return balance; }   // const
void Account::inBalance(int money) {         // �Ա�
    balance += money;
}
int Account::outBalance(int money) {         // ���
    if (balance < money)
        return 0;                 // �ܾ��� ������ ���
    else
        balance -= money;
    return money;
}

void Account::showAccount() const {                 // const -> const�ѰŴ� �����ֱ⸸ �ϴ� �Ŷ� const ���
    cout << id << " : " << name << " : " << balance << endl; //�Ѱ��� account�� ����ϴ� �޼���
}

Account::~Account() {
    delete[] name;
}


/*
   Ŭ���� �̸� : AccountManager
   Ŭ���� ���� : Handler Ŭ���� or Control Ŭ����
*/

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
    //accNum++;                                               ������ ������ �����Ҵ��� ��.
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

/*
   ��Ʈ�� Ŭ������ AccountManager �߽����� Main ����
*/

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
           //   delete acclist[i];
           //}
            cout << "���α׷��� �����մϴ�.\n";
            return 0;
        default:
            cout << "�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n";
        }
    }

    return 0;
}