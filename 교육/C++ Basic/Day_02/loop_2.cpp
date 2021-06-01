/*
   무한loop : 지속적으로 반복을 수행하는 것.
   while(True, 1){....}
   for( ;; ){ .... }
   do{....} while(true);
   while 문 : 사용자에 의해 반복을 제어할 때, loop 제어할 때
*/

// 숫자를 입력받아 출력하는 프로그램, 단 입력받은 숫자가 0이면 종료

#include<iostream>
using namespace std;



int main() {
    int num;

    while (true) {

        cout << "num = ";
        cin >> num;
        if (num == 0)
            break;
        cout << num << endl;

    }

    return 0;
}