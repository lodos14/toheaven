/*
 비트연산자
 - 비트(bit = binary digit, 2진수)로 변환해서 계산을 하는 연산자
 - 종류 : &(AND), |(OR), ^(XOR) - 이항연산자
          ~(NOT), <<(Left shift), >>(right shift) - 단항연산자
*/
#include<iostream>
using namespace std;

int main() {
    int num1 = 15; // 1111(2)
    int num2 = 8; // 1000(2)

    cout << "AND = "<< (num1 & num2) << endl; //1000(2) = 8
    cout << "OR = " <<(num1 | num2) << endl; // 1111(2) =15
    cout << "XOR = " <<(num1 ^ num2) << endl; // 0111(2) = 7
    cout << "~num1 = " <<(~num1) << endl; 
    /*
       0000 1111: 15
       1111 0000: ~15
       1 111 0000 -> 2의 보수 = 1의보수 + LSB1
       1 000 1111 
       +        1
       1 001 0000 -16
    */

    return 0;

}