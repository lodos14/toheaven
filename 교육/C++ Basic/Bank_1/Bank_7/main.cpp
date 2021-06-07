/*
   �������� : ���뿹��(NomalAccount), �ſ뿹��(HighAccount)
   ó������
   1. ���뿹���� ������ ���ݰ� �����ϳ� �Ա�ó���� ����ɽ�
      �Աݾ��� 3%�� ���ڷ� �߰��Ա��Ѵ�.
   2. �ſ뿹���� ���� �ſ뿡 ���� �Ա�ó���� ����ɽ�
      A����� 7%�� ���ڷ� �߰��Ա�, B����� 5%, C��� 3%��
      �����Ѵ�.
   3. ���¸� �����ϴ� �������� �ԱݵǴ� �ݾ׿� ���ڸ� �������
      �ʴ´�.
   4. ���¸� ������ �� �Աݰ����� ��ĥ������ ���ڸ� �߰��Ѵ�.
   5. ���ڸ� ����ϴ� �������� �߻��ϴ� �Ҽ��������� �ݾ���
      �����Ѵ�.
   6. ��Ÿ ������ ����� ���Ŀ� �°� �����Ѵ�.

   <�Է� �� �������>
   ==== Bank Menu ====
   1. ���°���
   2. �Ա�ó��
   3. ���ó��
   4. ��ü�� �ܾ���ȸ
   5. ���α׷� ����
   ====================
   �޴� =

   ==== ���°��� ====
   1. ���뿹�� ���°���
   2. �ſ뿹�� ���°���
   =================
   ���� = 1

   ���¹�ȣ =
   ���̸� =
   ���ݱݾ� =
   ����������(%) =

   ==== ���°��� ====
   1. ���뿹�� ���°���
   2. �ſ뿹�� ���°���
   =================
   ���� = 2

   ���¹�ȣ =
   ���̸� =
   ���ݱݾ� =
   ����������(%) =
   �ſ���(1toA, 2toB, 3toC) =
*/

#include<iostream>
#include<cstring> // string.h
#pragma warning(disable:4996)

using namespace std;
const int NAME_LEN = 20; // static, final ����

#include"BankingSystem.h"
// ������
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

int main() {
    int menu;
    BankingSystem manager;

    while (true) {
        manager.showMenu();
        cout << "�޴� = ";
        cin >> menu;

        switch (menu) {
        case MAKE: // ���°���
            manager.makeAccount(); break;
        case DEPOSIT: // �Ա�ó��
            manager.depositMoney(); break;
        case WITHDRAW: // ���ó��
            manager.withdrawMoney(); break;
        case INQUIRE: // �ܾ���ȸ
            manager.showAllAccount(); break;
        case EXIT: // �۾�����            
            cout << "���α׷��� �����մϴ�.\n";
            return 0;
        default:
            cout << "�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n";
        }
    }

    return 0;
}