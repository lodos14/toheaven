// 복사생성자를 추가하고 클래스를 분리해서 구현

// Account 클래스 정의, 객체 포인터 배열 사용
#include<iostream>
#include<cstring>      // string.h
#pragma warning(disable:4996)

using namespace std;
const int NAME_LEN = 20;


// 전역 함수
void showMenu();       // 메뉴출력
void makeAccount();    // 계좌개설
void depositMoney();   // 입금처리
void withdrawMoney();  // 출금처리
void showAllAccount(); // 전체고객 잔액조회

// 열거형
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

// 클래스
class Account {
    int id;              // 계좌번호
    int balance;         // 예금잔고 
    char* name;  //고객이름

public:
    // 생성자 메서드
    Account(int id, int money, char* cusName)
        :id(id), balance(money) {// id값에 내가 정한 id, cstring은 대입연산자를 사용X
        // 동적 할당.
        name = new char[strlen(cusName) + 1]; // 여유있게 한자리 더 만들어 줌.
        strcpy(name, cusName);
    }

    // 복사 생성자
    Account(Account& ref)
        : id(ref.id), balance(ref.balance) {
        name = new char[strlen(ref.name) + 1];
        strcpy(name, ref.name);
    }


    int getId() { return id; }
    int getBalance() { return balance; } // private라서 다른 식으로 접근
    void inBalance(int money) {         // 입금
        balance += money;
    }
    int outBalance(int money) {         // 출금
        if (balance < money)
            return 0;                 // 잔액이 부족한 경우
        else
            balance -= money;
        return money;
    }

    void showAccount() {
        cout << id << " : " << name << " : " << balance << endl; //한개의 account을 출력하는 메서드
    }
    ~Account() {
        delete[] name;
    }

};

// 객체 포인터 배열 : 동적할당 -> 사람이 2글자 3글자 4글자 다 다르다. 
Account* acclist[100];         // 기존꺼 비효율적.
int accNum = 0;

int main() {
    int menu;

    while (true) {
        showMenu();
        cout << "메뉴 = ";
        cin >> menu;

        switch (menu) {
        case MAKE:                   // 계좌개설
            makeAccount(); break;
        case DEPOSIT:                // 입금처리
            depositMoney(); break;
        case WITHDRAW:               // 츨금처리
            withdrawMoney(); break;
        case INQUIRE:                // 잔액조회
            showAllAccount(); break;
        case EXIT:                   // 작업종료
           // 동적할당 변환
            for (int i = 0; i < accNum; i++) {
                delete acclist[i];
            }
            cout << "프로그램을 종료합니다.\n";
            return 0;
        default:
            cout << "메뉴의 선택이 올바르지 않습니다.\n";
        }
    }

    return 0;
}

void showMenu() {       // 메뉴출력
    cout << "==== Bank Menu ====\n";
    cout << "1. 계좌개설\n";
    cout << "2. 입금처리\n";
    cout << "3. 출금처리\n";
    cout << "4. 잔액조회\n";
    cout << "5. 프로그램 종료\n";
    cout << "===================\n";
}

void makeAccount() {  // 계좌개설
   /* 계좌번호, 고객이름, 예금금액 */
    int num;                     // 계좌번호
    int money;                   // 예금금액
    char cusName[NAME_LEN];       // 고객이름

    cout << "== 계좌 개설 ==\n";
    cout << "계좌번호 = ";
    cin >> num;
    cout << "고객이름 = ";
    cin >> cusName;
    cout << "예금금액 = ";
    cin >> money;

    acclist[accNum++] = new Account(num, money, cusName); // 위에 생성자 메서드로 만들었다. => 계좌 개설
    //accNum++;                                               기존에 들어오면 동적할당이 됨.
}

void depositMoney() {  // 입금처리
   /* 계좌번호를 입력받아 해당 계좌에 금액을 누적하는 작업 */
    int num;
    int money;

    cout << "== 입금처리 ==\n";
    cout << "계좌번호 = ";
    cin >> num;

    for (int i = 0; i < accNum; i++) {  // 비교
        if (acclist[i]->getId() == num) {    // acclist가 포인터로 되어있어서 '->' 사용,  
            cout << "입금금액 = ";
            cin >> money;

            // 해당 계좌에 누적하는 작업
            acclist[i]->inBalance(money);

            cout << "입금처리가 완료 되었습니다. \n";
            return; // 존재 하지 않으면 제어권을 리턴으로 돌아 간다.
        }
        /*else {
           cout << "일치하는 계좌번호가 존재하지 않습니다.";  / for문 동안 계속 뜬다 -> 비효율적.
        }*/
    }
    cout << "일치하는 계좌번호가 존재하지 않습니다.\n";         // for문이 끝나도 존재 하지 않으면 1번 찍는다. , 그런데 일치 하더라도 찍힌다.
}

void withdrawMoney() { // 출금처리
   /* 계좌번호를 입력받고 해당계좌에 금액을 출력한다.
      단, 해당계좌에 잔액이 출금금액보다 클 경우
   */
    int num;
    int money;

    cout << "== 출금처리 ==\n";
    cout << "계좌번호 = ";
    cin >> num;

    for (int i = 0; i < accNum; i++) {  // 비교
        if (acclist[i]->getId() == num) {
            cout << "출금금액 = ";
            cin >> money;

            if (acclist[i]->outBalance(money) == 0) {
                cout << "잔액이 부족합니다." << endl;
                return;
            }
            cout << "출금처리가 완료되었습니다." << endl;
            return; //출금이 완료가 되었는데 "일치하는 계좌번호가 존재하지 않습니다" 뜨면 안되니 return 
        }
    }
    cout << "일치하는 계좌번호가 존재하지 않습니다.\n";
}

void showAllAccount() { // 전체고객 잔액조회
    cout << "== 전체고객 잔액 조회 ==\n";
    for (int i = 0; i < accNum; i++) {
        acclist[i]->showAccount();
    }
}
