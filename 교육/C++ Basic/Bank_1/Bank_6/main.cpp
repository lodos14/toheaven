#include<iostream>
#include<string>
using namespace std;
#include"AccountManager.h"
#include"Account.h"

// 열거형
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

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
			//	delete acclist[i];
			//}
			cout << "프로그램을 종료합니다.\n";
			return 0;
		default:
			cout << "메뉴의 선택이 올바르지 않습니다.\n";
		}
	}

	return 0;
}
