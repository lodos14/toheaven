// ��������ڸ� �߰��ϰ� Ŭ������ �и��ؼ� ����

// Account Ŭ���� ����, ��ü ������ �迭 ���
#include<iostream>
#include<cstring>      // string.h
#pragma warning(disable:4996)

using namespace std;
const int NAME_LEN = 20;


// ���� �Լ�
void showMenu();       // �޴����
void makeAccount();    // ���°���
void depositMoney();   // �Ա�ó��
void withdrawMoney();  // ���ó��
void showAllAccount(); // ��ü�� �ܾ���ȸ

// ������
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

// Ŭ����
class Account {
    int id;              // ���¹�ȣ
    int balance;         // �����ܰ� 
    char* name;  //���̸�

public:
    // ������ �޼���
    Account(int id, int money, char* cusName)
        :id(id), balance(money) {// id���� ���� ���� id, cstring�� ���Կ����ڸ� ���X
        // ���� �Ҵ�.
        name = new char[strlen(cusName) + 1]; // �����ְ� ���ڸ� �� ����� ��.
        strcpy(name, cusName);
    }

    // ���� ������
    Account(Account& ref)
        : id(ref.id), balance(ref.balance) {
        name = new char[strlen(ref.name) + 1];
        strcpy(name, ref.name);
    }


    int getId() { return id; }
    int getBalance() { return balance; } // private�� �ٸ� ������ ����
    void inBalance(int money) {         // �Ա�
        balance += money;
    }
    int outBalance(int money) {         // ���
        if (balance < money)
            return 0;                 // �ܾ��� ������ ���
        else
            balance -= money;
        return money;
    }

    void showAccount() {
        cout << id << " : " << name << " : " << balance << endl; //�Ѱ��� account�� ����ϴ� �޼���
    }
    ~Account() {
        delete[] name;
    }

};

// ��ü ������ �迭 : �����Ҵ� -> ����� 2���� 3���� 4���� �� �ٸ���. 
Account* acclist[100];         // ������ ��ȿ����.
int accNum = 0;

int main() {
    int menu;

    while (true) {
        showMenu();
        cout << "�޴� = ";
        cin >> menu;

        switch (menu) {
        case MAKE:                   // ���°���
            makeAccount(); break;
        case DEPOSIT:                // �Ա�ó��
            depositMoney(); break;
        case WITHDRAW:               // ����ó��
            withdrawMoney(); break;
        case INQUIRE:                // �ܾ���ȸ
            showAllAccount(); break;
        case EXIT:                   // �۾�����
           // �����Ҵ� ��ȯ
            for (int i = 0; i < accNum; i++) {
                delete acclist[i];
            }
            cout << "���α׷��� �����մϴ�.\n";
            return 0;
        default:
            cout << "�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n";
        }
    }

    return 0;
}

void showMenu() {       // �޴����
    cout << "==== Bank Menu ====\n";
    cout << "1. ���°���\n";
    cout << "2. �Ա�ó��\n";
    cout << "3. ���ó��\n";
    cout << "4. �ܾ���ȸ\n";
    cout << "5. ���α׷� ����\n";
    cout << "===================\n";
}

void makeAccount() {  // ���°���
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

void depositMoney() {  // �Ա�ó��
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

void withdrawMoney() { // ���ó��
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

void showAllAccount() { // ��ü�� �ܾ���ȸ
    cout << "== ��ü�� �ܾ� ��ȸ ==\n";
    for (int i = 0; i < accNum; i++) {
        acclist[i]->showAccount();
    }
}
