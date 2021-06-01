/*
 ��Ʈ������
 - ��Ʈ(bit = binary digit, 2����)�� ��ȯ�ؼ� ����� �ϴ� ������
 - ���� : &(AND), |(OR), ^(XOR) - ���׿�����
          ~(NOT), <<(Left shift), >>(right shift) - ���׿�����
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
       1 111 0000 -> 2�� ���� = 1�Ǻ��� + LSB1
       1 000 1111 
       +        1
       1 001 0000 -16
    */

    return 0;

}