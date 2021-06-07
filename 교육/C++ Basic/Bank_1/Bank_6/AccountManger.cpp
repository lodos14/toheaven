#include<iostream>
#include<string>
using namespace std;
#include"AccountManager.h"
const int NAME_LEN = 20; //


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
	//accNum++;	                                            기존에 들어오면 동적할당이 됨.
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
