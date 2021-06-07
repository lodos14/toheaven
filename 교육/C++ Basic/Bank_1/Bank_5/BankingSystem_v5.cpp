/*
   Entity Class와 Handler Class 분리하는 작업
   - Handler Class or Control Class
      : 프로그램 전체에 기능을 담당하는 클래스
      : 기능적 성격이 강한 클래스
   - Entity Class
      : 데이터적 성격이 강하다.
      : 프로그램에 기능을 파악하지 못한다.
      : 단순히 데이터를 담아 관리하는 역활만 수행한다.

   - 분리해야 확장에 유리하다.
*/

#include<iostream>
#include<cstring>      // string.h
#pragma warning(disable:4996)

using namespace std;
const int NAME_LEN = 20; //

// 열거형
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

/*
   클래스 이름 : Account
   클래스 유형 : Entity 클래스
*/

// 클래스
class Account {
    int id;              // 계좌번호
    int balance;         // 예금잔고 
    char* name;  //고객이름

public:
    // 생성자 메서드
    Account(int id, int money, char* cusName);


    // 복사생성자
    Account(const Account& ref);


    int getId() const;       // const
    int getBalance() const;   // const
    void inBalance(int money);
    int outBalance(int money);

    void showAccount() const;
    ~Account();
};

// Account 클래스 구현부
// 생성자 메서드
Account::Account(int id, int money, char* cusName)
    :id(id), balance(money) {// id값에 내가 정한 id, cstring은 대입연산자를 사용X
    // 동적 할당.
    name = new char[strlen(cusName) + 1]; // 여유있게 한자리 더 만들어 줌.
    strcpy(name, cusName);
}

// 복사생성자
Account::Account(const Account& ref)               // 다른 객체가 들어오면 안됨으로.
    :id(ref.id), balance(ref.balance) {
    name = new char[strlen(ref.name) + 1];
    strcpy(name, ref.name);
}

int Account::getId() const { return id; }         // const
int Account::getBalance() const { return balance; }   // const
void Account::inBalance(int money) {         // 입금
    balance += money;
}
int Account::outBalance(int money) {         // 출금
    if (balance < money)
        return 0;                 // 잔액이 부족한 경우
    else
        balance -= money;
    return money;
}

void Account::showAccount() const {                 // const -> const한거는 보여주기만 하는 거라서 const 사용
    cout << id << " : " << name << " : " << balance << endl; //한개의 account을 출력하는 메서드
}

Account::~Account() {
    delete[] name;
}


/*
   클래스 이름 : AccountManager
   클래스 유형 : Handler 클래스 or Control 클래스
*/

class AccountManager {
    // 객체 포인터 배열 :  
    Account* acclist[100];
    int accNum;

public:
    AccountManager();

    void showMenu() const;       // 메뉴출력
    void makeAccount();    // 계좌개설
    void depositMoney();   // 입금처리
    void withdrawMoney();  // 출금처리
    void showAllAccount() const; // 전체고객 잔액조회

    ~AccountManager();

};

// AccountManager 클래스 구현부
AccountManager::AccountManager() :accNum(0) {}

AccountManager::~AccountManager() {
    for (int i = 0; i < accNum; i++)
        delete acclist[i];   // 동적할당 반환.
}


void AccountManager::showMenu() const {       // 메뉴출력
    cout << "==== Bank Menu ====\n";
    cout << "1. 계좌개설\n";
    cout << "2. 입금처리\n";
    cout << "3. 출금처리\n";
    cout << "4. 잔액조회\n";
    cout << "5. 프로그램 종료\n";
    cout << "===================\n";
}

void AccountManager::makeAccount() {  // 계좌개설
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

void AccountManager::depositMoney() {  // 입금처리
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

void AccountManager::withdrawMoney() { // 출금처리
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

void AccountManager::showAllAccount() const { // 전체고객 잔액조회
    cout << "== 전체고객 잔액 조회 ==\n";
    for (int i = 0; i < accNum; i++) {
        acclist[i]->showAccount();
    }
}

/*
   컨트롤 클래스인 AccountManager 중심으로 Main 변경
*/

int main() {
    int menu;
    AccountManager manager;

    while (true) {
        manager.showMenu();
        cout << "메뉴 = ";
        cin >> menu;

        switch (menu) {
        case MAKE:                   // 계좌개설
            manager.makeAccount(); break;
        case DEPOSIT:                // 입금처리
            manager.depositMoney(); break;
        case WITHDRAW:               // 츨금처리
            manager.withdrawMoney(); break;
        case INQUIRE:                // 잔액조회
            manager.showAllAccount(); break;
        case EXIT:                   // 작업종료
           //// 동적할당 변환
           //for (int i = 0; i < accNum; i++) {   ===> AccountManager 소멸자로 따로 만들어서 지워도됨.
           //   delete acclist[i];
           //}
            cout << "프로그램을 종료합니다.\n";
            return 0;
        default:
            cout << "메뉴의 선택이 올바르지 않습니다.\n";
        }
    }

    return 0;
}